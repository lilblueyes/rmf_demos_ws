// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/lane_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__LaneRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x0c, 0x40, 0x69, 0x96, 0x6b, 0x9c, 0x5f,
      0x16, 0x43, 0x86, 0x2c, 0x4c, 0xb4, 0x78, 0x66,
      0x14, 0x43, 0x95, 0xcc, 0x30, 0xec, 0x51, 0xb1,
      0xa9, 0x9f, 0x0b, 0x83, 0x4c, 0x72, 0x15, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__LaneRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/LaneRequest";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__open_lanes[] = "open_lanes";
static char rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__close_lanes[] = "close_lanes";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__LaneRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__open_lanes, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__LaneRequest__FIELD_NAME__close_lanes, 11, 11},
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
rmf_fleet_msgs__msg__LaneRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__LaneRequest__TYPE_NAME, 30, 30},
      {rmf_fleet_msgs__msg__LaneRequest__FIELDS, 3, 3},
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
  "uint64[] open_lanes\n"
  "uint64[] close_lanes";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__LaneRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__LaneRequest__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__LaneRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__LaneRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
