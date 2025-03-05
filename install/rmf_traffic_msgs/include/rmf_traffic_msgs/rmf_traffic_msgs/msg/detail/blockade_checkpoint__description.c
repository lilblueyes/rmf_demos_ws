// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeCheckpoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x4e, 0x3d, 0x48, 0x9e, 0x64, 0xf2, 0x6f,
      0xfe, 0xb9, 0x0e, 0x49, 0x5e, 0xa4, 0x02, 0xda,
      0xd4, 0x4a, 0xed, 0xd2, 0x40, 0x5f, 0x95, 0x42,
      0x80, 0xa9, 0xe8, 0xb7, 0x58, 0x73, 0xca, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeCheckpoint";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__position[] = "position";
static char rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__map_name[] = "map_name";
static char rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__can_hold[] = "can_hold";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__map_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELD_NAME__can_hold, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__BlockadeCheckpoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME, 39, 39},
      {rmf_traffic_msgs__msg__BlockadeCheckpoint__FIELDS, 3, 3},
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
  "# The position of the checkpoint\n"
  "float64[2] position\n"
  "\n"
  "# The name of the map that the checkpoint is on\n"
  "string map_name\n"
  "\n"
  "# Whether or not the participant can hold at this checkpoint\n"
  "bool can_hold";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeCheckpoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeCheckpoint__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 195, 195},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeCheckpoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeCheckpoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
