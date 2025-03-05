// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/speed_limit_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa2, 0x0a, 0xaa, 0x1e, 0x35, 0x3b, 0x1c, 0xc0,
      0x79, 0x3d, 0xad, 0x24, 0xdf, 0xca, 0x43, 0xd7,
      0xbd, 0x83, 0x69, 0xc4, 0xe5, 0x96, 0x2f, 0xb3,
      0xcc, 0x62, 0x80, 0xd0, 0xb6, 0x38, 0x10, 0x17,
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

static char rmf_fleet_msgs__msg__SpeedLimitRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/SpeedLimitRequest";
static char rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME[] = "rmf_fleet_msgs/msg/SpeedLimitedLane";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__speed_limits[] = "speed_limits";
static char rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__remove_limits[] = "remove_limits";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__SpeedLimitRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__speed_limits, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__SpeedLimitRequest__FIELD_NAME__remove_limits, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__SpeedLimitRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_fleet_msgs__msg__SpeedLimitedLane__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__SpeedLimitRequest__TYPE_NAME, 36, 36},
      {rmf_fleet_msgs__msg__SpeedLimitRequest__FIELDS, 3, 3},
    },
    {rmf_fleet_msgs__msg__SpeedLimitRequest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_fleet_msgs__msg__SpeedLimitedLane__EXPECTED_HASH, rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_fleet_msgs__msg__SpeedLimitedLane__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The name of the fleet\n"
  "string fleet_name\n"
  "\n"
  "# The lanes to impose speed limits upon.\n"
  "SpeedLimitedLane[] speed_limits\n"
  "\n"
  "# The indices of lanes to remove speed limits\n"
  "uint64[] remove_limits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__SpeedLimitRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__SpeedLimitRequest__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 186, 186},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__SpeedLimitRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__SpeedLimitRequest__get_individual_type_description_source(NULL),
    sources[1] = *rmf_fleet_msgs__msg__SpeedLimitedLane__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
