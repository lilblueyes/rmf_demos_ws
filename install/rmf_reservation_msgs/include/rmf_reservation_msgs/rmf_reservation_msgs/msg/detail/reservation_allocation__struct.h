// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/reservation_allocation.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'IMMEDIATELY_PROCEED'.
enum
{
  rmf_reservation_msgs__msg__ReservationAllocation__IMMEDIATELY_PROCEED = 0
};

/// Constant 'WAIT_IDENTIFIED'.
enum
{
  rmf_reservation_msgs__msg__ReservationAllocation__WAIT_IDENTIFIED = 1
};

// Include directives for member types
// Member 'ticket'
#include "rmf_reservation_msgs/msg/detail/ticket__struct.h"
// Member 'resource'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ReservationAllocation in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__ReservationAllocation
{
  rmf_reservation_msgs__msg__Ticket ticket;
  uint8_t instruction_type;
  uint64_t chosen_alternative;
  rosidl_runtime_c__String resource;
} rmf_reservation_msgs__msg__ReservationAllocation;

// Struct for a sequence of rmf_reservation_msgs__msg__ReservationAllocation.
typedef struct rmf_reservation_msgs__msg__ReservationAllocation__Sequence
{
  rmf_reservation_msgs__msg__ReservationAllocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__ReservationAllocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__RESERVATION_ALLOCATION__STRUCT_H_
