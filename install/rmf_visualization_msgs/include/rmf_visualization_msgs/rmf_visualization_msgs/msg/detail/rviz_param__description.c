// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#include "rmf_visualization_msgs/msg/detail/rviz_param__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_visualization_msgs
const rosidl_type_hash_t *
rmf_visualization_msgs__msg__RvizParam__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xf9, 0x01, 0x7b, 0x51, 0xd0, 0xe9, 0xab,
      0xc8, 0x03, 0xae, 0x30, 0x16, 0xad, 0x37, 0x67,
      0x40, 0x3a, 0xd0, 0xde, 0xb7, 0xcc, 0xd3, 0xb7,
      0xbd, 0x3e, 0xeb, 0x97, 0xe3, 0xc4, 0xd5, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_visualization_msgs__msg__RvizParam__TYPE_NAME[] = "rmf_visualization_msgs/msg/RvizParam";

// Define type names, field names, and default values
static char rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__map_name[] = "map_name";
static char rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__query_duration[] = "query_duration";
static char rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__start_duration[] = "start_duration";

static rosidl_runtime_c__type_description__Field rmf_visualization_msgs__msg__RvizParam__FIELDS[] = {
  {
    {rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__map_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__query_duration, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_visualization_msgs__msg__RvizParam__FIELD_NAME__start_duration, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_visualization_msgs__msg__RvizParam__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_visualization_msgs__msg__RvizParam__TYPE_NAME, 36, 36},
      {rmf_visualization_msgs__msg__RvizParam__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string map_name\n"
  "int64 query_duration\n"
  "int64 start_duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_visualization_msgs__msg__RvizParam__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_visualization_msgs__msg__RvizParam__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 58, 58},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_visualization_msgs__msg__RvizParam__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_visualization_msgs__msg__RvizParam__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
