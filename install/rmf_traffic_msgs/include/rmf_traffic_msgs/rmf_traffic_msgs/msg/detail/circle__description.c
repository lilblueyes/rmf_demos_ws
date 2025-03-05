// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Circle.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/circle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Circle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x12, 0x71, 0xf4, 0x8e, 0xa9, 0x4a, 0x8a,
      0xa4, 0x93, 0x38, 0xc5, 0x5f, 0x66, 0xfc, 0xda,
      0x71, 0xb4, 0xe2, 0xa6, 0x02, 0x34, 0x6b, 0xce,
      0x3b, 0xcb, 0x3a, 0x24, 0xd8, 0xca, 0xa1, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__Circle__TYPE_NAME[] = "rmf_traffic_msgs/msg/Circle";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Circle__FIELD_NAME__radius[] = "radius";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Circle__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Circle__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Circle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
      {rmf_traffic_msgs__msg__Circle__FIELDS, 1, 1},
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
  "# The radius of the circle. The circle will be centered around the origin of its\n"
  "# frame of reference.\n"
  "float64 radius";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Circle__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Circle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Circle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
