// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/BehaviorParameter.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/behavior_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__BehaviorParameter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0xc9, 0x29, 0xfa, 0xd1, 0xe9, 0x15, 0xaa,
      0x1f, 0x01, 0x81, 0xa2, 0xbe, 0x23, 0xed, 0x27,
      0xad, 0x17, 0xcb, 0x58, 0x0f, 0x82, 0xc7, 0xd6,
      0x2e, 0x75, 0x51, 0xb5, 0x70, 0x0a, 0x71, 0x65,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME[] = "rmf_task_msgs/msg/BehaviorParameter";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__BehaviorParameter__FIELD_NAME__name[] = "name";
static char rmf_task_msgs__msg__BehaviorParameter__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__BehaviorParameter__FIELDS[] = {
  {
    {rmf_task_msgs__msg__BehaviorParameter__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__FIELD_NAME__value, 5, 5},
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
rmf_task_msgs__msg__BehaviorParameter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
      {rmf_task_msgs__msg__BehaviorParameter__FIELDS, 2, 2},
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
rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__BehaviorParameter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
