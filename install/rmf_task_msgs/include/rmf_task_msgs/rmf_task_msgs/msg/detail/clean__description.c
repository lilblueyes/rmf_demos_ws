// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/clean__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Clean__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x78, 0xb6, 0xf9, 0x90, 0xbf, 0xcb, 0x5a, 0xd4,
      0x4c, 0xec, 0xf3, 0xe1, 0x5a, 0xcd, 0x7d, 0x62,
      0xd5, 0x07, 0xab, 0xca, 0xea, 0x5b, 0x22, 0xac,
      0x65, 0x65, 0x1b, 0xae, 0x16, 0x20, 0xc4, 0x41,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Clean__TYPE_NAME[] = "rmf_task_msgs/msg/Clean";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Clean__FIELD_NAME__start_waypoint[] = "start_waypoint";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Clean__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Clean__FIELD_NAME__start_waypoint, 14, 14},
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
rmf_task_msgs__msg__Clean__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
      {rmf_task_msgs__msg__Clean__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The name of the waypoint where the robot should begin its pre-configured\n"
  "# cleaning job.\n"
  "string start_waypoint\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Clean__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Clean__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 114, 114},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Clean__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Clean__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
