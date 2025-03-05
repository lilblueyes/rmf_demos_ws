// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xaf, 0xb0, 0x41, 0x2d, 0xd8, 0x5b, 0xb9,
      0xb5, 0x9d, 0xba, 0x03, 0xd8, 0x78, 0x8a, 0xa8,
      0x5b, 0x26, 0x8f, 0x24, 0xa1, 0x75, 0x4a, 0xd9,
      0x50, 0xd3, 0xf8, 0x20, 0x5e, 0x9f, 0x78, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ScheduleChangeDelay__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeDelay";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleChangeDelay__FIELD_NAME__delay[] = "delay";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleChangeDelay__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleChangeDelay__FIELD_NAME__delay, 5, 5},
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
rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleChangeDelay__TYPE_NAME, 40, 40},
      {rmf_traffic_msgs__msg__ScheduleChangeDelay__FIELDS, 1, 1},
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
  "int64 delay";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleChangeDelay__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleChangeDelay__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 13, 13},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeDelay__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleChangeDelay__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
