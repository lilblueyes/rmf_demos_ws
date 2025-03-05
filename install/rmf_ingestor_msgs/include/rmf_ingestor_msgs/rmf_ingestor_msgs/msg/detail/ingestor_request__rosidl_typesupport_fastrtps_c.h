// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice
#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
bool cdr_serialize_rmf_ingestor_msgs__msg__IngestorRequest(
  const rmf_ingestor_msgs__msg__IngestorRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
bool cdr_deserialize_rmf_ingestor_msgs__msg__IngestorRequest(
  eprosima::fastcdr::Cdr &,
  rmf_ingestor_msgs__msg__IngestorRequest * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t get_serialized_size_rmf_ingestor_msgs__msg__IngestorRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t max_serialized_size_rmf_ingestor_msgs__msg__IngestorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
bool cdr_serialize_key_rmf_ingestor_msgs__msg__IngestorRequest(
  const rmf_ingestor_msgs__msg__IngestorRequest * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t get_serialized_size_key_rmf_ingestor_msgs__msg__IngestorRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
size_t max_serialized_size_key_rmf_ingestor_msgs__msg__IngestorRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rmf_ingestor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rmf_ingestor_msgs, msg, IngestorRequest)();

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
