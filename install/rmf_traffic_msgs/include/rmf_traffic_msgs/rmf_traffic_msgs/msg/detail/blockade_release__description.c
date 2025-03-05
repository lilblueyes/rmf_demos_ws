// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/BlockadeRelease.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/blockade_release__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__BlockadeRelease__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x2e, 0x25, 0xeb, 0x3d, 0x9f, 0x53, 0xe0,
      0x4f, 0xcc, 0x6e, 0xe7, 0xbc, 0x61, 0x3e, 0x98,
      0xa1, 0xfc, 0x06, 0x88, 0x0f, 0x25, 0xa0, 0x07,
      0x24, 0x43, 0xd6, 0xbf, 0x0f, 0x64, 0xfa, 0x6b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__BlockadeRelease__TYPE_NAME[] = "rmf_traffic_msgs/msg/BlockadeRelease";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__reservation[] = "reservation";
static char rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__checkpoint[] = "checkpoint";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__BlockadeRelease__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__reservation, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__BlockadeRelease__FIELD_NAME__checkpoint, 10, 10},
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
rmf_traffic_msgs__msg__BlockadeRelease__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__BlockadeRelease__TYPE_NAME, 36, 36},
      {rmf_traffic_msgs__msg__BlockadeRelease__FIELDS, 3, 3},
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
  "# The checkpoint that should be released\n"
  "uint64 checkpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__BlockadeRelease__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__BlockadeRelease__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 185, 185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__BlockadeRelease__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__BlockadeRelease__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
