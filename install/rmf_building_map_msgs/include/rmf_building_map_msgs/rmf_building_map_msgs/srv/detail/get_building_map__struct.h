// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rmf_building_map_msgs/srv/get_building_map.h"


#ifndef RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBuildingMap in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Request
{
  uint8_t structure_needs_at_least_one_member;
} rmf_building_map_msgs__srv__GetBuildingMap_Request;

// Struct for a sequence of rmf_building_map_msgs__srv__GetBuildingMap_Request.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence
{
  rmf_building_map_msgs__srv__GetBuildingMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'building_map'
#include "rmf_building_map_msgs/msg/detail/building_map__struct.h"

/// Struct defined in srv/GetBuildingMap in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Response
{
  rmf_building_map_msgs__msg__BuildingMap building_map;
} rmf_building_map_msgs__srv__GetBuildingMap_Response;

// Struct for a sequence of rmf_building_map_msgs__srv__GetBuildingMap_Response.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence
{
  rmf_building_map_msgs__srv__GetBuildingMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rmf_building_map_msgs__srv__GetBuildingMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rmf_building_map_msgs__srv__GetBuildingMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetBuildingMap in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence request;
  rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence response;
} rmf_building_map_msgs__srv__GetBuildingMap_Event;

// Struct for a sequence of rmf_building_map_msgs__srv__GetBuildingMap_Event.
typedef struct rmf_building_map_msgs__srv__GetBuildingMap_Event__Sequence
{
  rmf_building_map_msgs__srv__GetBuildingMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__srv__GetBuildingMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__STRUCT_H_
