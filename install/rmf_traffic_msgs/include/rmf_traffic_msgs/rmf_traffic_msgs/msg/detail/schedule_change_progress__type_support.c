// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__struct.h"


// Include directives for member types
// Member `checkpoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleChangeProgress__init(message_memory);
}

void rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleChangeProgress__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__size_function__ScheduleChangeProgress__checkpoints(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeProgress__checkpoints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_function__ScheduleChangeProgress__checkpoints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__fetch_function__ScheduleChangeProgress__checkpoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeProgress__checkpoints(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__assign_function__ScheduleChangeProgress__checkpoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_function__ScheduleChangeProgress__checkpoints(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeProgress__checkpoints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_member_array[3] = {
  {
    "has_progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleChangeProgress, has_progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleChangeProgress, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "checkpoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleChangeProgress, checkpoints),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__size_function__ScheduleChangeProgress__checkpoints,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_const_function__ScheduleChangeProgress__checkpoints,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__get_function__ScheduleChangeProgress__checkpoints,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__fetch_function__ScheduleChangeProgress__checkpoints,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__assign_function__ScheduleChangeProgress__checkpoints,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__resize_function__ScheduleChangeProgress__checkpoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleChangeProgress",  // message name
  3,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleChangeProgress),
  false,  // has_any_key_member_
  rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_member_array,  // message members
  rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_members,
  get_message_typesupport_handle_function,
  &rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_hash,
  &rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_description,
  &rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeProgress)() {
  if (!rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__ScheduleChangeProgress__rosidl_typesupport_introspection_c__ScheduleChangeProgress_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
