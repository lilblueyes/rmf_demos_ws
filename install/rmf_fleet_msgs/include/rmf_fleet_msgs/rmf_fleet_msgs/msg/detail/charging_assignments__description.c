// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/ChargingAssignments.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/charging_assignments__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__ChargingAssignments__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0x4f, 0x81, 0x47, 0x33, 0x34, 0xb9, 0x9f,
      0x91, 0xcb, 0x30, 0x41, 0xe4, 0xb2, 0xf6, 0xde,
      0xe8, 0x3c, 0x75, 0x56, 0x84, 0xb8, 0x4a, 0xf8,
      0x8e, 0x1f, 0x10, 0x31, 0x4c, 0x12, 0x64, 0x08,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/charging_assignment__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_fleet_msgs__msg__ChargingAssignment__EXPECTED_HASH = {1, {
    0x27, 0xed, 0xad, 0xbe, 0x78, 0xb4, 0xd4, 0x15,
    0x52, 0x2e, 0xe2, 0x8a, 0x39, 0x54, 0xa1, 0x0c,
    0x19, 0xfa, 0x7a, 0x3a, 0x9a, 0x54, 0x1d, 0x9b,
    0x13, 0x81, 0xab, 0x35, 0x56, 0xca, 0x9f, 0x00,
  }};
#endif

static char rmf_fleet_msgs__msg__ChargingAssignments__TYPE_NAME[] = "rmf_fleet_msgs/msg/ChargingAssignments";
static char rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME[] = "rmf_fleet_msgs/msg/ChargingAssignment";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__ChargingAssignments__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__ChargingAssignments__FIELD_NAME__assignments[] = "assignments";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__ChargingAssignments__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__ChargingAssignments__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__ChargingAssignments__FIELD_NAME__assignments, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__ChargingAssignments__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_fleet_msgs__msg__ChargingAssignment__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__ChargingAssignments__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__ChargingAssignments__TYPE_NAME, 38, 38},
      {rmf_fleet_msgs__msg__ChargingAssignments__FIELDS, 2, 2},
    },
    {rmf_fleet_msgs__msg__ChargingAssignments__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_fleet_msgs__msg__ChargingAssignment__EXPECTED_HASH, rmf_fleet_msgs__msg__ChargingAssignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_fleet_msgs__msg__ChargingAssignment__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string fleet_name\n"
  "ChargingAssignment[] assignments";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__ChargingAssignments__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__ChargingAssignments__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__ChargingAssignments__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__ChargingAssignments__get_individual_type_description_source(NULL),
    sources[1] = *rmf_fleet_msgs__msg__ChargingAssignment__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
