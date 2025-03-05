// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/loop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Loop__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0x7f, 0xdc, 0x35, 0xb4, 0x89, 0x02, 0x3c,
      0x70, 0x48, 0xd4, 0x41, 0xb0, 0xa7, 0xbf, 0xbc,
      0x33, 0x51, 0x6b, 0xc4, 0x52, 0x63, 0xa4, 0x6c,
      0x99, 0x89, 0x71, 0x3c, 0x4b, 0x8b, 0xde, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_task_msgs__msg__Loop__TYPE_NAME[] = "rmf_task_msgs/msg/Loop";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Loop__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__Loop__FIELD_NAME__robot_type[] = "robot_type";
static char rmf_task_msgs__msg__Loop__FIELD_NAME__num_loops[] = "num_loops";
static char rmf_task_msgs__msg__Loop__FIELD_NAME__start_name[] = "start_name";
static char rmf_task_msgs__msg__Loop__FIELD_NAME__finish_name[] = "finish_name";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Loop__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Loop__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__FIELD_NAME__robot_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__FIELD_NAME__num_loops, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__FIELD_NAME__start_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Loop__FIELD_NAME__finish_name, 11, 11},
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
rmf_task_msgs__msg__Loop__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
      {rmf_task_msgs__msg__Loop__FIELDS, 5, 5},
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
  "# The number of times the robot should loop between the specified points.\n"
  "uint32 num_loops\n"
  "\n"
  "# The name of the waypoint where the robot should begin its loop. If the robot\n"
  "# is not already at this point, it will begin the task by moving there.\n"
  "string start_name\n"
  "\n"
  "# The name of the waypoint where the robot should end its looping. The robot\n"
  "# will visit this waypoint num_loops times and then stop here on the last\n"
  "# visit.\n"
  "string finish_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Loop__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Loop__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 734, 734},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Loop__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Loop__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
