// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_dispenser_msgs/msg/dispenser_state.h"


#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  rmf_dispenser_msgs__msg__DispenserState__IDLE = 0l
};

/// Constant 'BUSY'.
enum
{
  rmf_dispenser_msgs__msg__DispenserState__BUSY = 1l
};

/// Constant 'OFFLINE'.
enum
{
  rmf_dispenser_msgs__msg__DispenserState__OFFLINE = 2l
};

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'guid'
// Member 'request_guid_queue'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DispenserState in the package rmf_dispenser_msgs.
typedef struct rmf_dispenser_msgs__msg__DispenserState
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for this workcell
  rosidl_runtime_c__String guid;
  /// Different basic modes that the workcell could be in
  int32_t mode;
  /// Queued up requests that are being handled by this workcell
  rosidl_runtime_c__String__Sequence request_guid_queue;
  /// below are custom workcell message fields
  float seconds_remaining;
} rmf_dispenser_msgs__msg__DispenserState;

// Struct for a sequence of rmf_dispenser_msgs__msg__DispenserState.
typedef struct rmf_dispenser_msgs__msg__DispenserState__Sequence
{
  rmf_dispenser_msgs__msg__DispenserState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_dispenser_msgs__msg__DispenserState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__STRUCT_H_
