// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include "rmf_obstacle_msgs/msg/detail/obstacle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_obstacle_msgs
const rosidl_type_hash_t *
rmf_obstacle_msgs__msg__Obstacle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xd7, 0xc4, 0xca, 0xa6, 0x9b, 0x4b, 0x16,
      0x07, 0xbe, 0x7d, 0xa3, 0xca, 0xa9, 0x47, 0xd6,
      0xa4, 0x89, 0x2c, 0xf2, 0x48, 0x23, 0xb8, 0xb4,
      0xdf, 0xf6, 0x4b, 0xec, 0x99, 0xea, 0x19, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t rmf_obstacle_msgs__msg__BoundingBox3D__EXPECTED_HASH = {1, {
    0xba, 0x81, 0x43, 0x85, 0x76, 0xcc, 0xcd, 0x52,
    0xe7, 0x7a, 0xe1, 0x8c, 0x66, 0x3a, 0x67, 0x69,
    0xa6, 0x51, 0xf0, 0x11, 0xac, 0xbf, 0x90, 0xad,
    0x20, 0x64, 0xde, 0xc7, 0x2c, 0xab, 0x3d, 0xad,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char rmf_obstacle_msgs__msg__Obstacle__TYPE_NAME[] = "rmf_obstacle_msgs/msg/Obstacle";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char rmf_obstacle_msgs__msg__BoundingBox3D__TYPE_NAME[] = "rmf_obstacle_msgs/msg/BoundingBox3D";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__header[] = "header";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__id[] = "id";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__source[] = "source";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__level_name[] = "level_name";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__classification[] = "classification";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__bbox[] = "bbox";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__data_resolution[] = "data_resolution";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__data[] = "data";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__lifetime[] = "lifetime";
static char rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__action[] = "action";

static rosidl_runtime_c__type_description__Field rmf_obstacle_msgs__msg__Obstacle__FIELDS[] = {
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__level_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__classification, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__bbox, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_obstacle_msgs__msg__BoundingBox3D__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__data_resolution, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__lifetime, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__Obstacle__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_obstacle_msgs__msg__Obstacle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {rmf_obstacle_msgs__msg__BoundingBox3D__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_obstacle_msgs__msg__Obstacle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_obstacle_msgs__msg__Obstacle__TYPE_NAME, 30, 30},
      {rmf_obstacle_msgs__msg__Obstacle__FIELDS, 10, 10},
    },
    {rmf_obstacle_msgs__msg__Obstacle__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_obstacle_msgs__msg__BoundingBox3D__EXPECTED_HASH, rmf_obstacle_msgs__msg__BoundingBox3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = rmf_obstacle_msgs__msg__BoundingBox3D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# All measurements should be w.r.t. header.frame_id\n"
  "\n"
  "# Standard header\n"
  "std_msgs/Header header\n"
  "\n"
  "# An id for this specific message. This will be used for deletion.\n"
  "int32 id\n"
  "\n"
  "# Unique identifier of the publisher of this message.\n"
  "string source\n"
  "\n"
  "# The level on which this obstacle exists\n"
  "string level_name\n"
  "\n"
  "# A classification label for the detected obstacle. (human, chair, etc)\n"
  "string classification\n"
  "\n"
  "# Bounding box of the obstacle\n"
  "BoundingBox3D bbox\n"
  "\n"
  "# 3D obstacle data that can be deserialized into an octree.\n"
  "# Resolution (in m) of the smallest octree node.\n"
  "float64 data_resolution\n"
  "\n"
  "# Binary serialization of the obstacle octree\n"
  "int8[] data\n"
  "\n"
  "# The expected lifetime of the obstacle\n"
  "builtin_interfaces/Duration lifetime\n"
  "\n"
  "# Whether to add or delete the obstacle of the id provided\n"
  "int32 action\n"
  "int32 ACTION_ADD=1 # or modify\n"
  "int32 ACTION_DELETE=2\n"
  "int32 ACTION_DELETEALL=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_obstacle_msgs__msg__Obstacle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_obstacle_msgs__msg__Obstacle__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 869, 869},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_obstacle_msgs__msg__Obstacle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_obstacle_msgs__msg__Obstacle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[7] = *rmf_obstacle_msgs__msg__BoundingBox3D__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
