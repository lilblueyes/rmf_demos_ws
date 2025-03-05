// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_lift_msgs/msg/detail/lift_request__rosidl_typesupport_introspection_c.h"
#include "rmf_lift_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_lift_msgs/msg/detail/lift_request__functions.h"
#include "rmf_lift_msgs/msg/detail/lift_request__struct.h"


// Include directives for member types
// Member `lift_name`
// Member `session_id`
// Member `destination_floor`
#include "rosidl_runtime_c/string_functions.h"
// Member `request_time`
#include "builtin_interfaces/msg/time.h"
// Member `request_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_lift_msgs__msg__LiftRequest__init(message_memory);
}

void rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_fini_function(void * message_memory)
{
  rmf_lift_msgs__msg__LiftRequest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_member_array[6] = {
  {
    "lift_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, lift_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, request_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, request_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_floor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, destination_floor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftRequest, door_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_members = {
  "rmf_lift_msgs__msg",  // message namespace
  "LiftRequest",  // message name
  6,  // number of fields
  sizeof(rmf_lift_msgs__msg__LiftRequest),
  false,  // has_any_key_member_
  rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_member_array,  // message members
  rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_type_support_handle = {
  0,
  &rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_members,
  get_message_typesupport_handle_function,
  &rmf_lift_msgs__msg__LiftRequest__get_type_hash,
  &rmf_lift_msgs__msg__LiftRequest__get_type_description,
  &rmf_lift_msgs__msg__LiftRequest__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_lift_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_lift_msgs, msg, LiftRequest)() {
  rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_type_support_handle.typesupport_identifier) {
    rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_lift_msgs__msg__LiftRequest__rosidl_typesupport_introspection_c__LiftRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
