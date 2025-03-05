// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/AlertParameter.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/alert_parameter__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__AlertParameter__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xa4, 0x25, 0xe5, 0xc0, 0x26, 0x57, 0x27,
      0x4d, 0x36, 0xce, 0xeb, 0xa4, 0xf9, 0x13, 0x2e,
      0x02, 0xc3, 0x09, 0xe7, 0x79, 0x6c, 0x4f, 0x81,
      0x97, 0x32, 0xcc, 0x8f, 0x5f, 0x42, 0x69, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__AlertParameter__TYPE_NAME[] = "rmf_task_msgs/msg/AlertParameter";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__AlertParameter__FIELD_NAME__name[] = "name";
static char rmf_task_msgs__msg__AlertParameter__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__AlertParameter__FIELDS[] = {
  {
    {rmf_task_msgs__msg__AlertParameter__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__AlertParameter__FIELD_NAME__value, 5, 5},
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
rmf_task_msgs__msg__AlertParameter__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__AlertParameter__TYPE_NAME, 32, 32},
      {rmf_task_msgs__msg__AlertParameter__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Generic key-value pair to be used in Alert\n"
  "string name\n"
  "string value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__AlertParameter__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__AlertParameter__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__AlertParameter__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__AlertParameter__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
