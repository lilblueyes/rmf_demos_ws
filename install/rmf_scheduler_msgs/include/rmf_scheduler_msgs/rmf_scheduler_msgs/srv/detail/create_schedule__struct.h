// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:srv/CreateSchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_scheduler_msgs/srv/create_schedule.h"


#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__STRUCT_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'schedule'
#include "rmf_scheduler_msgs/msg/detail/schedule__struct.h"

/// Struct defined in srv/CreateSchedule in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Request
{
  /// The following fields are ignored:
  ///   - created_at
  rmf_scheduler_msgs__msg__Schedule schedule;
} rmf_scheduler_msgs__srv__CreateSchedule_Request;

// Struct for a sequence of rmf_scheduler_msgs__srv__CreateSchedule_Request.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence
{
  rmf_scheduler_msgs__srv__CreateSchedule_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CreateSchedule in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Response
{
  /// Confirmation that the schedule is successfully registered
  bool success;
  /// If success is false, this provides a reason for the failure.
  rosidl_runtime_c__String message;
} rmf_scheduler_msgs__srv__CreateSchedule_Response;

// Struct for a sequence of rmf_scheduler_msgs__srv__CreateSchedule_Response.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence
{
  rmf_scheduler_msgs__srv__CreateSchedule_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rmf_scheduler_msgs__srv__CreateSchedule_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rmf_scheduler_msgs__srv__CreateSchedule_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CreateSchedule in the package rmf_scheduler_msgs.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence request;
  rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence response;
} rmf_scheduler_msgs__srv__CreateSchedule_Event;

// Struct for a sequence of rmf_scheduler_msgs__srv__CreateSchedule_Event.
typedef struct rmf_scheduler_msgs__srv__CreateSchedule_Event__Sequence
{
  rmf_scheduler_msgs__srv__CreateSchedule_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__srv__CreateSchedule_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_SCHEDULE__STRUCT_H_
