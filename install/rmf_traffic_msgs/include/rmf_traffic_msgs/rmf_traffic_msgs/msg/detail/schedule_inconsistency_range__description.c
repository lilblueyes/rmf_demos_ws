// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xc2, 0x50, 0x21, 0x0f, 0x2a, 0x4d, 0x58,
      0x91, 0x54, 0x7a, 0xa4, 0x9f, 0x95, 0x9b, 0xab,
      0x15, 0x0c, 0x28, 0xb4, 0xf1, 0xfa, 0x9c, 0xdd,
      0x24, 0x99, 0x09, 0x9a, 0xba, 0x17, 0x8a, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleInconsistencyRange";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELD_NAME__lower[] = "lower";
static char rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELD_NAME__upper[] = "upper";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELD_NAME__lower, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELD_NAME__upper, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME, 47, 47},
      {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__FIELDS, 2, 2},
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
  "uint64 lower\n"
  "\n"
  "uint64 upper";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleInconsistencyRange__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleInconsistencyRange__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
