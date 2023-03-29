#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <unistd.h>
#include <deque>

#include "robot_types/action/pid.hpp"
#include "control_interface.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

using PIDAction = robot_types::action::PID;
using GoalHandlePIDAction = rclcpp_action::ClientGoalHandle<PIDAction>;

class Mediator : public rclcpp::Node
{
public:
  explicit Mediator()
  : Node("Mediator")
  {
    this->client_ptr_ = rclcpp_action::create_client<PIDAction>
    (
      this,
      "PIDAction"
    );

    this->populateQueue();
    
    current_command_ = nullptr;

    this->timer_ = this->create_wall_timer
    (
      std::chrono::milliseconds(100), 
      std::bind(&Mediator::nextCommand, this)
    );


    // this->timer_ = this->create_wall_timer(
    //   std::chrono::milliseconds(4000),
    //   std::bind(&Mediator::send_goal, this));

    // this->cancel_timer_ = this->create_wall_timer(
    //   std::chrono::milliseconds(6000),
    //   std::bind(&Mediator::cancel_goal, this));
  }

  void send_goal(Interface::desired_state_t& desired)
  {
    using namespace std::placeholders;
    if (!this->client_ptr_->wait_for_action_server()) 
    {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }
    auto goal_msg = PIDAction::Goal();
    goal_msg.desired_state = desired;
    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<PIDAction>::SendGoalOptions();
    send_goal_options.goal_response_callback = std::bind(&Mediator::goal_response_callback, this, _1);
    send_goal_options.feedback_callback = std::bind(&Mediator::feedback_callback, this, _1, _2);
    send_goal_options.result_callback = std::bind(&Mediator::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

  void cancel_goal()
  {
    using namespace std::placeholders;
    auto cancel_goal_options = rclcpp_action::Client<PIDAction>::CancelRequest();
    this->client_ptr_->async_cancel_all_goals();
  }
  

private:
  rclcpp_action::Client<PIDAction>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;
  // rclcpp::TimerBase::SharedPtr cancel_timer_;
  std::deque<Interface::Command> command_queue_;
  Interface::Command* current_command_; 

  void goal_response_callback
  (
    std::shared_future<GoalHandlePIDAction::SharedPtr> future
  )
  {
    auto goal_handle = future.get();
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  void feedback_callback
  (
    GoalHandlePIDAction::SharedPtr, const std::shared_ptr<const PIDAction::Feedback> feedback
  )
  {
    // std::stringstream ss;
    // ss << "Current State: ";
    // for (float element : feedback->ongoing_state) {
    //   ss << element << " ";
    // }
    // RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }

  void result_callback
  (
    const GoalHandlePIDAction::WrappedResult & result
  )
  {
    switch (result.code) 
    {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }

    /* SUCCESS STATE */
    std::stringstream ss;
    ss << "State Accomplished; Setting Current Command to Null\n";
    current_command_ = nullptr;
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    std::cout << "New! \n";
    sleep(.005);
    std::cout << "Thing! \n";

  }

  void nextCommand()
  {
    using namespace Interface;
    if (this->command_queue_.size() > 0 && current_command_ == nullptr)
    {
      this->current_command_ = &command_queue_[0];
      this->command_queue_.pop_front();
      
      simple_movement_func func = current_command_->function.movement;
      desired_state_t desired = (*func)();
      this->send_goal(desired);
    }
  }

  void populateQueue()
  {
    using namespace Interface;
    Command command1;
    command1.function.movement = &count;
    Command command2;
    command2.function.movement = &count;
    Command command3;
    command3.function.movement = &count;

    this->command_queue_.push_back(command1);
    this->command_queue_.push_back(command2);
    this->command_queue_.push_back(command3);
  }

};  // class Mediator

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Mediator>());
  rclcpp::shutdown();
  return 0;
}