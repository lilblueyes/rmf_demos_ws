// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xe8, 0x04, 0x4b, 0x83, 0xf5, 0x63, 0x29,
      0xb6, 0x83, 0x5d, 0x43, 0xee, 0x9f, 0x37, 0xc2,
      0x21, 0xc3, 0x66, 0x93, 0x2a, 0x4f, 0x24, 0xd8,
      0x7f, 0x79, 0x36, 0xce, 0xe5, 0x3e, 0x69, 0xb5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ScheduleChangeProgress__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeProgress";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__has_progress[] = "has_progress";
static char rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__version[] = "version";
static char rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__checkpoints[] = "checkpoints";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__has_progress, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELD_NAME__checkpoints, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleChangeProgress__TYPE_NAME, 43, 43},
      {rmf_traffic_msgs__msg__ScheduleChangeProgress__FIELDS, 3, 3},
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
  "# Indicate whether any progress has actually been made. If false, then the\n"
  "# rest of the fields can be ignored\n"
  "bool has_progress\n"
  "\n"
  "# The version of the progress within the plan\n"
  "uint64 version\n"
  "\n"
  "# The checkpoints in the itinerary that have been reached\n"
  "uint64[] checkpoints";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleChangeProgress__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleChangeProgress__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 272, 272},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeProgress__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleChangeProgress__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
