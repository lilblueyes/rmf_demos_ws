// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_scheduler_msgs/msg/detail/trigger_state__rosidl_typesupport_introspection_c.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_scheduler_msgs/msg/detail/trigger_state__functions.h"
#include "rmf_scheduler_msgs/msg/detail/trigger_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__msg__TriggerState__init(message_memory);
}

void rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__msg__TriggerState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__TriggerState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__TriggerState, last_modified),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_ran",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__TriggerState, last_ran),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__TriggerState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_members = {
  "rmf_scheduler_msgs__msg",  // message namespace
  "TriggerState",  // message name
  4,  // number of fields
  sizeof(rmf_scheduler_msgs__msg__TriggerState),
  false,  // has_any_key_member_
  rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_member_array,  // message members
  rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_members,
  get_message_typesupport_handle_function,
  &rmf_scheduler_msgs__msg__TriggerState__get_type_hash,
  &rmf_scheduler_msgs__msg__TriggerState__get_type_description,
  &rmf_scheduler_msgs__msg__TriggerState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, msg, TriggerState)() {
  if (!rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__msg__TriggerState__rosidl_typesupport_introspection_c__TriggerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
