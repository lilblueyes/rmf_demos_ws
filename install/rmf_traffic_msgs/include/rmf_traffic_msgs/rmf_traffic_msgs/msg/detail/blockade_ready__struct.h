// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeReady.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/msg/blockade_ready.h"


#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BlockadeReady in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeReady
{
  /// The ID of the blockade participant
  uint64_t participant;
  /// The reservation ID that this update refers to
  uint64_t reservation;
  /// The checkpoint that is ready to be left
  uint64_t checkpoint;
} rmf_traffic_msgs__msg__BlockadeReady;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeReady.
typedef struct rmf_traffic_msgs__msg__BlockadeReady__Sequence
{
  rmf_traffic_msgs__msg__BlockadeReady * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeReady__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__STRUCT_H_
