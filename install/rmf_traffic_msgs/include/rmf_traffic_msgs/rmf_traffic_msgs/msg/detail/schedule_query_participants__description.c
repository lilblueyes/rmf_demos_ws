// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQueryParticipants.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ScheduleQueryParticipants__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xfe, 0x83, 0x89, 0xee, 0x83, 0xc0, 0xdb,
      0x45, 0xd2, 0x2e, 0xa9, 0xc2, 0xf3, 0x99, 0xbf,
      0xb9, 0x0e, 0xca, 0xe4, 0x60, 0x46, 0xfc, 0x5d,
      0x63, 0x51, 0x17, 0x52, 0x15, 0x7a, 0xa2, 0xfb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ScheduleQueryParticipants__TYPE_NAME[] = "rmf_traffic_msgs/msg/ScheduleQueryParticipants";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELD_NAME__type[] = "type";
static char rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELD_NAME__ids[] = "ids";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELD_NAME__ids, 3, 3},
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
rmf_traffic_msgs__msg__ScheduleQueryParticipants__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ScheduleQueryParticipants__TYPE_NAME, 46, 46},
      {rmf_traffic_msgs__msg__ScheduleQueryParticipants__FIELDS, 2, 2},
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
  "uint16 ALL=1\n"
  "uint16 INCLUDE=2\n"
  "uint16 EXCLUDE=3\n"
  "\n"
  "uint16 type\n"
  "\n"
  "uint64[] ids";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ScheduleQueryParticipants__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ScheduleQueryParticipants__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ScheduleQueryParticipants__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ScheduleQueryParticipants__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
