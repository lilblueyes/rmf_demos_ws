// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeReservationAlt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/flexible_time_reservation_alt.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'resource_name'
#include "rosidl_runtime_c/string.h"
// Member 'start_time'
#include "rmf_reservation_msgs/msg/detail/start_time_range__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/FlexibleTimeReservationAlt in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__FlexibleTimeReservationAlt
{
  rosidl_runtime_c__String resource_name;
  double cost;
  rmf_reservation_msgs__msg__StartTimeRange start_time;
  bool has_end;
  builtin_interfaces__msg__Duration duration;
} rmf_reservation_msgs__msg__FlexibleTimeReservationAlt;

// Struct for a sequence of rmf_reservation_msgs__msg__FlexibleTimeReservationAlt.
typedef struct rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence
{
  rmf_reservation_msgs__msg__FlexibleTimeReservationAlt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FLEXIBLE_TIME_RESERVATION_ALT__STRUCT_H_
