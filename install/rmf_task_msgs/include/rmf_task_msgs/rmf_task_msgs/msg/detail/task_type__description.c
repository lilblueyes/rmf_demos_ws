// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/TaskType.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/task_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__TaskType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x35, 0x72, 0x34, 0xef, 0x2c, 0x30, 0xd2,
      0x36, 0x83, 0xd2, 0xc4, 0x1b, 0x41, 0x33, 0x89,
      0x06, 0xe1, 0xdc, 0xf7, 0xf0, 0x7b, 0xf0, 0x32,
      0xb9, 0x4e, 0xde, 0x27, 0xa1, 0x09, 0x0d, 0x95,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__TaskType__TYPE_NAME[] = "rmf_task_msgs/msg/TaskType";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__TaskType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__TaskType__FIELDS[] = {
  {
    {rmf_task_msgs__msg__TaskType__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__TaskType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
      {rmf_task_msgs__msg__TaskType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 type\n"
  "uint32 TYPE_STATION=0\n"
  "uint32 TYPE_LOOP=1\n"
  "uint32 TYPE_DELIVERY=2\n"
  "uint32 TYPE_CHARGE_BATTERY=3\n"
  "uint32 TYPE_CLEAN=4\n"
  "uint32 TYPE_PATROL=5\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__TaskType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__TaskType__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 147, 147},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__TaskType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__TaskType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
