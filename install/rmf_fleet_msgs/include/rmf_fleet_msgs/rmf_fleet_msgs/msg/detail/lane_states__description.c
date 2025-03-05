// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/lane_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__LaneStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x5c, 0x0d, 0xa9, 0x50, 0x68, 0xb2, 0x55,
      0xe4, 0x79, 0x2a, 0x62, 0xf5, 0x13, 0x65, 0x90,
      0x32, 0x11, 0x25, 0xea, 0x41, 0x4a, 0x39, 0x14,
      0xbf, 0x6c, 0xe5, 0x91, 0xe6, 0xa8, 0x6a, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_fleet_msgs__msg__SpeedLimitedLane__EXPECTED_HASH = {1, {
    0x3a, 0x34, 0xe3, 0x63, 0xa4, 0x9d, 0x5f, 0xe3,
    0x01, 0x7c, 0x54, 0x19, 0xb1, 0x00, 0xf5, 0x59,
    0x0c, 0x49, 0x51, 0xaf, 0x89, 0xe6, 0xfb, 0x7b,
    0xd4, 0xd8, 0x1f, 0x02, 0x2c, 0xf5, 0x6d, 0xf0,
  }};
#endif

static char rmf_fleet_msgs__msg__LaneStates__TYPE_NAME[] = "rmf_fleet_msgs/msg/LaneStates";
static char rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME[] = "rmf_fleet_msgs/msg/SpeedLimitedLane";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__closed_lanes[] = "closed_lanes";
static char rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__speed_limits[] = "speed_limits";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__LaneStates__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__closed_lanes, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__LaneStates__FIELD_NAME__speed_limits, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__LaneStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__LaneStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__LaneStates__TYPE_NAME, 29, 29},
      {rmf_fleet_msgs__msg__LaneStates__FIELDS, 3, 3},
    },
    {rmf_fleet_msgs__msg__LaneStates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_fleet_msgs__msg__SpeedLimitedLane__EXPECTED_HASH, rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The name of the fleet with closed or speed limited lanes\n"
  "string fleet_name\n"
  "\n"
  "# The indices of the lanes that are currently closed\n"
  "uint64[] closed_lanes\n"
  "\n"
  "# Lanes that have speed limits\n"
  "SpeedLimitedLane[] speed_limits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__LaneStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__LaneStates__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 217, 217},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__LaneStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__LaneStates__get_individual_type_description_source(NULL),
    sources[1] = *rmf_fleet_msgs__msg__SpeedLimitedLane__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
