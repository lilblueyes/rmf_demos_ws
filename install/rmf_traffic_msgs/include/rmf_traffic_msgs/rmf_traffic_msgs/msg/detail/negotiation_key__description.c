// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationKey.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationKey__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x5f, 0xff, 0x4c, 0x80, 0xf9, 0x24, 0xf3,
      0x4e, 0x6c, 0xe8, 0x32, 0x37, 0x7c, 0x29, 0xca,
      0xcd, 0xfe, 0xeb, 0x22, 0x7f, 0xd2, 0x3b, 0x3d,
      0xa5, 0x9a, 0x79, 0xa0, 0xe1, 0x25, 0x64, 0x8d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationKey";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationKey__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__NegotiationKey__FIELD_NAME__version[] = "version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationKey__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationKey__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationKey__FIELD_NAME__version, 7, 7},
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
rmf_traffic_msgs__msg__NegotiationKey__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__NegotiationKey__FIELDS, 2, 2},
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
  "# The participant ID of the negotiation table\n"
  "uint64 participant\n"
  "\n"
  "# The version of the negotiation table that we care about\n"
  "uint64 version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 140, 140},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationKey__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
