// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_workcell_msgs:msg/WorkcellRequest.idl
// generated code does not contain a copyright notice
#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_workcell_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_workcell_msgs/msg/detail/workcell_request__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
bool cdr_serialize_rmf_workcell_msgs__msg__WorkcellRequest(
  const rmf_workcell_msgs__msg__WorkcellRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
bool cdr_deserialize_rmf_workcell_msgs__msg__WorkcellRequest(
  eprosima::fastcdr::Cdr &,
  rmf_workcell_msgs__msg__WorkcellRequest * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
size_t get_serialized_size_rmf_workcell_msgs__msg__WorkcellRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
size_t max_serialized_size_rmf_workcell_msgs__msg__WorkcellRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
bool cdr_serialize_key_rmf_workcell_msgs__msg__WorkcellRequest(
  const rmf_workcell_msgs__msg__WorkcellRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
size_t get_serialized_size_key_rmf_workcell_msgs__msg__WorkcellRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
size_t max_serialized_size_key_rmf_workcell_msgs__msg__WorkcellRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_workcell_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_workcell_msgs, msg, WorkcellRequest)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
