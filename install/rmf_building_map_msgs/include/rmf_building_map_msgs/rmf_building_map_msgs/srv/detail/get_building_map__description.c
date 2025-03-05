// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/srv/detail/get_building_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__srv__GetBuildingMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0x70, 0xd9, 0x40, 0x37, 0x1c, 0xcb, 0x42,
      0x73, 0x06, 0x8c, 0xcb, 0x69, 0xb4, 0xc8, 0xb3,
      0xa9, 0xa4, 0x00, 0x57, 0x7a, 0x34, 0x37, 0x76,
      0x61, 0x4a, 0x74, 0x8a, 0xe9, 0xc3, 0x52, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__srv__GetBuildingMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x7a, 0x86, 0x5b, 0xd4, 0xe9, 0x2e, 0xce,
      0x87, 0xb8, 0x64, 0xa9, 0xd2, 0xbb, 0xe1, 0x00,
      0xb5, 0xaf, 0xfc, 0x95, 0x4a, 0x72, 0x36, 0xb2,
      0x9c, 0x43, 0xce, 0x7d, 0x9e, 0xee, 0x50, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__srv__GetBuildingMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x67, 0x60, 0x6f, 0x07, 0x27, 0xb8, 0xb6,
      0x1f, 0x2e, 0xb6, 0xd7, 0x46, 0xdc, 0xa9, 0x98,
      0x1e, 0xed, 0x58, 0x78, 0x6f, 0x3c, 0xa6, 0x53,
      0x25, 0x25, 0xb6, 0x20, 0x14, 0x3b, 0x36, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__srv__GetBuildingMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x47, 0xc8, 0x11, 0xd0, 0x51, 0xcd, 0xc7, 0x75,
      0x51, 0xf2, 0xe1, 0x2e, 0xea, 0x9f, 0xb0, 0x10,
      0xc8, 0x45, 0xe5, 0xe0, 0xff, 0xdc, 0xdf, 0xd0,
      0x35, 0xa0, 0x2b, 0x48, 0x04, 0x9c, 0xac, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"
#include "rmf_building_map_msgs/msg/detail/lift__functions.h"
#include "rmf_building_map_msgs/msg/detail/param__functions.h"
#include "rmf_building_map_msgs/msg/detail/level__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "rmf_building_map_msgs/msg/detail/place__functions.h"
#include "rmf_building_map_msgs/msg/detail/graph_edge__functions.h"
#include "rmf_building_map_msgs/msg/detail/building_map__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__AffineImage__EXPECTED_HASH = {1, {
    0x20, 0xca, 0x35, 0xf0, 0x2b, 0x4d, 0x15, 0xc0,
    0xdd, 0x9c, 0x32, 0xb1, 0x9a, 0x3e, 0xce, 0x03,
    0x8b, 0xd9, 0xa4, 0xad, 0xad, 0x8f, 0xe1, 0x1d,
    0x48, 0x91, 0xfb, 0xe1, 0x9e, 0x96, 0x1c, 0xaf,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__BuildingMap__EXPECTED_HASH = {1, {
    0x04, 0xa3, 0xcd, 0xe4, 0xe7, 0xf1, 0x3d, 0x13,
    0xba, 0x94, 0xef, 0xc8, 0xe1, 0x0f, 0xaf, 0xd7,
    0xa8, 0x08, 0xbf, 0x74, 0x8d, 0xab, 0xb5, 0x19,
    0x20, 0xf5, 0x49, 0x38, 0x65, 0x49, 0x2b, 0x5e,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Door__EXPECTED_HASH = {1, {
    0x7b, 0xee, 0xbf, 0x1d, 0x0e, 0x1b, 0xb6, 0xdd,
    0x28, 0x8a, 0x03, 0x47, 0x06, 0x7c, 0x1a, 0xda,
    0x63, 0x2d, 0xdc, 0x3e, 0xd7, 0x82, 0xa4, 0xb0,
    0xa6, 0x04, 0xff, 0x24, 0x2f, 0x0b, 0x63, 0xaa,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Graph__EXPECTED_HASH = {1, {
    0xc3, 0x98, 0x5e, 0x6c, 0x47, 0xf6, 0x05, 0x8a,
    0xd1, 0xd6, 0xc8, 0x22, 0x6d, 0x76, 0x35, 0x99,
    0xbb, 0x0a, 0x0d, 0x39, 0x6a, 0xa5, 0xfa, 0x7b,
    0x33, 0x3b, 0x6e, 0x38, 0xdd, 0x88, 0x37, 0x28,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH = {1, {
    0x0a, 0x58, 0x69, 0x59, 0xbb, 0xd7, 0x7b, 0x6d,
    0x78, 0xc0, 0x3d, 0xfe, 0x7c, 0xcd, 0x6c, 0xa9,
    0xae, 0x47, 0xb5, 0x71, 0x34, 0xdf, 0x43, 0x9c,
    0xaa, 0xf6, 0x76, 0xcc, 0x0f, 0x02, 0x5a, 0x12,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH = {1, {
    0xcd, 0x8d, 0x66, 0xc0, 0x32, 0xb1, 0x9e, 0xe0,
    0x8c, 0xd2, 0x50, 0x66, 0x38, 0xf4, 0xf6, 0x13,
    0x41, 0x0d, 0x77, 0xc4, 0xf8, 0x85, 0x00, 0x66,
    0x95, 0xf5, 0xd4, 0x2b, 0x8e, 0x71, 0x38, 0xaf,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Level__EXPECTED_HASH = {1, {
    0xfe, 0x64, 0x53, 0xf2, 0x44, 0x6f, 0xd8, 0x05,
    0x0f, 0x80, 0x42, 0xc9, 0xbb, 0xfa, 0x7a, 0x67,
    0x34, 0x28, 0xec, 0xba, 0x04, 0x4e, 0xf8, 0x8e,
    0x38, 0x85, 0x50, 0x32, 0xff, 0xc4, 0x5d, 0xdc,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Lift__EXPECTED_HASH = {1, {
    0xc9, 0x4f, 0xc2, 0x70, 0xca, 0x95, 0x72, 0xce,
    0x0d, 0x4c, 0xeb, 0x96, 0xa9, 0x2b, 0xf8, 0x15,
    0x3c, 0xc3, 0x0a, 0xff, 0x65, 0xa0, 0x0d, 0x32,
    0x57, 0x3d, 0xf6, 0x57, 0x89, 0x85, 0x75, 0x65,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Param__EXPECTED_HASH = {1, {
    0xa7, 0x25, 0x79, 0x77, 0x8c, 0x6d, 0x0c, 0x56,
    0xef, 0x07, 0xb6, 0x26, 0x64, 0xe5, 0xa8, 0xb1,
    0xa9, 0x4c, 0x0d, 0x74, 0x2f, 0xd8, 0x65, 0xb6,
    0x5d, 0xcb, 0x40, 0x47, 0x2b, 0x14, 0x0a, 0x59,
  }};
static const rosidl_type_hash_t rmf_building_map_msgs__msg__Place__EXPECTED_HASH = {1, {
    0xda, 0xed, 0xdc, 0x31, 0x9a, 0x9e, 0x44, 0xe7,
    0x66, 0x6e, 0x08, 0xf1, 0xfb, 0x76, 0x15, 0x06,
    0xd8, 0xf9, 0x1c, 0xcc, 0x15, 0x00, 0xd7, 0xf1,
    0x41, 0x94, 0x00, 0x08, 0xc4, 0x4e, 0x80, 0xcf,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_building_map_msgs__srv__GetBuildingMap__TYPE_NAME[] = "rmf_building_map_msgs/srv/GetBuildingMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_building_map_msgs__msg__AffineImage__TYPE_NAME[] = "rmf_building_map_msgs/msg/AffineImage";
static char rmf_building_map_msgs__msg__BuildingMap__TYPE_NAME[] = "rmf_building_map_msgs/msg/BuildingMap";
static char rmf_building_map_msgs__msg__Door__TYPE_NAME[] = "rmf_building_map_msgs/msg/Door";
static char rmf_building_map_msgs__msg__Graph__TYPE_NAME[] = "rmf_building_map_msgs/msg/Graph";
static char rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME[] = "rmf_building_map_msgs/msg/GraphEdge";
static char rmf_building_map_msgs__msg__GraphNode__TYPE_NAME[] = "rmf_building_map_msgs/msg/GraphNode";
static char rmf_building_map_msgs__msg__Level__TYPE_NAME[] = "rmf_building_map_msgs/msg/Level";
static char rmf_building_map_msgs__msg__Lift__TYPE_NAME[] = "rmf_building_map_msgs/msg/Lift";
static char rmf_building_map_msgs__msg__Param__TYPE_NAME[] = "rmf_building_map_msgs/msg/Param";
static char rmf_building_map_msgs__msg__Place__TYPE_NAME[] = "rmf_building_map_msgs/msg/Place";
static char rmf_building_map_msgs__srv__GetBuildingMap_Event__TYPE_NAME[] = "rmf_building_map_msgs/srv/GetBuildingMap_Event";
static char rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME[] = "rmf_building_map_msgs/srv/GetBuildingMap_Request";
static char rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME[] = "rmf_building_map_msgs/srv/GetBuildingMap_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__request_message[] = "request_message";
static char rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__response_message[] = "response_message";
static char rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__srv__GetBuildingMap__FIELDS[] = {
  {
    {rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_building_map_msgs__srv__GetBuildingMap_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_building_map_msgs__srv__GetBuildingMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__BuildingMap__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphNode__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Level__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Lift__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__srv__GetBuildingMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__srv__GetBuildingMap__TYPE_NAME, 40, 40},
      {rmf_building_map_msgs__srv__GetBuildingMap__FIELDS, 3, 3},
    },
    {rmf_building_map_msgs__srv__GetBuildingMap__REFERENCED_TYPE_DESCRIPTIONS, 15, 15},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__AffineImage__EXPECTED_HASH, rmf_building_map_msgs__msg__AffineImage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_building_map_msgs__msg__AffineImage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__BuildingMap__EXPECTED_HASH, rmf_building_map_msgs__msg__BuildingMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_building_map_msgs__msg__BuildingMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Door__EXPECTED_HASH, rmf_building_map_msgs__msg__Door__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_building_map_msgs__msg__Door__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Graph__EXPECTED_HASH, rmf_building_map_msgs__msg__Graph__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_building_map_msgs__msg__Graph__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_building_map_msgs__msg__GraphEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_building_map_msgs__msg__GraphNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Level__EXPECTED_HASH, rmf_building_map_msgs__msg__Level__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_building_map_msgs__msg__Level__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Lift__EXPECTED_HASH, rmf_building_map_msgs__msg__Lift__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_building_map_msgs__msg__Lift__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Param__EXPECTED_HASH, rmf_building_map_msgs__msg__Param__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_building_map_msgs__msg__Param__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Place__EXPECTED_HASH, rmf_building_map_msgs__msg__Place__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_building_map_msgs__msg__Place__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = rmf_building_map_msgs__srv__GetBuildingMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = rmf_building_map_msgs__srv__GetBuildingMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[13].fields = rmf_building_map_msgs__srv__GetBuildingMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_building_map_msgs__srv__GetBuildingMap_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__srv__GetBuildingMap_Request__FIELDS[] = {
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__srv__GetBuildingMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
      {rmf_building_map_msgs__srv__GetBuildingMap_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_building_map_msgs__srv__GetBuildingMap_Response__FIELD_NAME__building_map[] = "building_map";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__srv__GetBuildingMap_Response__FIELDS[] = {
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Response__FIELD_NAME__building_map, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_building_map_msgs__msg__BuildingMap__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_building_map_msgs__srv__GetBuildingMap_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_building_map_msgs__msg__AffineImage__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__BuildingMap__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphNode__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Level__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Lift__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__srv__GetBuildingMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
      {rmf_building_map_msgs__srv__GetBuildingMap_Response__FIELDS, 1, 1},
    },
    {rmf_building_map_msgs__srv__GetBuildingMap_Response__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_building_map_msgs__msg__AffineImage__EXPECTED_HASH, rmf_building_map_msgs__msg__AffineImage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_building_map_msgs__msg__AffineImage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__BuildingMap__EXPECTED_HASH, rmf_building_map_msgs__msg__BuildingMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_building_map_msgs__msg__BuildingMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Door__EXPECTED_HASH, rmf_building_map_msgs__msg__Door__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_building_map_msgs__msg__Door__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Graph__EXPECTED_HASH, rmf_building_map_msgs__msg__Graph__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_building_map_msgs__msg__Graph__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_building_map_msgs__msg__GraphEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_building_map_msgs__msg__GraphNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Level__EXPECTED_HASH, rmf_building_map_msgs__msg__Level__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_building_map_msgs__msg__Level__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Lift__EXPECTED_HASH, rmf_building_map_msgs__msg__Lift__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_building_map_msgs__msg__Lift__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Param__EXPECTED_HASH, rmf_building_map_msgs__msg__Param__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_building_map_msgs__msg__Param__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Place__EXPECTED_HASH, rmf_building_map_msgs__msg__Place__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_building_map_msgs__msg__Place__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__info[] = "info";
static char rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__request[] = "request";
static char rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELDS[] = {
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_building_map_msgs__srv__GetBuildingMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__BuildingMap__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Door__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Graph__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphEdge__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__GraphNode__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Level__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Lift__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Param__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__Place__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__srv__GetBuildingMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__srv__GetBuildingMap_Event__TYPE_NAME, 46, 46},
      {rmf_building_map_msgs__srv__GetBuildingMap_Event__FIELDS, 3, 3},
    },
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 14, 14},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__AffineImage__EXPECTED_HASH, rmf_building_map_msgs__msg__AffineImage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_building_map_msgs__msg__AffineImage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__BuildingMap__EXPECTED_HASH, rmf_building_map_msgs__msg__BuildingMap__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_building_map_msgs__msg__BuildingMap__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Door__EXPECTED_HASH, rmf_building_map_msgs__msg__Door__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_building_map_msgs__msg__Door__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Graph__EXPECTED_HASH, rmf_building_map_msgs__msg__Graph__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_building_map_msgs__msg__Graph__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphEdge__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphEdge__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_building_map_msgs__msg__GraphEdge__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__GraphNode__EXPECTED_HASH, rmf_building_map_msgs__msg__GraphNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_building_map_msgs__msg__GraphNode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Level__EXPECTED_HASH, rmf_building_map_msgs__msg__Level__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_building_map_msgs__msg__Level__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Lift__EXPECTED_HASH, rmf_building_map_msgs__msg__Lift__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = rmf_building_map_msgs__msg__Lift__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Param__EXPECTED_HASH, rmf_building_map_msgs__msg__Param__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = rmf_building_map_msgs__msg__Param__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_building_map_msgs__msg__Place__EXPECTED_HASH, rmf_building_map_msgs__msg__Place__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = rmf_building_map_msgs__msg__Place__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[11].fields = rmf_building_map_msgs__srv__GetBuildingMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[12].fields = rmf_building_map_msgs__srv__GetBuildingMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "BuildingMap building_map";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__srv__GetBuildingMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__srv__GetBuildingMap__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__srv__GetBuildingMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__srv__GetBuildingMap_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__srv__GetBuildingMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__srv__GetBuildingMap_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__srv__GetBuildingMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__srv__GetBuildingMap_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[16];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 16, 16};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__srv__GetBuildingMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_building_map_msgs__msg__AffineImage__get_individual_type_description_source(NULL);
    sources[3] = *rmf_building_map_msgs__msg__BuildingMap__get_individual_type_description_source(NULL);
    sources[4] = *rmf_building_map_msgs__msg__Door__get_individual_type_description_source(NULL);
    sources[5] = *rmf_building_map_msgs__msg__Graph__get_individual_type_description_source(NULL);
    sources[6] = *rmf_building_map_msgs__msg__GraphEdge__get_individual_type_description_source(NULL);
    sources[7] = *rmf_building_map_msgs__msg__GraphNode__get_individual_type_description_source(NULL);
    sources[8] = *rmf_building_map_msgs__msg__Level__get_individual_type_description_source(NULL);
    sources[9] = *rmf_building_map_msgs__msg__Lift__get_individual_type_description_source(NULL);
    sources[10] = *rmf_building_map_msgs__msg__Param__get_individual_type_description_source(NULL);
    sources[11] = *rmf_building_map_msgs__msg__Place__get_individual_type_description_source(NULL);
    sources[12] = *rmf_building_map_msgs__srv__GetBuildingMap_Event__get_individual_type_description_source(NULL);
    sources[13] = *rmf_building_map_msgs__srv__GetBuildingMap_Request__get_individual_type_description_source(NULL);
    sources[14] = *rmf_building_map_msgs__srv__GetBuildingMap_Response__get_individual_type_description_source(NULL);
    sources[15] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__srv__GetBuildingMap_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__srv__GetBuildingMap_Response__get_individual_type_description_source(NULL),
    sources[1] = *rmf_building_map_msgs__msg__AffineImage__get_individual_type_description_source(NULL);
    sources[2] = *rmf_building_map_msgs__msg__BuildingMap__get_individual_type_description_source(NULL);
    sources[3] = *rmf_building_map_msgs__msg__Door__get_individual_type_description_source(NULL);
    sources[4] = *rmf_building_map_msgs__msg__Graph__get_individual_type_description_source(NULL);
    sources[5] = *rmf_building_map_msgs__msg__GraphEdge__get_individual_type_description_source(NULL);
    sources[6] = *rmf_building_map_msgs__msg__GraphNode__get_individual_type_description_source(NULL);
    sources[7] = *rmf_building_map_msgs__msg__Level__get_individual_type_description_source(NULL);
    sources[8] = *rmf_building_map_msgs__msg__Lift__get_individual_type_description_source(NULL);
    sources[9] = *rmf_building_map_msgs__msg__Param__get_individual_type_description_source(NULL);
    sources[10] = *rmf_building_map_msgs__msg__Place__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[15];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 15, 15};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__srv__GetBuildingMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_building_map_msgs__msg__AffineImage__get_individual_type_description_source(NULL);
    sources[3] = *rmf_building_map_msgs__msg__BuildingMap__get_individual_type_description_source(NULL);
    sources[4] = *rmf_building_map_msgs__msg__Door__get_individual_type_description_source(NULL);
    sources[5] = *rmf_building_map_msgs__msg__Graph__get_individual_type_description_source(NULL);
    sources[6] = *rmf_building_map_msgs__msg__GraphEdge__get_individual_type_description_source(NULL);
    sources[7] = *rmf_building_map_msgs__msg__GraphNode__get_individual_type_description_source(NULL);
    sources[8] = *rmf_building_map_msgs__msg__Level__get_individual_type_description_source(NULL);
    sources[9] = *rmf_building_map_msgs__msg__Lift__get_individual_type_description_source(NULL);
    sources[10] = *rmf_building_map_msgs__msg__Param__get_individual_type_description_source(NULL);
    sources[11] = *rmf_building_map_msgs__msg__Place__get_individual_type_description_source(NULL);
    sources[12] = *rmf_building_map_msgs__srv__GetBuildingMap_Request__get_individual_type_description_source(NULL);
    sources[13] = *rmf_building_map_msgs__srv__GetBuildingMap_Response__get_individual_type_description_source(NULL);
    sources[14] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
