// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Station.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/station__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Station__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xa2, 0x3e, 0xd9, 0xc2, 0x76, 0x26, 0xe3,
      0x4f, 0x28, 0x80, 0x27, 0x06, 0xe0, 0xc2, 0xa0,
      0xad, 0x90, 0xf3, 0x66, 0xa8, 0xa4, 0x36, 0x76,
      0x75, 0xaf, 0xeb, 0x20, 0x55, 0xa7, 0x62, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Station__TYPE_NAME[] = "rmf_task_msgs/msg/Station";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Station__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__Station__FIELD_NAME__robot_type[] = "robot_type";
static char rmf_task_msgs__msg__Station__FIELD_NAME__place_name[] = "place_name";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Station__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Station__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__FIELD_NAME__robot_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Station__FIELD_NAME__place_name, 10, 10},
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
rmf_task_msgs__msg__Station__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
      {rmf_task_msgs__msg__Station__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# task_id is intended to be a pseudo-random string generated\n"
  "# by the caller which can be used to identify this task as it\n"
  "# moves between the queues to completion (or failure).\n"
  "string task_id\n"
  "\n"
  "# robot_type can be used to specify a particular robot fleet\n"
  "# for this request\n"
  "string robot_type\n"
  "\n"
  "# the place name where the robot is requested to station (park)\n"
  "string place_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Station__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Station__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 375, 375},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Station__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Station__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
