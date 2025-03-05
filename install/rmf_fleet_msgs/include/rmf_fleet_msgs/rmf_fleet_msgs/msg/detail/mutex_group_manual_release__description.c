// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/mutex_group_manual_release__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__MutexGroupManualRelease__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x7f, 0xef, 0x0e, 0x13, 0xe7, 0xcf, 0xff,
      0x71, 0x79, 0xcc, 0x26, 0xfd, 0xcf, 0x40, 0x7a,
      0x5e, 0x58, 0x73, 0x6b, 0xc6, 0x55, 0x1b, 0xd8,
      0x10, 0x10, 0x5b, 0x9a, 0xb3, 0x23, 0x74, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__MutexGroupManualRelease__TYPE_NAME[] = "rmf_fleet_msgs/msg/MutexGroupManualRelease";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__release_mutex_groups[] = "release_mutex_groups";
static char rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__fleet[] = "fleet";
static char rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__release_mutex_groups, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__fleet, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELD_NAME__robot, 5, 5},
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
rmf_fleet_msgs__msg__MutexGroupManualRelease__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__MutexGroupManualRelease__TYPE_NAME, 42, 42},
      {rmf_fleet_msgs__msg__MutexGroupManualRelease__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message allows operators to manually request that a robot release one or\n"
  "# more mutex groups that it is currently holding.\n"
  "\n"
  "# Name of the mutex groups to release\n"
  "string[] release_mutex_groups\n"
  "\n"
  "# The name of the fleet that the robot belongs to\n"
  "string fleet\n"
  "\n"
  "# The name of the robot that needs to release the mutex groups\n"
  "string robot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__MutexGroupManualRelease__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__MutexGroupManualRelease__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 340, 340},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__MutexGroupManualRelease__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__MutexGroupManualRelease__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
