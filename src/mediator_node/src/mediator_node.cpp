#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <unistd.h>  
#include "robot_types/action/pid.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"


class Mediator : public rclcpp::Node
{
public:
  using PID = robot_types::action::PID;
  using GoalHandlePID = rclcpp_action::ClientGoalHandle<PID>;

  explicit Mediator(const rclcpp::NodeOptions & options)
  : Node("PID_action_client", options)
  {
    this->client_ptr_ = rclcpp_action::create_client<PID>(
      this,
      "PID");

    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(4000),
      std::bind(&Mediator::send_goal, this));

    this->cancel_timer_ = this->create_wall_timer(
      std::chrono::milliseconds(6000),
      std::bind(&Mediator::cancel_goal, this));
  }

  void send_goal()
  {
    using namespace std::placeholders;

    // this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    auto goal_msg = PID::Goal();
    goal_msg.desired_state = std::vector<float>{10.0F,10.0F,10.0F,10.0F,10.0F,10.0F};

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<PID>::SendGoalOptions();
    send_goal_options.goal_response_callback = std::bind(&Mediator::goal_response_callback, this, _1);
    send_goal_options.feedback_callback = std::bind(&Mediator::feedback_callback, this, _1, _2);
    send_goal_options.result_callback = std::bind(&Mediator::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

  void cancel_goal()
  {
    using namespace std::placeholders;
    auto cancel_goal_options = rclcpp_action::Client<PID>::CancelRequest();
    this->client_ptr_->async_cancel_all_goals();
  }
  

private:
  rclcpp_action::Client<PID>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::TimerBase::SharedPtr cancel_timer_;

  void goal_response_callback
  (
    std::shared_future<GoalHandlePID::SharedPtr> future
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
    GoalHandlePID::SharedPtr, const std::shared_ptr<const PID::Feedback> feedback
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
    const GoalHandlePID::WrappedResult & result
  )
  {
    switch (result.code) {
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

    std::stringstream ss;
    ss << "State Accomplished: ";
    std::vector<float>& complete = result.result->current_state; 
    for (float element : complete)
    {
        ss << element << " ";
    }
    RCLCPP_INFO(this->get_logger(), ss.str().c_str());
    std::cout << "Done! \n";
    sleep(1);
    std::cout << "Waited! \n";

  }
};  // class Mediator

RCLCPP_COMPONENTS_REGISTER_NODE(Mediator)