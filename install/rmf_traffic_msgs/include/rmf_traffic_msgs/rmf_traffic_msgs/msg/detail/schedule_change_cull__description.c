// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeCull.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleChangeCull__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x34, 0xc5, 0xee, 0x27, 0x82, 0x06, 0x12,
      0x7c, 0x26, 0x62, 0x13, 0xc8, 0x8c, 0xe8, 0xfd,
      0x54, 0xdc, 0x69, 0xfb, 0x9e, 0xbf, 0x11, 0xf7,
      0x47, 0xa4, 0xe2, 0xa9, 0xda, 0x0d, 0x6f, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleChangeCull";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleChangeCull__FIELD_NAME__time[] = "time";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleChangeCull__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleChangeCull__FIELD_NAME__time, 4, 4},
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
rmf_traffic_msgs__msg__ScheduleChangeCull__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME, 39, 39},
      {rmf_traffic_msgs__msg__ScheduleChangeCull__FIELDS, 1, 1},
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
  "int64 time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleChangeCull__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleChangeCull__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeCull__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleChangeCull__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
