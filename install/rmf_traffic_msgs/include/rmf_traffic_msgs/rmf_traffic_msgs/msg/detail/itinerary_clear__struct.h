// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ItineraryClear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/itinerary_clear.h"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ItineraryClear in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__ItineraryClear
{
  uint64_t participant;
  uint64_t itinerary_version;
} rmf_traffic_msgs__msg__ItineraryClear;

// Struct for a sequence of rmf_traffic_msgs__msg__ItineraryClear.
typedef struct rmf_traffic_msgs__msg__ItineraryClear__Sequence
{
  rmf_traffic_msgs__msg__ItineraryClear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ItineraryClear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__STRUCT_H_
