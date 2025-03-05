// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/msg/detail/schedule_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__msg__ScheduleState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb1, 0xf2, 0xdd, 0x93, 0xf6, 0x48, 0xbd, 0x06,
      0xca, 0x34, 0x7e, 0x63, 0xb7, 0x9a, 0x27, 0xfe,
      0x33, 0x5d, 0xa1, 0x5a, 0xf7, 0xe4, 0x16, 0xb6,
      0xe7, 0x73, 0x05, 0x0f, 0x2e, 0xac, 0xbd, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME[] = "rmf_scheduler_msgs/msg/ScheduleState";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__name[] = "name";
static char rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__last_modified[] = "last_modified";
static char rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__last_ran[] = "last_ran";
static char rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__next_run[] = "next_run";
static char rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__msg__ScheduleState__FIELDS[] = {
  {
    {rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__last_modified, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__last_ran, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__next_run, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__ScheduleState__FIELD_NAME__status, 6, 6},
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
rmf_scheduler_msgs__msg__ScheduleState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
      {rmf_scheduler_msgs__msg__ScheduleState__FIELDS, 5, 5},
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
  "# unix time in seconds\n"
  "int64 next_run\n"
  "\n"
  "int8 status\n"
  "int8 CREATED=1\n"
  "int8 STARTED=2\n"
  "int8 FINISHED=3\n"
  "int8 CANCELLED=4\n"
  "int8 FAILED=-1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__msg__ScheduleState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__msg__ScheduleState__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 225, 225},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__msg__ScheduleState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__msg__ScheduleState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
