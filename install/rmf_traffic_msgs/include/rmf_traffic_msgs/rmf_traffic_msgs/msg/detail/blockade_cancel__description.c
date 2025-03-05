// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeCancel.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_cancel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeCancel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xe8, 0xed, 0x2f, 0x51, 0xb2, 0xbf, 0xe8,
      0xe7, 0xa6, 0x81, 0x38, 0xf3, 0x69, 0xb2, 0x58,
      0x8b, 0x19, 0x28, 0x55, 0x12, 0xd7, 0xd7, 0x08,
      0x4f, 0x2d, 0x73, 0x0a, 0x91, 0xa6, 0xb6, 0x48,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__BlockadeCancel__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeCancel";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__all_reservations[] = "all_reservations";
static char rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__reservation[] = "reservation";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeCancel__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__all_reservations, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeCancel__FIELD_NAME__reservation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__BlockadeCancel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeCancel__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__BlockadeCancel__FIELDS, 3, 3},
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
  "# The participant whose reservation is being canceled\n"
  "uint64 participant\n"
  "\n"
  "# True if all reservations for this participants should be considered cancelled\n"
  "bool all_reservations\n"
  "\n"
  "# If all_reservations is false, then this is the last reservation that should\n"
  "# be considered cancelled. If all_reservations is true, then this field is\n"
  "# meaningless\n"
  "uint64 reservation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeCancel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeCancel__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 364, 364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeCancel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeCancel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
