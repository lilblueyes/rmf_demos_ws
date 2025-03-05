// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x34, 0xe3, 0x63, 0xa4, 0x9d, 0x5f, 0xe3,
      0x01, 0x7c, 0x54, 0x19, 0xb1, 0x00, 0xf5, 0x59,
      0x0c, 0x49, 0x51, 0xaf, 0x89, 0xe6, 0xfb, 0x7b,
      0xd4, 0xd8, 0x1f, 0x02, 0x2c, 0xf5, 0x6d, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME[] = "rmf_fleet_msgs/msg/SpeedLimitedLane";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__SpeedLimitedLane__FIELD_NAME__lane_index[] = "lane_index";
static char rmf_fleet_msgs__msg__SpeedLimitedLane__FIELD_NAME__speed_limit[] = "speed_limit";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__SpeedLimitedLane__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__SpeedLimitedLane__FIELD_NAME__lane_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__SpeedLimitedLane__FIELD_NAME__speed_limit, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
      {rmf_fleet_msgs__msg__SpeedLimitedLane__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The index of the lane with a speed limit\n"
  "uint64 lane_index\n"
  "\n"
  "# The imposed speed limit for the lane\n"
  "float64 speed_limit";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__SpeedLimitedLane__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__SpeedLimitedLane__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
