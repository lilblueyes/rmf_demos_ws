// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Assignment.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/assignment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Assignment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xa6, 0x68, 0xba, 0xcb, 0xa7, 0x93, 0xe6,
      0x02, 0xe5, 0xc4, 0x62, 0x87, 0x48, 0x7d, 0xce,
      0x84, 0x06, 0x23, 0x4f, 0xc2, 0x06, 0x59, 0x04,
      0x47, 0x01, 0xb3, 0xd1, 0x5b, 0x18, 0xc8, 0x4f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Assignment__TYPE_NAME[] = "rmf_task_msgs/msg/Assignment";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Assignment__FIELD_NAME__is_assigned[] = "is_assigned";
static char rmf_task_msgs__msg__Assignment__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_task_msgs__msg__Assignment__FIELD_NAME__expected_robot_name[] = "expected_robot_name";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Assignment__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Assignment__FIELD_NAME__is_assigned, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Assignment__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Assignment__FIELD_NAME__expected_robot_name, 19, 19},
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
rmf_task_msgs__msg__Assignment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
      {rmf_task_msgs__msg__Assignment__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_assigned\n"
  "string fleet_name\n"
  "string expected_robot_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Assignment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Assignment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Assignment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
