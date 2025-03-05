// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/beacon_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__BeaconState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb3, 0xf2, 0xa9, 0xc2, 0x5b, 0x9f, 0x92, 0xf8,
      0xd1, 0xfd, 0x6b, 0xec, 0xf5, 0x2d, 0xa2, 0x48,
      0x36, 0x43, 0xcc, 0x78, 0x92, 0x35, 0x58, 0xba,
      0xc5, 0x9e, 0x55, 0xf5, 0xba, 0x18, 0xac, 0xe9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__BeaconState__TYPE_NAME[] = "rmf_fleet_msgs/msg/BeaconState";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__id[] = "id";
static char rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__online[] = "online";
static char rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__category[] = "category";
static char rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__activated[] = "activated";
static char rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__level[] = "level";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__BeaconState__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__online, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__category, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__activated, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__BeaconState__FIELD_NAME__level, 5, 5},
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
rmf_fleet_msgs__msg__BeaconState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__BeaconState__TYPE_NAME, 30, 30},
      {rmf_fleet_msgs__msg__BeaconState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message defines data from a robot beacon\n"
  "\n"
  "string id \n"
  "bool online\n"
  "string category\n"
  "bool activated\n"
  "string level";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__BeaconState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__BeaconState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 116, 116},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__BeaconState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__BeaconState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
