// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_building_map_msgs
const rosidl_type_hash_t *
rmf_building_map_msgs__msg__AffineImage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xca, 0x35, 0xf0, 0x2b, 0x4d, 0x15, 0xc0,
      0xdd, 0x9c, 0x32, 0xb1, 0x9a, 0x3e, 0xce, 0x03,
      0x8b, 0xd9, 0xa4, 0xad, 0xad, 0x8f, 0xe1, 0x1d,
      0x48, 0x91, 0xfb, 0xe1, 0x9e, 0x96, 0x1c, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_building_map_msgs__msg__AffineImage__TYPE_NAME[] = "rmf_building_map_msgs/msg/AffineImage";

// Define type names, field names, and default values
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__name[] = "name";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__x_offset[] = "x_offset";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__y_offset[] = "y_offset";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__yaw[] = "yaw";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__scale[] = "scale";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__encoding[] = "encoding";
static char rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field rmf_building_map_msgs__msg__AffineImage__FIELDS[] = {
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__x_offset, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__y_offset, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__encoding, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_building_map_msgs__msg__AffineImage__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_building_map_msgs__msg__AffineImage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_building_map_msgs__msg__AffineImage__TYPE_NAME, 37, 37},
      {rmf_building_map_msgs__msg__AffineImage__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float32 x_offset\n"
  "float32 y_offset\n"
  "float32 yaw\n"
  "float32 scale\n"
  "string encoding\n"
  "uint8[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_building_map_msgs__msg__AffineImage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_building_map_msgs__msg__AffineImage__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 101, 101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_building_map_msgs__msg__AffineImage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_building_map_msgs__msg__AffineImage__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
