// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/Heartbeat.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/heartbeat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__Heartbeat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x39, 0x83, 0xd0, 0x7f, 0x57, 0xa2, 0x1a,
      0x59, 0x08, 0x68, 0xb4, 0x58, 0x1d, 0xe7, 0x6c,
      0x77, 0xe8, 0xd4, 0x67, 0x8e, 0x97, 0x9b, 0xc5,
      0x32, 0xae, 0x3b, 0x5b, 0xeb, 0x39, 0xf3, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__Heartbeat__TYPE_NAME[] = "rmf_traffic_msgs/msg/Heartbeat";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__Heartbeat__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__Heartbeat__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__Heartbeat__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__Heartbeat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__Heartbeat__TYPE_NAME, 30, 30},
      {rmf_traffic_msgs__msg__Heartbeat__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__Heartbeat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__Heartbeat__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__Heartbeat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__Heartbeat__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
