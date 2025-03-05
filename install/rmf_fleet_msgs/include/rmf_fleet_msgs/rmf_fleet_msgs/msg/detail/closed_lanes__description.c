// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/ClosedLanes.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/closed_lanes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__ClosedLanes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0x5e, 0xc9, 0xd2, 0x1e, 0x37, 0x6a, 0x95,
      0x5e, 0x23, 0xef, 0x04, 0xe3, 0x0b, 0x39, 0x09,
      0x6c, 0x30, 0x32, 0x7e, 0x7c, 0x26, 0x1a, 0x46,
      0xf1, 0xdc, 0x46, 0x1a, 0xbe, 0x4f, 0x8a, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__ClosedLanes__TYPE_NAME[] = "rmf_fleet_msgs/msg/ClosedLanes";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__ClosedLanes__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__ClosedLanes__FIELD_NAME__closed_lanes[] = "closed_lanes";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__ClosedLanes__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__ClosedLanes__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ClosedLanes__FIELD_NAME__closed_lanes, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__ClosedLanes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__ClosedLanes__TYPE_NAME, 30, 30},
      {rmf_fleet_msgs__msg__ClosedLanes__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "string fleet_name\n"
  "uint64[] closed_lanes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__ClosedLanes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__ClosedLanes__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__ClosedLanes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__ClosedLanes__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
