// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_door_msgs:msg/Session.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_door_msgs/msg/detail/session__rosidl_typesupport_introspection_c.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_door_msgs/msg/detail/session__functions.h"
#include "rmf_door_msgs/msg/detail/session__struct.h"


// Include directives for member types
// Member `request_time`
#include "builtin_interfaces/msg/time.h"
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `requester_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_door_msgs__msg__Session__init(message_memory);
}

void rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_fini_function(void * message_memory)
{
  rmf_door_msgs__msg__Session__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_member_array[2] = {
  {
    "request_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__Session, request_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requester_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__Session, requester_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_members = {
  "rmf_door_msgs__msg",  // message namespace
  "Session",  // message name
  2,  // number of fields
  sizeof(rmf_door_msgs__msg__Session),
  false,  // has_any_key_member_
  rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_member_array,  // message members
  rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_type_support_handle = {
  0,
  &rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_members,
  get_message_typesupport_handle_function,
  &rmf_door_msgs__msg__Session__get_type_hash,
  &rmf_door_msgs__msg__Session__get_type_description,
  &rmf_door_msgs__msg__Session__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_door_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, Session)() {
  rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_type_support_handle.typesupport_identifier) {
    rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_door_msgs__msg__Session__rosidl_typesupport_introspection_c__Session_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
