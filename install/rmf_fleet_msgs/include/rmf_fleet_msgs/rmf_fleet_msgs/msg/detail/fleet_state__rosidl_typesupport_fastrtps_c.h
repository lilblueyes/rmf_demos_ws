// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice
#ifndef RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_fleet_msgs/msg/detail/fleet_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
bool cdr_serialize_rmf_fleet_msgs__msg__FleetState(
  const rmf_fleet_msgs__msg__FleetState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
bool cdr_deserialize_rmf_fleet_msgs__msg__FleetState(
  eprosima::fastcdr::Cdr &,
  rmf_fleet_msgs__msg__FleetState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t get_serialized_size_rmf_fleet_msgs__msg__FleetState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t max_serialized_size_rmf_fleet_msgs__msg__FleetState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
bool cdr_serialize_key_rmf_fleet_msgs__msg__FleetState(
  const rmf_fleet_msgs__msg__FleetState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t get_serialized_size_key_rmf_fleet_msgs__msg__FleetState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
size_t max_serialized_size_key_rmf_fleet_msgs__msg__FleetState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_fleet_msgs, msg, FleetState)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
