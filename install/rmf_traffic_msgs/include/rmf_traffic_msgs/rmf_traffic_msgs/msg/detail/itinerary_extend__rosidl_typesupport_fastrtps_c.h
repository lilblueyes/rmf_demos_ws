// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
// generated code does not contain a copyright notice
#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_extend__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
bool cdr_serialize_rmf_traffic_msgs__msg__ItineraryExtend(
  const rmf_traffic_msgs__msg__ItineraryExtend * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
bool cdr_deserialize_rmf_traffic_msgs__msg__ItineraryExtend(
  eprosima::fastcdr::Cdr &,
  rmf_traffic_msgs__msg__ItineraryExtend * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_rmf_traffic_msgs__msg__ItineraryExtend(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_rmf_traffic_msgs__msg__ItineraryExtend(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
bool cdr_serialize_key_rmf_traffic_msgs__msg__ItineraryExtend(
  const rmf_traffic_msgs__msg__ItineraryExtend * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t get_serialized_size_key_rmf_traffic_msgs__msg__ItineraryExtend(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
size_t max_serialized_size_key_rmf_traffic_msgs__msg__ItineraryExtend(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_traffic_msgs, msg, ItineraryExtend)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
