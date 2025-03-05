// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/Ticket.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/ticket.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_H_

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

/// Struct defined in msg/Ticket in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__Ticket
{
  rmf_reservation_msgs__msg__RequestHeader header;
  uint64_t ticket_id;
} rmf_reservation_msgs__msg__Ticket;

// Struct for a sequence of rmf_reservation_msgs__msg__Ticket.
typedef struct rmf_reservation_msgs__msg__Ticket__Sequence
{
  rmf_reservation_msgs__msg__Ticket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__Ticket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__TICKET__STRUCT_H_
