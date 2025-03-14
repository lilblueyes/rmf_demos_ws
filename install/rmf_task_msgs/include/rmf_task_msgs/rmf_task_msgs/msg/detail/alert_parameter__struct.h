// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/AlertParameter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_parameter.h"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertParameter in the package rmf_task_msgs.
/**
  * Generic key-value pair to be used in Alert
 */
typedef struct rmf_task_msgs__msg__AlertParameter
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String value;
} rmf_task_msgs__msg__AlertParameter;

// Struct for a sequence of rmf_task_msgs__msg__AlertParameter.
typedef struct rmf_task_msgs__msg__AlertParameter__Sequence
{
  rmf_task_msgs__msg__AlertParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__AlertParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_PARAMETER__STRUCT_H_
