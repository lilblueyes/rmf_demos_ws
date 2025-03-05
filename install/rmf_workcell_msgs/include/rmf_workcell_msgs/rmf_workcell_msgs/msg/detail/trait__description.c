// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#include "rmf_workcell_msgs/msg/detail/trait__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
const rosidl_type_hash_t *
rmf_workcell_msgs__msg__Trait__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x48, 0x2c, 0x4e, 0xaa, 0x46, 0x1f, 0x85,
      0xc7, 0xc2, 0x65, 0x5c, 0x62, 0x47, 0xad, 0x0b,
      0xe9, 0x7f, 0xd2, 0x37, 0xc5, 0xc0, 0xd1, 0x22,
      0x69, 0xf8, 0xcd, 0x74, 0xf9, 0xa8, 0x94, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_workcell_msgs__msg__Trait__TYPE_NAME[] = "rmf_workcell_msgs/msg/Trait";

// Define type names, field names, and default values
static char rmf_workcell_msgs__msg__Trait__FIELD_NAME__key[] = "key";
static char rmf_workcell_msgs__msg__Trait__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_workcell_msgs__msg__Trait__FIELDS[] = {
  {
    {rmf_workcell_msgs__msg__Trait__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__Trait__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_workcell_msgs__msg__Trait__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_workcell_msgs__msg__Trait__TYPE_NAME, 27, 27},
      {rmf_workcell_msgs__msg__Trait__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string key\n"
  "string[] value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_workcell_msgs__msg__Trait__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_workcell_msgs__msg__Trait__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_workcell_msgs__msg__Trait__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_workcell_msgs__msg__Trait__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
