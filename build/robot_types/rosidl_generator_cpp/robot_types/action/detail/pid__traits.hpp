// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_types:action/PID.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_TYPES__ACTION__DETAIL__PID__TRAITS_HPP_
#define ROBOT_TYPES__ACTION__DETAIL__PID__TRAITS_HPP_

#include "robot_types/action/detail/pid__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_Goal>()
{
  return "robot_types::action::PID_Goal";
}

template<>
inline const char * name<robot_types::action::PID_Goal>()
{
  return "robot_types/action/PID_Goal";
}

template<>
struct has_fixed_size<robot_types::action::PID_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_types::action::PID_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_types::action::PID_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_Result>()
{
  return "robot_types::action::PID_Result";
}

template<>
inline const char * name<robot_types::action::PID_Result>()
{
  return "robot_types/action/PID_Result";
}

template<>
struct has_fixed_size<robot_types::action::PID_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_types::action::PID_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_types::action::PID_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_Feedback>()
{
  return "robot_types::action::PID_Feedback";
}

template<>
inline const char * name<robot_types::action::PID_Feedback>()
{
  return "robot_types/action/PID_Feedback";
}

template<>
struct has_fixed_size<robot_types::action::PID_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_types::action::PID_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_types::action::PID_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robot_types/action/detail/pid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_SendGoal_Request>()
{
  return "robot_types::action::PID_SendGoal_Request";
}

template<>
inline const char * name<robot_types::action::PID_SendGoal_Request>()
{
  return "robot_types/action/PID_SendGoal_Request";
}

template<>
struct has_fixed_size<robot_types::action::PID_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robot_types::action::PID_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_types::action::PID_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robot_types::action::PID_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_types::action::PID_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_SendGoal_Response>()
{
  return "robot_types::action::PID_SendGoal_Response";
}

template<>
inline const char * name<robot_types::action::PID_SendGoal_Response>()
{
  return "robot_types/action/PID_SendGoal_Response";
}

template<>
struct has_fixed_size<robot_types::action::PID_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robot_types::action::PID_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robot_types::action::PID_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_SendGoal>()
{
  return "robot_types::action::PID_SendGoal";
}

template<>
inline const char * name<robot_types::action::PID_SendGoal>()
{
  return "robot_types/action/PID_SendGoal";
}

template<>
struct has_fixed_size<robot_types::action::PID_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_types::action::PID_SendGoal_Request>::value &&
    has_fixed_size<robot_types::action::PID_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_types::action::PID_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_types::action::PID_SendGoal_Request>::value &&
    has_bounded_size<robot_types::action::PID_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robot_types::action::PID_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robot_types::action::PID_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_types::action::PID_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_GetResult_Request>()
{
  return "robot_types::action::PID_GetResult_Request";
}

template<>
inline const char * name<robot_types::action::PID_GetResult_Request>()
{
  return "robot_types/action/PID_GetResult_Request";
}

template<>
struct has_fixed_size<robot_types::action::PID_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_types::action::PID_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_types::action::PID_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_types/action/detail/pid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_GetResult_Response>()
{
  return "robot_types::action::PID_GetResult_Response";
}

template<>
inline const char * name<robot_types::action::PID_GetResult_Response>()
{
  return "robot_types/action/PID_GetResult_Response";
}

template<>
struct has_fixed_size<robot_types::action::PID_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robot_types::action::PID_Result>::value> {};

template<>
struct has_bounded_size<robot_types::action::PID_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robot_types::action::PID_Result>::value> {};

template<>
struct is_message<robot_types::action::PID_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_GetResult>()
{
  return "robot_types::action::PID_GetResult";
}

template<>
inline const char * name<robot_types::action::PID_GetResult>()
{
  return "robot_types/action/PID_GetResult";
}

template<>
struct has_fixed_size<robot_types::action::PID_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_types::action::PID_GetResult_Request>::value &&
    has_fixed_size<robot_types::action::PID_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_types::action::PID_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_types::action::PID_GetResult_Request>::value &&
    has_bounded_size<robot_types::action::PID_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robot_types::action::PID_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robot_types::action::PID_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_types::action::PID_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robot_types/action/detail/pid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_types::action::PID_FeedbackMessage>()
{
  return "robot_types::action::PID_FeedbackMessage";
}

template<>
inline const char * name<robot_types::action::PID_FeedbackMessage>()
{
  return "robot_types/action/PID_FeedbackMessage";
}

template<>
struct has_fixed_size<robot_types::action::PID_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robot_types::action::PID_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_types::action::PID_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robot_types::action::PID_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_types::action::PID_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robot_types::action::PID>
  : std::true_type
{
};

template<>
struct is_action_goal<robot_types::action::PID_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robot_types::action::PID_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robot_types::action::PID_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOT_TYPES__ACTION__DETAIL__PID__TRAITS_HPP_
