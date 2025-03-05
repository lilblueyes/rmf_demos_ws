// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/ClaimRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/claim_request.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__struct.h"
// Member 'wait_points'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ClaimRequest in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__ClaimRequest
{
  rmf_reservation_msgs__msg__Ticket ticket;
  rosidl_runtime_c__String__Sequence wait_points;
} rmf_reservation_msgs__msg__ClaimRequest;

// Struct for a sequence of rmf_reservation_msgs__msg__ClaimRequest.
typedef struct rmf_reservation_msgs__msg__ClaimRequest__Sequence
{
  rmf_reservation_msgs__msg__ClaimRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__ClaimRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__CLAIM_REQUEST__STRUCT_H_
