// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/ModeParameter.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/mode_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__ModeParameter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x5e, 0x84, 0xb9, 0x59, 0xf6, 0xea, 0x45,
      0x1a, 0xb7, 0xd4, 0x8a, 0x06, 0xee, 0xc4, 0x9e,
      0x9c, 0xce, 0xe9, 0x7d, 0x14, 0x1a, 0x36, 0x1e,
      0x64, 0x1a, 0x55, 0xb5, 0x86, 0xe0, 0x29, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME[] = "rmf_fleet_msgs/msg/ModeParameter";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__ModeParameter__FIELD_NAME__name[] = "name";
static char rmf_fleet_msgs__msg__ModeParameter__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__ModeParameter__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__ModeParameter__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ModeParameter__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__ModeParameter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME, 32, 32},
      {rmf_fleet_msgs__msg__ModeParameter__FIELDS, 2, 2},
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
  "string value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__ModeParameter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__ModeParameter__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__ModeParameter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__ModeParameter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
