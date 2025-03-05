// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_reservation_msgs/msg/free_parking_spots.h"


#ifndef RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_H_
#define RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'spots'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FreeParkingSpots in the package rmf_reservation_msgs.
typedef struct rmf_reservation_msgs__msg__FreeParkingSpots
{
  rosidl_runtime_c__String__Sequence spots;
} rmf_reservation_msgs__msg__FreeParkingSpots;

// Struct for a sequence of rmf_reservation_msgs__msg__FreeParkingSpots.
typedef struct rmf_reservation_msgs__msg__FreeParkingSpots__Sequence
{
  rmf_reservation_msgs__msg__FreeParkingSpots * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_reservation_msgs__msg__FreeParkingSpots__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_RESERVATION_MSGS__MSG__DETAIL__FREE_PARKING_SPOTS__STRUCT_H_
