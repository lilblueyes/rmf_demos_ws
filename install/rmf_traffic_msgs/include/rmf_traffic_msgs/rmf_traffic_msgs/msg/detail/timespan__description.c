// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Timespan__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xc1, 0x97, 0x31, 0x0e, 0xde, 0xfd, 0x1c,
      0xf7, 0xd3, 0xa7, 0x9c, 0x98, 0x0f, 0xdd, 0xdb,
      0xc6, 0x5f, 0x8a, 0xc9, 0x6d, 0xf5, 0xc9, 0x0c,
      0x51, 0x37, 0x1f, 0x98, 0x1c, 0x1c, 0x67, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__Timespan__TYPE_NAME[] = "rmf_traffic_msgs/msg/Timespan";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Timespan__FIELD_NAME__maps[] = "maps";
static char rmf_traffic_msgs__msg__Timespan__FIELD_NAME__has_lower_bound[] = "has_lower_bound";
static char rmf_traffic_msgs__msg__Timespan__FIELD_NAME__lower_bound[] = "lower_bound";
static char rmf_traffic_msgs__msg__Timespan__FIELD_NAME__has_upper_bound[] = "has_upper_bound";
static char rmf_traffic_msgs__msg__Timespan__FIELD_NAME__upper_bound[] = "upper_bound";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Timespan__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Timespan__FIELD_NAME__maps, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Timespan__FIELD_NAME__has_lower_bound, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Timespan__FIELD_NAME__lower_bound, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Timespan__FIELD_NAME__has_upper_bound, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__Timespan__FIELD_NAME__upper_bound, 11, 11},
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
rmf_traffic_msgs__msg__Timespan__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Timespan__TYPE_NAME, 29, 29},
      {rmf_traffic_msgs__msg__Timespan__FIELDS, 5, 5},
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
  "string[] maps\n"
  "\n"
  "# TODO(MXG): Find out if it's more efficient to use a bool+value pair, or to use\n"
  "# a dynamic array of the value (which will only ever have 1 or 0 entries)\n"
  "\n"
  "bool has_lower_bound\n"
  "int64 lower_bound\n"
  "\n"
  "bool has_upper_bound\n"
  "int64 upper_bound";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Timespan__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Timespan__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 251, 251},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Timespan__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Timespan__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
