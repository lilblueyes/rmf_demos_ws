// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice
#ifndef RMF_TASK_MSGS__MSG__DETAIL__CLEAN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_TASK_MSGS__MSG__DETAIL__CLEAN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_task_msgs/msg/detail/clean__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
bool cdr_serialize_rmf_task_msgs__msg__Clean(
  const rmf_task_msgs__msg__Clean * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
bool cdr_deserialize_rmf_task_msgs__msg__Clean(
  eprosima::fastcdr::Cdr &,
  rmf_task_msgs__msg__Clean * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_rmf_task_msgs__msg__Clean(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_rmf_task_msgs__msg__Clean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
bool cdr_serialize_key_rmf_task_msgs__msg__Clean(
  const rmf_task_msgs__msg__Clean * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t get_serialized_size_key_rmf_task_msgs__msg__Clean(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
size_t max_serialized_size_key_rmf_task_msgs__msg__Clean(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_task_msgs, msg, Clean)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__CLEAN__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
