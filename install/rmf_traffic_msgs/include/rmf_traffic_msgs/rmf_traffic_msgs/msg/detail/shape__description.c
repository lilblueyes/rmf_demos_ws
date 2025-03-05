// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/shape__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Shape__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xe4, 0xd6, 0xfb, 0x2f, 0x61, 0x4e, 0xdb,
      0xf7, 0xbf, 0xd0, 0xbe, 0x71, 0xe4, 0xa8, 0xb4,
      0x56, 0xf7, 0x13, 0x01, 0x88, 0xe3, 0x98, 0x22,
      0xe8, 0xb8, 0xb5, 0x3f, 0xe9, 0x25, 0x69, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__Shape__TYPE_NAME[] = "rmf_traffic_msgs/msg/Shape";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Shape__FIELD_NAME__type[] = "type";
static char rmf_traffic_msgs__msg__Shape__FIELD_NAME__index[] = "index";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Shape__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Shape__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Shape__FIELD_NAME__index, 5, 5},
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
rmf_traffic_msgs__msg__Shape__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Shape__TYPE_NAME, 26, 26},
      {rmf_traffic_msgs__msg__Shape__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# A 2D shape reference.\n"
  "\n"
  "uint8 NONE=0\n"
  "uint8 BOX=1\n"
  "uint8 CIRCLE=2\n"
  "\n"
  "# TODO(MXG): Add support for the SimplePolygon class\n"
  "# uint8 SIMPLE_POLYGON=3\n"
  "\n"
  "# Choose between the BOX and CIRCLE types\n"
  "uint8 type\n"
  "\n"
  "# Specify the index of the shape. We support 256 different convex shapes per\n"
  "# trajectory. If more shapes are needed than that, then the trajectory must be\n"
  "# split into more trajectories.\n"
  "uint8 index";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Shape__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Shape__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 400, 400},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Shape__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Shape__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
