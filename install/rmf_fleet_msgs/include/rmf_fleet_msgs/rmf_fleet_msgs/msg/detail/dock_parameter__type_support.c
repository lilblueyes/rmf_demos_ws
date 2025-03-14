// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/dock_parameter__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__functions.h"
#include "rmf_fleet_msgs/msg/detail/dock_parameter__struct.h"


// Include directives for member types
// Member `start`
// Member `finish`
#include "rosidl_runtime_c/string_functions.h"
// Member `path`
#include "rmf_fleet_msgs/msg/location.h"
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__DockParameter__init(message_memory);
}

void rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__DockParameter__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__size_function__DockParameter__path(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_const_function__DockParameter__path(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_function__DockParameter__path(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__fetch_function__DockParameter__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__msg__Location * item =
    ((const rmf_fleet_msgs__msg__Location *)
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_const_function__DockParameter__path(untyped_member, index));
  rmf_fleet_msgs__msg__Location * value =
    (rmf_fleet_msgs__msg__Location *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__assign_function__DockParameter__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__msg__Location * item =
    ((rmf_fleet_msgs__msg__Location *)
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_function__DockParameter__path(untyped_member, index));
  const rmf_fleet_msgs__msg__Location * value =
    (const rmf_fleet_msgs__msg__Location *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__resize_function__DockParameter__path(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__Location__Sequence__fini(member);
  return rmf_fleet_msgs__msg__Location__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array[3] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finish",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, finish),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DockParameter, path),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__size_function__DockParameter__path,  // size() function pointer
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_const_function__DockParameter__path,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__get_function__DockParameter__path,  // get(index) function pointer
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__fetch_function__DockParameter__path,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__assign_function__DockParameter__path,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__resize_function__DockParameter__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "DockParameter",  // message name
  3,  // number of fields
  sizeof(rmf_fleet_msgs__msg__DockParameter),
  false,  // has_any_key_member_
  rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array,  // message members
  rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_members,
  get_message_typesupport_handle_function,
  &rmf_fleet_msgs__msg__DockParameter__get_type_hash,
  &rmf_fleet_msgs__msg__DockParameter__get_type_description,
  &rmf_fleet_msgs__msg__DockParameter__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DockParameter)() {
  rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Location)();
  if (!rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__DockParameter__rosidl_typesupport_introspection_c__DockParameter_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
