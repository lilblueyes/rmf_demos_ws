// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/AlertResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert_response.h"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AlertResponse in the package rmf_task_msgs.
/**
  * The unique ID of the Alert this response is for
 */
typedef struct rmf_task_msgs__msg__AlertResponse
{
  rosidl_runtime_c__String id;
  /// This response must be one of the available options
  /// in the Alert.
  rosidl_runtime_c__String response;
} rmf_task_msgs__msg__AlertResponse;

// Struct for a sequence of rmf_task_msgs__msg__AlertResponse.
typedef struct rmf_task_msgs__msg__AlertResponse__Sequence
{
  rmf_task_msgs__msg__AlertResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__AlertResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT_RESPONSE__STRUCT_H_
