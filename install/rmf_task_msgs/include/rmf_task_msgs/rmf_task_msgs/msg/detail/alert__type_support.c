// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/alert__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/alert__functions.h"
#include "rmf_task_msgs/msg/detail/alert__struct.h"


// Include directives for member types
// Member `id`
// Member `title`
// Member `subtitle`
// Member `message`
// Member `responses_available`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `alert_parameters`
#include "rmf_task_msgs/msg/alert_parameter.h"
// Member `alert_parameters`
#include "rmf_task_msgs/msg/detail/alert_parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__Alert__init(message_memory);
}

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__Alert__fini(message_memory);
}

size_t rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__size_function__Alert__responses_available(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__responses_available(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__responses_available(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__fetch_function__Alert__responses_available(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__responses_available(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__assign_function__Alert__responses_available(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__responses_available(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__resize_function__Alert__responses_available(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__size_function__Alert__alert_parameters(
  const void * untyped_member)
{
  const rmf_task_msgs__msg__AlertParameter__Sequence * member =
    (const rmf_task_msgs__msg__AlertParameter__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__alert_parameters(
  const void * untyped_member, size_t index)
{
  const rmf_task_msgs__msg__AlertParameter__Sequence * member =
    (const rmf_task_msgs__msg__AlertParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__alert_parameters(
  void * untyped_member, size_t index)
{
  rmf_task_msgs__msg__AlertParameter__Sequence * member =
    (rmf_task_msgs__msg__AlertParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__fetch_function__Alert__alert_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_task_msgs__msg__AlertParameter * item =
    ((const rmf_task_msgs__msg__AlertParameter *)
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__alert_parameters(untyped_member, index));
  rmf_task_msgs__msg__AlertParameter * value =
    (rmf_task_msgs__msg__AlertParameter *)(untyped_value);
  *value = *item;
}

void rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__assign_function__Alert__alert_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_task_msgs__msg__AlertParameter * item =
    ((rmf_task_msgs__msg__AlertParameter *)
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__alert_parameters(untyped_member, index));
  const rmf_task_msgs__msg__AlertParameter * value =
    (const rmf_task_msgs__msg__AlertParameter *)(untyped_value);
  *item = *value;
}

bool rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__resize_function__Alert__alert_parameters(
  void * untyped_member, size_t size)
{
  rmf_task_msgs__msg__AlertParameter__Sequence * member =
    (rmf_task_msgs__msg__AlertParameter__Sequence *)(untyped_member);
  rmf_task_msgs__msg__AlertParameter__Sequence__fini(member);
  return rmf_task_msgs__msg__AlertParameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "title",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, title),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subtitle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, subtitle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "display",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, display),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, tier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "responses_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, responses_available),  // bytes offset in struct
    NULL,  // default value
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__size_function__Alert__responses_available,  // size() function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__responses_available,  // get_const(index) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__responses_available,  // get(index) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__fetch_function__Alert__responses_available,  // fetch(index, &value) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__assign_function__Alert__responses_available,  // assign(index, value) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__resize_function__Alert__responses_available  // resize(index) function pointer
  },
  {
    "alert_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, alert_parameters),  // bytes offset in struct
    NULL,  // default value
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__size_function__Alert__alert_parameters,  // size() function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_const_function__Alert__alert_parameters,  // get_const(index) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__get_function__Alert__alert_parameters,  // get(index) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__fetch_function__Alert__alert_parameters,  // fetch(index, &value) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__assign_function__Alert__alert_parameters,  // assign(index, value) function pointer
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__resize_function__Alert__alert_parameters  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Alert, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "Alert",  // message name
  9,  // number of fields
  sizeof(rmf_task_msgs__msg__Alert),
  false,  // has_any_key_member_
  rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_member_array,  // message members
  rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_type_support_handle = {
  0,
  &rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_members,
  get_message_typesupport_handle_function,
  &rmf_task_msgs__msg__Alert__get_type_hash,
  &rmf_task_msgs__msg__Alert__get_type_description,
  &rmf_task_msgs__msg__Alert__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Alert)() {
  rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, AlertParameter)();
  if (!rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_task_msgs__msg__Alert__rosidl_typesupport_introspection_c__Alert_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
