// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_traffic_msgs/srv/unregister_participant.h"


#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/UnregisterParticipant in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Request
{
  uint64_t participant_id;
} rmf_traffic_msgs__srv__UnregisterParticipant_Request;

// Struct for a sequence of rmf_traffic_msgs__srv__UnregisterParticipant_Request.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UnregisterParticipant in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Response
{
  /// Confirmation that the participant was unregistered
  bool confirmation;
  /// A description of any errors that were encountered, such as the participant_id
  /// being unknown
  rosidl_runtime_c__String error;
} rmf_traffic_msgs__srv__UnregisterParticipant_Response;

// Struct for a sequence of rmf_traffic_msgs__srv__UnregisterParticipant_Response.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/UnregisterParticipant in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence request;
  rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence response;
} rmf_traffic_msgs__srv__UnregisterParticipant_Event;

// Struct for a sequence of rmf_traffic_msgs__srv__UnregisterParticipant_Event.
typedef struct rmf_traffic_msgs__srv__UnregisterParticipant_Event__Sequence
{
  rmf_traffic_msgs__srv__UnregisterParticipant_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__srv__UnregisterParticipant_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__STRUCT_H_
