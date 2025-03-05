// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/priority__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Priority__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x58, 0x31, 0xf1, 0xa2, 0x4a, 0x16, 0xd9,
      0xae, 0x63, 0x83, 0xbc, 0x1b, 0xf4, 0x46, 0xc7,
      0x02, 0xce, 0x20, 0x33, 0xe6, 0xaa, 0x00, 0x03,
      0x40, 0xc7, 0x1f, 0xd9, 0xc6, 0x2b, 0xc3, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Priority__TYPE_NAME[] = "rmf_task_msgs/msg/Priority";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Priority__FIELD_NAME__value[] = "value";
static char rmf_task_msgs__msg__Priority__DEFAULT_VALUE__value[] = "0";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Priority__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Priority__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_task_msgs__msg__Priority__DEFAULT_VALUE__value, 1, 1},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__Priority__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
      {rmf_task_msgs__msg__Priority__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 value 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Priority__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Priority__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 14, 14},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Priority__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Priority__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
