// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_type_hash_t *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x16, 0x4f, 0x63, 0x7d, 0x5c, 0x5f, 0x7d,
      0x24, 0xd1, 0xb3, 0x1f, 0xc6, 0xc2, 0x02, 0x1d,
      0xc0, 0x35, 0xb1, 0x41, 0xd7, 0x91, 0xf9, 0x11,
      0xf3, 0x5d, 0x71, 0xe9, 0xa2, 0x69, 0xcb, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequestItem";

// Define type names, field names, and default values
static char rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__type_guid[] = "type_guid";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__quantity[] = "quantity";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__compartment_name[] = "compartment_name";

static rosidl_runtime_c__type_description__Field rmf_dispenser_msgs__msg__DispenserRequestItem__FIELDS[] = {
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__type_guid, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__quantity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__FIELD_NAME__compartment_name, 16, 16},
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
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
      {rmf_dispenser_msgs__msg__DispenserRequestItem__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type_guid\n"
  "int32 quantity\n"
  "string compartment_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
