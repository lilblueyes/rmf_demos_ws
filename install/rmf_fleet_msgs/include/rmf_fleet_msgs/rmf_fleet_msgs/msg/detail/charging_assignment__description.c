// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/ChargingAssignment.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/charging_assignment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__ChargingAssignment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xed, 0xad, 0xbe, 0x78, 0xb4, 0xd4, 0x15,
      0x52, 0x2e, 0xe2, 0x8a, 0x39, 0x54, 0xa1, 0x0c,
      0x19, 0xfa, 0x7a, 0x3a, 0x9a, 0x54, 0x1d, 0x9b,
      0x13, 0x81, 0xab, 0x35, 0x56, 0xca, 0x9f, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME[] = "rmf_fleet_msgs/msg/ChargingAssignment";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__waypoint_name[] = "waypoint_name";
static char rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__ChargingAssignment__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__waypoint_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ChargingAssignment__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__ChargingAssignment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME, 37, 37},
      {rmf_fleet_msgs__msg__ChargingAssignment__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string robot_name\n"
  "string waypoint_name\n"
  "uint8 mode\n"
  "\n"
  "uint8 MODE_CHARGE = 0\n"
  "uint8 MODE_WAIT = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__ChargingAssignment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__ChargingAssignment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__ChargingAssignment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
