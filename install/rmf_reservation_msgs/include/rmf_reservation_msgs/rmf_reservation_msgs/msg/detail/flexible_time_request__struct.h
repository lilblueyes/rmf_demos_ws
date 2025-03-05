// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/flexible_time_request.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "rmf_reservation_msgs/msg/detail/request_header__struct.h"
// Member 'alternatives'
#include "rmf_reservation_msgs/msg/detail/flexible_time_reservation_alt__struct.h"

/// Struct defined in msg/FlexibleTimeRequest in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__FlexibleTimeRequest
{
  rmf_reservation_msgs__msg__RequestHeader header;
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence alternatives;
} rmf_reservation_msgs__msg__FlexibleTimeRequest;

// Struct for a sequence of rmf_reservation_msgs__msg__FlexibleTimeRequest.
typedef struct rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence
{
  rmf_reservation_msgs__msg__FlexibleTimeRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__FlexibleTimeRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_REQUEST__STRUCT_H_
