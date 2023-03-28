// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_types:action/PID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
#include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_types/action/detail/pid__functions.h"
#include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `desired_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_Goal__init(message_memory);
}

void PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_fini_function(void * message_memory)
{
  robot_types__action__PID_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_member_array[1] = {
  {
    "desired_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_Goal, desired_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_members = {
  "robot_types__action",  // message namespace
  "PID_Goal",  // message name
  1,  // number of fields
  sizeof(robot_types__action__PID_Goal),
  PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_member_array,  // message members
  PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_type_support_handle = {
  0,
  &PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Goal)() {
  if (!PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_type_support_handle.typesupport_identifier) {
    PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_Goal__rosidl_typesupport_introspection_c__PID_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `current_state`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_Result__rosidl_typesupport_introspection_c__PID_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_Result__init(message_memory);
}

void PID_Result__rosidl_typesupport_introspection_c__PID_Result_fini_function(void * message_memory)
{
  robot_types__action__PID_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_member_array[1] = {
  {
    "current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_Result, current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_members = {
  "robot_types__action",  // message namespace
  "PID_Result",  // message name
  1,  // number of fields
  sizeof(robot_types__action__PID_Result),
  PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_member_array,  // message members
  PID_Result__rosidl_typesupport_introspection_c__PID_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_Result__rosidl_typesupport_introspection_c__PID_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_type_support_handle = {
  0,
  &PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Result)() {
  if (!PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_type_support_handle.typesupport_identifier) {
    PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_Result__rosidl_typesupport_introspection_c__PID_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `ongoing_state`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_Feedback__init(message_memory);
}

void PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_fini_function(void * message_memory)
{
  robot_types__action__PID_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_member_array[1] = {
  {
    "ongoing_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_Feedback, ongoing_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_members = {
  "robot_types__action",  // message namespace
  "PID_Feedback",  // message name
  1,  // number of fields
  sizeof(robot_types__action__PID_Feedback),
  PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_member_array,  // message members
  PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_type_support_handle = {
  0,
  &PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Feedback)() {
  if (!PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_type_support_handle.typesupport_identifier) {
    PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_Feedback__rosidl_typesupport_introspection_c__PID_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robot_types/action/pid.h"
// Member `goal`
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_SendGoal_Request__init(message_memory);
}

void PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_fini_function(void * message_memory)
{
  robot_types__action__PID_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_members = {
  "robot_types__action",  // message namespace
  "PID_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robot_types__action__PID_SendGoal_Request),
  PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_member_array,  // message members
  PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_type_support_handle = {
  0,
  &PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Request)() {
  PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Goal)();
  if (!PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_SendGoal_Request__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_SendGoal_Response__init(message_memory);
}

void PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_fini_function(void * message_memory)
{
  robot_types__action__PID_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_members = {
  "robot_types__action",  // message namespace
  "PID_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robot_types__action__PID_SendGoal_Response),
  PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_member_array,  // message members
  PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_type_support_handle = {
  0,
  &PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Response)() {
  PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_SendGoal_Response__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_members = {
  "robot_types__action",  // service namespace
  "PID_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_type_support_handle = {
  0,
  &robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal)() {
  if (!robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_type_support_handle.typesupport_identifier) {
    robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_SendGoal_Response)()->data;
  }

  return &robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_GetResult_Request__init(message_memory);
}

void PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_fini_function(void * message_memory)
{
  robot_types__action__PID_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_members = {
  "robot_types__action",  // message namespace
  "PID_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robot_types__action__PID_GetResult_Request),
  PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_member_array,  // message members
  PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_type_support_handle = {
  0,
  &PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Request)() {
  PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_GetResult_Request__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robot_types/action/pid.h"
// Member `result`
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_GetResult_Response__init(message_memory);
}

void PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_fini_function(void * message_memory)
{
  robot_types__action__PID_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_members = {
  "robot_types__action",  // message namespace
  "PID_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robot_types__action__PID_GetResult_Response),
  PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_member_array,  // message members
  PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_type_support_handle = {
  0,
  &PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Response)() {
  PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Result)();
  if (!PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_GetResult_Response__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_members = {
  "robot_types__action",  // service namespace
  "PID_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_type_support_handle = {
  0,
  &robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult)() {
  if (!robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_type_support_handle.typesupport_identifier) {
    robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_GetResult_Response)()->data;
  }

  return &robot_types__action__detail__pid__rosidl_typesupport_introspection_c__PID_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_types/action/detail/pid__functions.h"
// already included above
// #include "robot_types/action/detail/pid__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robot_types/action/pid.h"
// Member `feedback`
// already included above
// #include "robot_types/action/detail/pid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_types__action__PID_FeedbackMessage__init(message_memory);
}

void PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_fini_function(void * message_memory)
{
  robot_types__action__PID_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_types__action__PID_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_members = {
  "robot_types__action",  // message namespace
  "PID_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robot_types__action__PID_FeedbackMessage),
  PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_member_array,  // message members
  PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_type_support_handle = {
  0,
  &PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_FeedbackMessage)() {
  PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_types, action, PID_Feedback)();
  if (!PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PID_FeedbackMessage__rosidl_typesupport_introspection_c__PID_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
