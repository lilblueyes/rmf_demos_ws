// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_obstacle_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice
#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_obstacle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_obstacle_msgs/msg/detail/obstacles__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
bool cdr_serialize_rmf_obstacle_msgs__msg__Obstacles(
  const rmf_obstacle_msgs__msg__Obstacles * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
bool cdr_deserialize_rmf_obstacle_msgs__msg__Obstacles(
  eprosima::fastcdr::Cdr &,
  rmf_obstacle_msgs__msg__Obstacles * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
size_t get_serialized_size_rmf_obstacle_msgs__msg__Obstacles(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
size_t max_serialized_size_rmf_obstacle_msgs__msg__Obstacles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
bool cdr_serialize_key_rmf_obstacle_msgs__msg__Obstacles(
  const rmf_obstacle_msgs__msg__Obstacles * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
size_t get_serialized_size_key_rmf_obstacle_msgs__msg__Obstacles(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
size_t max_serialized_size_key_rmf_obstacle_msgs__msg__Obstacles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_obstacle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_obstacle_msgs, msg, Obstacles)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
