// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeReady.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_ready__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeReady__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x58, 0xb2, 0x1c, 0xc7, 0x2e, 0xe1, 0xad,
      0xaa, 0xbb, 0x14, 0x94, 0x94, 0xd2, 0xdd, 0xc5,
      0xa6, 0x32, 0x04, 0xe3, 0x13, 0x31, 0x6e, 0xa7,
      0x67, 0xba, 0xc5, 0xea, 0x15, 0x4a, 0x29, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__BlockadeReady__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeReady";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__reservation[] = "reservation";
static char rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__checkpoint[] = "checkpoint";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeReady__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__reservation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeReady__FIELD_NAME__checkpoint, 10, 10},
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
rmf_traffic_msgs__msg__BlockadeReady__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeReady__TYPE_NAME, 34, 34},
      {rmf_traffic_msgs__msg__BlockadeReady__FIELDS, 3, 3},
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
  "# The ID of the blockade participant\n"
  "uint64 participant\n"
  "\n"
  "# The reservation ID that this update refers to\n"
  "uint64 reservation\n"
  "\n"
  "# The checkpoint that is ready to be left\n"
  "uint64 checkpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeReady__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeReady__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 186, 186},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeReady__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeReady__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
