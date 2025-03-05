// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/fleet_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__FleetState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0xa5, 0xbb, 0x9f, 0x2c, 0x07, 0x6a, 0x58,
      0x7b, 0x20, 0xc0, 0x49, 0x74, 0x58, 0x1c, 0x8d,
      0x8e, 0x2e, 0xc7, 0xd0, 0x23, 0x00, 0x24, 0x4f,
      0x9e, 0x39, 0xe3, 0x7d, 0x7d, 0x91, 0x92, 0xf4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"
#include "rmf_fleet_msgs/msg/detail/location__functions.h"
#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__Location__EXPECTED_HASH = {1, {
    0x61, 0x36, 0xf1, 0xfc, 0x14, 0xb8, 0x96, 0xb5,
    0x72, 0xc3, 0x47, 0x46, 0xc5, 0x5d, 0xbb, 0xfd,
    0x88, 0x62, 0xe3, 0xc5, 0x61, 0xad, 0x5c, 0x95,
    0x7e, 0xe8, 0xb0, 0xc1, 0x16, 0xa0, 0xe8, 0xdf,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH = {1, {
    0x9c, 0xd4, 0xcf, 0x77, 0x30, 0x31, 0x22, 0x9f,
    0x53, 0x73, 0xfd, 0x1b, 0x94, 0x2a, 0xcf, 0x16,
    0xd1, 0x40, 0x66, 0x4b, 0x79, 0xe2, 0x46, 0x3b,
    0x5e, 0x47, 0x6c, 0x1e, 0xf6, 0x93, 0x3b, 0x2d,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__RobotState__EXPECTED_HASH = {1, {
    0x92, 0xaf, 0xab, 0x7d, 0xe7, 0x1f, 0xff, 0x5e,
    0xc9, 0x92, 0xcb, 0x0e, 0x98, 0x09, 0x26, 0x83,
    0x35, 0xc3, 0x58, 0xad, 0xef, 0xc4, 0xa5, 0x03,
    0xbf, 0x9c, 0x3c, 0xe0, 0x75, 0xda, 0x0c, 0x9f,
  }};
#endif

static char rmf_fleet_msgs__msg__FleetState__TYPE_NAME[] = "rmf_fleet_msgs/msg/FleetState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_fleet_msgs__msg__Location__TYPE_NAME[] = "rmf_fleet_msgs/msg/Location";
static char rmf_fleet_msgs__msg__RobotMode__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotMode";
static char rmf_fleet_msgs__msg__RobotState__TYPE_NAME[] = "rmf_fleet_msgs/msg/RobotState";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__FleetState__FIELD_NAME__name[] = "name";
static char rmf_fleet_msgs__msg__FleetState__FIELD_NAME__robots[] = "robots";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__FleetState__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__FleetState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__FleetState__FIELD_NAME__robots, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__FleetState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__Location__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotMode__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__RobotState__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__FleetState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__FleetState__TYPE_NAME, 29, 29},
      {rmf_fleet_msgs__msg__FleetState__FIELDS, 2, 2},
    },
    {rmf_fleet_msgs__msg__FleetState__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__Location__EXPECTED_HASH, rmf_fleet_msgs__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__Location__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__RobotMode__EXPECTED_HASH, rmf_fleet_msgs__msg__RobotMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_fleet_msgs__msg__RobotMode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__RobotState__EXPECTED_HASH, rmf_fleet_msgs__msg__RobotState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_fleet_msgs__msg__RobotState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "RobotState[] robots";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__FleetState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__FleetState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__FleetState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__FleetState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__Location__get_individual_type_description_source(NULL);
    sources[3] = *rmf_fleet_msgs__msg__RobotMode__get_individual_type_description_source(NULL);
    sources[4] = *rmf_fleet_msgs__msg__RobotState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
