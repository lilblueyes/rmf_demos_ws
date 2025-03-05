// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/msg/detail/trigger_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__msg__TriggerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0x27, 0xef, 0x2d, 0xad, 0xb0, 0x30, 0x5e,
      0x64, 0xeb, 0x70, 0xd3, 0x28, 0x0d, 0x51, 0xc9,
      0xbf, 0x26, 0x1b, 0x67, 0x5e, 0x49, 0x85, 0x31,
      0x34, 0x3f, 0x77, 0xc0, 0xba, 0x8f, 0x7c, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_scheduler_msgs__msg__TriggerState__TYPE_NAME[] = "rmf_scheduler_msgs/msg/TriggerState";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__name[] = "name";
static char rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__last_modified[] = "last_modified";
static char rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__last_ran[] = "last_ran";
static char rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__msg__TriggerState__FIELDS[] = {
  {
    {rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__last_modified, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__last_ran, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__TriggerState__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__msg__TriggerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__msg__TriggerState__TYPE_NAME, 35, 35},
      {rmf_scheduler_msgs__msg__TriggerState__FIELDS, 4, 4},
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
  "\n"
  "# unix time in seconds\n"
  "int64 last_modified\n"
  "\n"
  "# unix time in seconds\n"
  "int64 last_ran\n"
  "\n"
  "int8 status\n"
  "int8 STARTED=2\n"
  "int8 FINISHED=3\n"
  "int8 CANCELLED=4\n"
  "int8 FAILED=-1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__msg__TriggerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__msg__TriggerState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 171, 171},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__msg__TriggerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__msg__TriggerState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
