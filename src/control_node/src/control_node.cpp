#include <functional>
#include <memory>
#include <thread>
#include <vector>
#include <iostream>

#include "control_interface.hpp"
#include "robot_types/action/pid.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

using PIDAction = robot_types::action::PID;
using GoalHandlePIDAction = rclcpp_action::ServerGoalHandle<PIDAction>;
using namespace std::placeholders;


class Controller : public rclcpp::Node
{
public:

  explicit Controller()
  : Node("Controller")
  {

    this->action_server_ = rclcpp_action::create_server<PIDAction>
    (
      this,
      "PIDAction",
      std::bind(&Controller::handle_goal, this, _1, _2),
      std::bind(&Controller::handle_cancel, this, _1),
      std::bind(&Controller::handle_accepted, this, _1)
    );
  }

private:
  rclcpp_action::Server<PIDAction>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal
  (
    const rclcpp_action::GoalUUID& uuid,
    std::shared_ptr<const PIDAction::Goal> goal
  )
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->desired_state);
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel
  (
    const std::shared_ptr<GoalHandlePIDAction> goal_handle
  )
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted
  (
    const std::shared_ptr<GoalHandlePIDAction> goal_handle
  )
  {
    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&Controller::execute, this, _1), goal_handle}.detach();
  }

  ///////////////////////////////////////////////////////////////////////////////
                                // FUNCTIONALITY //  
  ///////////////////////////////////////////////////////////////////////////////

  bool areEqual(float float1, float float2, float epsilon)
  {
    return (fabs(float1 - float2) < epsilon);
  }

  bool areEqual(std::vector<float>& current_state, std::vector<float>& desired_state)
  {
    bool equal = true;
    for (std::vector<float>::size_type i = 0; i < current_state.size(); i++)
    {
        if (!areEqual(current_state[i], desired_state[i], (.005F*desired_state[i])))
        {
            equal = false;
        }
    }
    return equal;
  }

  void execute(const std::shared_ptr<GoalHandlePIDAction> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(100);

    std::shared_ptr<PIDAction::Feedback> feedback = std::make_shared<PIDAction::Feedback>();
    std::shared_ptr<PIDAction::Result> result = std::make_shared<PIDAction::Result>();
    const auto goal = goal_handle->get_goal();

    std::vector<float>& state = feedback->ongoing_state;
    state.push_back(0.0F);
    state.push_back(0.0F);
    state.push_back(0.0F);
    state.push_back(0.0F);
    state.push_back(0.0F);
    state.push_back(0.0F);
    
    std::vector<float> desired_state = goal->desired_state;

    while (!areEqual(state, desired_state)) {
    //   Check if there is a cancel request
      if (goal_handle->is_canceling()) {
        result->current_state = state;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }
      std::stringstream ss;
      // Update sequence
      for (float& element : state)
      {
        element += .1;
        // ss << element << " ";
      }
      // Publish feedback
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "Publish feedback");

      loop_rate.sleep();

    }
    // Check if goal is done
    if (rclcpp::ok()) {
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal succeeded");
    }

  }
};  // class Controller

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Controller>());
  rclcpp::shutdown();
  return 0;
}