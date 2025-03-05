// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/start_time_range.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'earliest_start_time'
// Member 'latest_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/StartTimeRange in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__StartTimeRange
{
  builtin_interfaces__msg__Time earliest_start_time;
  bool has_earliest_start_time;
  builtin_interfaces__msg__Time latest_start_time;
  bool has_latest_start_time;
} rmf_reservation_msgs__msg__StartTimeRange;

// Struct for a sequence of rmf_reservation_msgs__msg__StartTimeRange.
typedef struct rmf_reservation_msgs__msg__StartTimeRange__Sequence
{
  rmf_reservation_msgs__msg__StartTimeRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__StartTimeRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__START_TIME_RANGE__STRUCT_H_
