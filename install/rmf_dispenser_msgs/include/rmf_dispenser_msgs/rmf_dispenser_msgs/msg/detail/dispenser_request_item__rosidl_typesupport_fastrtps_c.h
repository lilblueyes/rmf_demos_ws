// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice
#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_dispenser_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
bool cdr_serialize_rmf_dispenser_msgs__msg__DispenserRequestItem(
  const rmf_dispenser_msgs__msg__DispenserRequestItem * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
bool cdr_deserialize_rmf_dispenser_msgs__msg__DispenserRequestItem(
  eprosima::fastcdr::Cdr &,
  rmf_dispenser_msgs__msg__DispenserRequestItem * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
size_t get_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
size_t max_serialized_size_rmf_dispenser_msgs__msg__DispenserRequestItem(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
bool cdr_serialize_key_rmf_dispenser_msgs__msg__DispenserRequestItem(
  const rmf_dispenser_msgs__msg__DispenserRequestItem * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
size_t get_serialized_size_key_rmf_dispenser_msgs__msg__DispenserRequestItem(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
size_t max_serialized_size_key_rmf_dispenser_msgs__msg__DispenserRequestItem(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_dispenser_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_dispenser_msgs, msg, DispenserRequestItem)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
