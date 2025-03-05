// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/request_header.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'fleet_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RequestHeader in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__RequestHeader
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String fleet_name;
  uint64_t request_id;
} rmf_reservation_msgs__msg__RequestHeader;

// Struct for a sequence of rmf_reservation_msgs__msg__RequestHeader.
typedef struct rmf_reservation_msgs__msg__RequestHeader__Sequence
{
  rmf_reservation_msgs__msg__RequestHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__RequestHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__REQUEST_HEADER__STRUCT_H_
