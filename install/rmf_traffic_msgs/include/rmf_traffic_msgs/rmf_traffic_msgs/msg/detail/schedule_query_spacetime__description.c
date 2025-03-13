// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x1a, 0x46, 0xbf, 0xcc, 0x6b, 0x85, 0x57,
      0x3e, 0x90, 0xac, 0x0d, 0xd0, 0x09, 0x49, 0xd2,
      0xe2, 0x9f, 0xbe, 0x19, 0x1c, 0x28, 0x3a, 0xac,
      0xaa, 0x46, 0xd7, 0x41, 0x67, 0x11, 0x65, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__functions.h"
#include "rmf_traffic_msgs/msg/detail/circle__functions.h"
#include "rmf_traffic_msgs/msg/detail/shape_context__functions.h"
#include "rmf_traffic_msgs/msg/detail/space__functions.h"
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
#include "rmf_traffic_msgs/msg/detail/region__functions.h"
#include "rmf_traffic_msgs/msg/detail/shape__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Circle__EXPECTED_HASH = {1, {
    0xd0, 0x12, 0x71, 0xf4, 0x8e, 0xa9, 0x4a, 0x8a,
    0xa4, 0x93, 0x38, 0xc5, 0x5f, 0x66, 0xfc, 0xda,
    0x71, 0xb4, 0xe2, 0xa6, 0x02, 0x34, 0x6b, 0xce,
    0x3b, 0xcb, 0x3a, 0x24, 0xd8, 0xca, 0xa1, 0x46,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH = {1, {
    0x63, 0x4f, 0xfe, 0xd8, 0xb4, 0x71, 0xfe, 0x5a,
    0xc9, 0xc9, 0xb5, 0x40, 0xcd, 0xef, 0xea, 0x5f,
    0xad, 0xd1, 0xd5, 0x0d, 0x35, 0xdc, 0xdc, 0x80,
    0x03, 0x0c, 0xe1, 0xc4, 0x10, 0x4d, 0xd9, 0xf6,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Region__EXPECTED_HASH = {1, {
    0xf0, 0xaf, 0xcf, 0x7b, 0x43, 0xab, 0xe3, 0x8b,
    0x2a, 0xa1, 0x59, 0x0f, 0x83, 0xd6, 0x9b, 0xc3,
    0xf5, 0x1c, 0xac, 0x22, 0x86, 0xbd, 0x50, 0xb9,
    0x74, 0xdd, 0x16, 0x54, 0xdd, 0xf9, 0xb0, 0xa2,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Shape__EXPECTED_HASH = {1, {
    0x42, 0xe4, 0xd6, 0xfb, 0x2f, 0x61, 0x4e, 0xdb,
    0xf7, 0xbf, 0xd0, 0xbe, 0x71, 0xe4, 0xa8, 0xb4,
    0x56, 0xf7, 0x13, 0x01, 0x88, 0xe3, 0x98, 0x22,
    0xe8, 0xb8, 0xb5, 0x3f, 0xe9, 0x25, 0x69, 0x6d,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__ShapeContext__EXPECTED_HASH = {1, {
    0x6b, 0x37, 0xf4, 0x28, 0xfb, 0xd6, 0x5d, 0xe3,
    0x6e, 0xd7, 0xc4, 0x2f, 0xfe, 0x68, 0xdd, 0x33,
    0xbb, 0xbb, 0x86, 0x34, 0x7f, 0xdb, 0x9d, 0x3d,
    0xe9, 0xde, 0xca, 0x8d, 0x39, 0x25, 0x4a, 0x85,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Space__EXPECTED_HASH = {1, {
    0x43, 0x22, 0xf3, 0xcf, 0x73, 0xc0, 0x9d, 0xa9,
    0x3c, 0xf8, 0xda, 0xea, 0x77, 0x29, 0x50, 0xfd,
    0x7d, 0xe5, 0xc7, 0x11, 0xbd, 0xf4, 0xbf, 0x7f,
    0x93, 0x34, 0x4d, 0xa6, 0x7a, 0xaa, 0xc1, 0xd0,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Timespan__EXPECTED_HASH = {1, {
    0x2d, 0xc1, 0x97, 0x31, 0x0e, 0xde, 0xfd, 0x1c,
    0xf7, 0xd3, 0xa7, 0x9c, 0x98, 0x0f, 0xdd, 0xdb,
    0xc6, 0x5f, 0x8a, 0xc9, 0x6d, 0xf5, 0xc9, 0x0c,
    0x51, 0x37, 0x1f, 0x98, 0x1c, 0x1c, 0x67, 0x54,
  }};
#endif

static char rmf_traffic_msgs__msg__ScheduleQuerySpacetime__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleQuerySpacetime";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";
static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";
static char rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ConvexShapeContext";
static char rmf_traffic_msgs__msg__Region__TYPE_NAME[] = "rmf_traffic_msgs/msg/Region";
static char rmf_traffic_msgs__msg__Shape__TYPE_NAME[] = "rmf_traffic_msgs/msg/Shape";
static char rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME[] = "rmf_traffic_msgs/msg/ShapeContext";
static char rmf_traffic_msgs__msg__Space__TYPE_NAME[] = "rmf_traffic_msgs/msg/Space";
static char rmf_traffic_msgs__msg__Timespan__TYPE_NAME[] = "rmf_traffic_msgs/msg/Timespan";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__type[] = "type";
static char rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__regions[] = "regions";
static char rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__shape_context[] = "shape_context";
static char rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__timespan[] = "timespan";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__regions, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__Region__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__shape_context, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELD_NAME__timespan, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__Timespan__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__ScheduleQuerySpacetime__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ConvexShapeContext__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Region__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Shape__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ShapeContext__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Space__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Timespan__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__TYPE_NAME, 43, 43},
      {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__FIELDS, 4, 4},
    },
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Circle__EXPECTED_HASH, rmf_traffic_msgs__msg__Circle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Circle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ConvexShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ConvexShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__ConvexShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Region__EXPECTED_HASH, rmf_traffic_msgs__msg__Region__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__Region__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Shape__EXPECTED_HASH, rmf_traffic_msgs__msg__Shape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_traffic_msgs__msg__Shape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__ShapeContext__EXPECTED_HASH, rmf_traffic_msgs__msg__ShapeContext__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = rmf_traffic_msgs__msg__ShapeContext__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Space__EXPECTED_HASH, rmf_traffic_msgs__msg__Space__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_traffic_msgs__msg__Space__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Timespan__EXPECTED_HASH, rmf_traffic_msgs__msg__Timespan__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = rmf_traffic_msgs__msg__Timespan__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "uint16 ALL=1\n"
  "uint16 REGIONS=2\n"
  "uint16 TIMESPAN=3\n"
  "\n"
  "uint16 type\n"
  "\n"
  "# =====================\n"
  "# ===== REGIONS =====\n"
  "# If REGIONS mode is chosen, this will contain the regions to query\n"
  "Region[] regions\n"
  "\n"
  "ShapeContext shape_context\n"
  "\n"
  "# =====================\n"
  "# ===== TIMESPAN ======\n"
  "Timespan timespan";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleQuerySpacetime__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 289, 289},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleQuerySpacetime__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleQuerySpacetime__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__ConvexShapeContext__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__Region__get_individual_type_description_source(NULL);
    sources[5] = *rmf_traffic_msgs__msg__Shape__get_individual_type_description_source(NULL);
    sources[6] = *rmf_traffic_msgs__msg__ShapeContext__get_individual_type_description_source(NULL);
    sources[7] = *rmf_traffic_msgs__msg__Space__get_individual_type_description_source(NULL);
    sources[8] = *rmf_traffic_msgs__msg__Timespan__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
