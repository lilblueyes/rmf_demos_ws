// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0x7b, 0x81, 0xd8, 0xd4, 0x5b, 0x01, 0xa7,
      0x99, 0x4b, 0x31, 0x52, 0xe1, 0xaf, 0x30, 0xa5,
      0xd3, 0xdc, 0xdf, 0x67, 0x39, 0xf5, 0x51, 0xd4,
      0xdd, 0x24, 0x62, 0xf5, 0x1f, 0x96, 0xf3, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/blockade_status__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__BlockadeStatus__EXPECTED_HASH = {1, {
    0x4d, 0x6a, 0x0c, 0x47, 0xfa, 0xd4, 0x83, 0x05,
    0xce, 0xe6, 0x0f, 0xcf, 0x06, 0x68, 0xd2, 0x42,
    0x89, 0xd2, 0x74, 0x6e, 0x46, 0x3c, 0x85, 0xc6,
    0xe4, 0x5a, 0x71, 0xc0, 0x47, 0xfa, 0x8c, 0x9c,
  }};
#endif

static char rmf_traffic_msgs__msg__BlockadeHeartbeat__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeHeartbeat";
static char rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeStatus";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELD_NAME__statuses[] = "statuses";
static char rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELD_NAME__has_gridlock[] = "has_gridlock";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELD_NAME__statuses, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELD_NAME__has_gridlock, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__BlockadeHeartbeat__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeStatus__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeHeartbeat__TYPE_NAME, 38, 38},
      {rmf_traffic_msgs__msg__BlockadeHeartbeat__FIELDS, 2, 2},
    },
    {rmf_traffic_msgs__msg__BlockadeHeartbeat__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__BlockadeStatus__EXPECTED_HASH, rmf_traffic_msgs__msg__BlockadeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__BlockadeStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# An array of the current blockade statuses which describe the most recent\n"
  "# information\n"
  "BlockadeStatus[] statuses\n"
  "\n"
  "# This will be true when the blockade moderator has identified a gridlock that\n"
  "# cannot be undone. This should never happen if a system is setup correctly. But\n"
  "# it may happen if a robot is given a path whose first or last checkpoint is in\n"
  "# conflict with the path of another robot.\n"
  "bool has_gridlock";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeHeartbeat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeHeartbeat__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 418, 418},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeHeartbeat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeHeartbeat__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__BlockadeStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
