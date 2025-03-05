// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_obstacle_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_obstacle_msgs/msg/obstacles.h"


#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__STRUCT_H_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'obstacles'
#include "rmf_obstacle_msgs/msg/detail/obstacle__struct.h"

/// Struct defined in msg/Obstacles in the package rmf_obstacle_msgs.
/**
  * Standard header
 */
typedef struct rmf_obstacle_msgs__msg__Obstacles
{
  std_msgs__msg__Header header;
  rmf_obstacle_msgs__msg__Obstacle__Sequence obstacles;
} rmf_obstacle_msgs__msg__Obstacles;

// Struct for a sequence of rmf_obstacle_msgs__msg__Obstacles.
typedef struct rmf_obstacle_msgs__msg__Obstacles__Sequence
{
  rmf_obstacle_msgs__msg__Obstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_obstacle_msgs__msg__Obstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLES__STRUCT_H_
