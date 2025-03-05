// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_task_msgs/msg/alert.h"


#ifndef RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TIER_INFO'.
enum
{
  rmf_task_msgs__msg__Alert__TIER_INFO = 0
};

/// Constant 'TIER_WARNING'.
enum
{
  rmf_task_msgs__msg__Alert__TIER_WARNING = 1
};

/// Constant 'TIER_ERROR'.
enum
{
  rmf_task_msgs__msg__Alert__TIER_ERROR = 2
};

// Include directives for member types
// Member 'id'
// Member 'title'
// Member 'subtitle'
// Member 'message'
// Member 'responses_available'
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'alert_parameters'
#include "rmf_task_msgs/msg/detail/alert_parameter__struct.h"

/// Struct defined in msg/Alert in the package rmf_task_msgs.
/**
  * The unique ID which responses can reply to
 */
typedef struct rmf_task_msgs__msg__Alert
{
  rosidl_runtime_c__String id;
  /// Title, subtitle and message to be displayed on any frontend
  rosidl_runtime_c__String title;
  rosidl_runtime_c__String subtitle;
  rosidl_runtime_c__String message;
  /// Whether this alert should be displayed on any frontend, default
  /// as true
  bool display;
  /// The severity tier of this alert
  uint8_t tier;
  /// Responses available for this alert. If no responses are expected
  /// this field can be left empty
  rosidl_runtime_c__String__Sequence responses_available;
  /// Parameters that may be useful for custom interactions
  rmf_task_msgs__msg__AlertParameter__Sequence alert_parameters;
  /// The task ID that is involved in this alert. If no task is involved
  /// this string can be left empty
  rosidl_runtime_c__String task_id;
} rmf_task_msgs__msg__Alert;

// Struct for a sequence of rmf_task_msgs__msg__Alert.
typedef struct rmf_task_msgs__msg__Alert__Sequence
{
  rmf_task_msgs__msg__Alert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Alert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ALERT__STRUCT_H_
