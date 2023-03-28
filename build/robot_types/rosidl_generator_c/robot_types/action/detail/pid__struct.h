// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_types:action/PID.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_TYPES__ACTION__DETAIL__PID__STRUCT_H_
#define ROBOT_TYPES__ACTION__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desired_state'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_Goal
{
  rosidl_runtime_c__float__Sequence desired_state;
} robot_types__action__PID_Goal;

// Struct for a sequence of robot_types__action__PID_Goal.
typedef struct robot_types__action__PID_Goal__Sequence
{
  robot_types__action__PID_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_Result
{
  rosidl_runtime_c__float__Sequence current_state;
} robot_types__action__PID_Result;

// Struct for a sequence of robot_types__action__PID_Result.
typedef struct robot_types__action__PID_Result__Sequence
{
  robot_types__action__PID_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ongoing_state'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_Feedback
{
  rosidl_runtime_c__float__Sequence ongoing_state;
} robot_types__action__PID_Feedback;

// Struct for a sequence of robot_types__action__PID_Feedback.
typedef struct robot_types__action__PID_Feedback__Sequence
{
  robot_types__action__PID_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_types/action/detail/pid__struct.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_types__action__PID_Goal goal;
} robot_types__action__PID_SendGoal_Request;

// Struct for a sequence of robot_types__action__PID_SendGoal_Request.
typedef struct robot_types__action__PID_SendGoal_Request__Sequence
{
  robot_types__action__PID_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_types__action__PID_SendGoal_Response;

// Struct for a sequence of robot_types__action__PID_SendGoal_Response.
typedef struct robot_types__action__PID_SendGoal_Response__Sequence
{
  robot_types__action__PID_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_types__action__PID_GetResult_Request;

// Struct for a sequence of robot_types__action__PID_GetResult_Request.
typedef struct robot_types__action__PID_GetResult_Request__Sequence
{
  robot_types__action__PID_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_types/action/detail/pid__struct.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_GetResult_Response
{
  int8_t status;
  robot_types__action__PID_Result result;
} robot_types__action__PID_GetResult_Response;

// Struct for a sequence of robot_types__action__PID_GetResult_Response.
typedef struct robot_types__action__PID_GetResult_Response__Sequence
{
  robot_types__action__PID_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_types/action/detail/pid__struct.h"

// Struct defined in action/PID in the package robot_types.
typedef struct robot_types__action__PID_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_types__action__PID_Feedback feedback;
} robot_types__action__PID_FeedbackMessage;

// Struct for a sequence of robot_types__action__PID_FeedbackMessage.
typedef struct robot_types__action__PID_FeedbackMessage__Sequence
{
  robot_types__action__PID_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_types__action__PID_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_TYPES__ACTION__DETAIL__PID__STRUCT_H_
