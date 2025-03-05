// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/Circle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/circle.h"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__CIRCLE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Circle in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__Circle
{
  /// The radius of the circle. The circle will be centered around the origin of its
  /// frame of reference.
  double radius;
} rmf_traffic_msgs__msg__Circle;

// Struct for a sequence of rmf_traffic_msgs__msg__Circle.
typedef struct rmf_traffic_msgs__msg__Circle__Sequence
{
  rmf_traffic_msgs__msg__Circle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__Circle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__CIRCLE__STRUCT_H_
