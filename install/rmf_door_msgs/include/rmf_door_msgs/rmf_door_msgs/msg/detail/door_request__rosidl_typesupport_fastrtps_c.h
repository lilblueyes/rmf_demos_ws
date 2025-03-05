// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice
#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_door_msgs/msg/detail/door_request__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
bool cdr_serialize_rmf_door_msgs__msg__DoorRequest(
  const rmf_door_msgs__msg__DoorRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
bool cdr_deserialize_rmf_door_msgs__msg__DoorRequest(
  eprosima::fastcdr::Cdr &,
  rmf_door_msgs__msg__DoorRequest * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t get_serialized_size_rmf_door_msgs__msg__DoorRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t max_serialized_size_rmf_door_msgs__msg__DoorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
bool cdr_serialize_key_rmf_door_msgs__msg__DoorRequest(
  const rmf_door_msgs__msg__DoorRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t get_serialized_size_key_rmf_door_msgs__msg__DoorRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
size_t max_serialized_size_key_rmf_door_msgs__msg__DoorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_door_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_door_msgs, msg, DoorRequest)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
