// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_types:action/PID.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_TYPES__ACTION__DETAIL__PID__BUILDER_HPP_
#define ROBOT_TYPES__ACTION__DETAIL__PID__BUILDER_HPP_

#include "robot_types/action/detail/pid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_Goal_desired_state
{
public:
  Init_PID_Goal_desired_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_types::action::PID_Goal desired_state(::robot_types::action::PID_Goal::_desired_state_type arg)
  {
    msg_.desired_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_Goal>()
{
  return robot_types::action::builder::Init_PID_Goal_desired_state();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_Result_current_state
{
public:
  Init_PID_Result_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_types::action::PID_Result current_state(::robot_types::action::PID_Result::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_Result>()
{
  return robot_types::action::builder::Init_PID_Result_current_state();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_Feedback_ongoing_state
{
public:
  Init_PID_Feedback_ongoing_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_types::action::PID_Feedback ongoing_state(::robot_types::action::PID_Feedback::_ongoing_state_type arg)
  {
    msg_.ongoing_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_Feedback>()
{
  return robot_types::action::builder::Init_PID_Feedback_ongoing_state();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_SendGoal_Request_goal
{
public:
  explicit Init_PID_SendGoal_Request_goal(::robot_types::action::PID_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_types::action::PID_SendGoal_Request goal(::robot_types::action::PID_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_SendGoal_Request msg_;
};

class Init_PID_SendGoal_Request_goal_id
{
public:
  Init_PID_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_SendGoal_Request_goal goal_id(::robot_types::action::PID_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PID_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_types::action::PID_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_SendGoal_Request>()
{
  return robot_types::action::builder::Init_PID_SendGoal_Request_goal_id();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_SendGoal_Response_stamp
{
public:
  explicit Init_PID_SendGoal_Response_stamp(::robot_types::action::PID_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_types::action::PID_SendGoal_Response stamp(::robot_types::action::PID_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_SendGoal_Response msg_;
};

class Init_PID_SendGoal_Response_accepted
{
public:
  Init_PID_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_SendGoal_Response_stamp accepted(::robot_types::action::PID_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PID_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_types::action::PID_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_SendGoal_Response>()
{
  return robot_types::action::builder::Init_PID_SendGoal_Response_accepted();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_GetResult_Request_goal_id
{
public:
  Init_PID_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_types::action::PID_GetResult_Request goal_id(::robot_types::action::PID_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_GetResult_Request>()
{
  return robot_types::action::builder::Init_PID_GetResult_Request_goal_id();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_GetResult_Response_result
{
public:
  explicit Init_PID_GetResult_Response_result(::robot_types::action::PID_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_types::action::PID_GetResult_Response result(::robot_types::action::PID_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_GetResult_Response msg_;
};

class Init_PID_GetResult_Response_status
{
public:
  Init_PID_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_GetResult_Response_result status(::robot_types::action::PID_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PID_GetResult_Response_result(msg_);
  }

private:
  ::robot_types::action::PID_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_GetResult_Response>()
{
  return robot_types::action::builder::Init_PID_GetResult_Response_status();
}

}  // namespace robot_types


namespace robot_types
{

namespace action
{

namespace builder
{

class Init_PID_FeedbackMessage_feedback
{
public:
  explicit Init_PID_FeedbackMessage_feedback(::robot_types::action::PID_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_types::action::PID_FeedbackMessage feedback(::robot_types::action::PID_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_types::action::PID_FeedbackMessage msg_;
};

class Init_PID_FeedbackMessage_goal_id
{
public:
  Init_PID_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_FeedbackMessage_feedback goal_id(::robot_types::action::PID_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PID_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_types::action::PID_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_types::action::PID_FeedbackMessage>()
{
  return robot_types::action::builder::Init_PID_FeedbackMessage_goal_id();
}

}  // namespace robot_types

#endif  // ROBOT_TYPES__ACTION__DETAIL__PID__BUILDER_HPP_
