// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/InterruptRequest.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/interrupt_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__InterruptRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0xd5, 0x85, 0x10, 0x98, 0xfa, 0x9c, 0x74,
      0x7b, 0x5c, 0x21, 0x9b, 0x67, 0xf8, 0xe6, 0x92,
      0x6d, 0xc5, 0x62, 0x7a, 0xfb, 0x9c, 0x29, 0xd2,
      0x77, 0x98, 0x62, 0x67, 0xe8, 0xae, 0xc3, 0x6b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_fleet_msgs__msg__InterruptRequest__TYPE_NAME[] = "rmf_fleet_msgs/msg/InterruptRequest";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__interrupt_id[] = "interrupt_id";
static char rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__labels[] = "labels";
static char rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__InterruptRequest__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__interrupt_id, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__labels, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__InterruptRequest__FIELD_NAME__type, 4, 4},
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
rmf_fleet_msgs__msg__InterruptRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__InterruptRequest__TYPE_NAME, 35, 35},
      {rmf_fleet_msgs__msg__InterruptRequest__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string fleet_name\n"
  "string robot_name\n"
  "string interrupt_id\n"
  "string[] labels\n"
  "uint8 type\n"
  "\n"
  "uint8 TYPE_INTERRUPT = 0\n"
  "uint8 TYPE_RESUME = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__InterruptRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__InterruptRequest__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 131, 131},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__InterruptRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__InterruptRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
