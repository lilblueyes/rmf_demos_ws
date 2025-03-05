// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/region__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Region__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xaf, 0xcf, 0x7b, 0x43, 0xab, 0xe3, 0x8b,
      0x2a, 0xa1, 0x59, 0x0f, 0x83, 0xd6, 0x9b, 0xc3,
      0xf5, 0x1c, 0xac, 0x22, 0x86, 0xbd, 0x50, 0xb9,
      0x74, 0xdd, 0x16, 0x54, 0xdd, 0xf9, 0xb0, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"
#include "rmf_traffic_msgs/msg/detail/shape__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
#include "rmf_traffic_msgs/msg/detail/space__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__Shape__EXPECTED_HASH = {1, {
    0x42, 0xe4, 0xd6, 0xfb, 0x2f, 0x61, 0x4e, 0xdb,
    0xf7, 0xbf, 0xd0, 0xbe, 0x71, 0xe4, 0xa8, 0xb4,
    0x56, 0xf7, 0x13, 0x01, 0x88, 0xe3, 0x98, 0x22,
    0xe8, 0xb8, 0xb5, 0x3f, 0xe9, 0x25, 0x69, 0x6d,
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

static char rmf_traffic_msgs__msg__Region__TYPE_NAME[] = "rmf_traffic_msgs/msg/Region";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";
static char rmf_traffic_msgs__msg__Shape__TYPE_NAME[] = "rmf_traffic_msgs/msg/Shape";
static char rmf_traffic_msgs__msg__Space__TYPE_NAME[] = "rmf_traffic_msgs/msg/Space";
static char rmf_traffic_msgs__msg__Timespan__TYPE_NAME[] = "rmf_traffic_msgs/msg/Timespan";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Region__FIELD_NAME__map[] = "map";
static char rmf_traffic_msgs__msg__Region__FIELD_NAME__spaces[] = "spaces";
static char rmf_traffic_msgs__msg__Region__FIELD_NAME__timespan[] = "timespan";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Region__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Region__FIELD_NAME__map, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Region__FIELD_NAME__spaces, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__Space__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Region__FIELD_NAME__timespan, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_traffic_msgs__msg__Timespan__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__Region__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Shape__TYPE_NAME, 26, 26},
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
rmf_traffic_msgs__msg__Region__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Region__TYPE_NAME, 27, 27},
      {rmf_traffic_msgs__msg__Region__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__msg__Region__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Shape__EXPECTED_HASH, rmf_traffic_msgs__msg__Shape__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__Shape__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Space__EXPECTED_HASH, rmf_traffic_msgs__msg__Space__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_traffic_msgs__msg__Space__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__Timespan__EXPECTED_HASH, rmf_traffic_msgs__msg__Timespan__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_traffic_msgs__msg__Timespan__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "string map\n"
  "\n"
  "Space[] spaces\n"
  "\n"
  "Timespan timespan";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Region__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Region__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Region__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Region__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__Shape__get_individual_type_description_source(NULL);
    sources[3] = *rmf_traffic_msgs__msg__Space__get_individual_type_description_source(NULL);
    sources[4] = *rmf_traffic_msgs__msg__Timespan__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
