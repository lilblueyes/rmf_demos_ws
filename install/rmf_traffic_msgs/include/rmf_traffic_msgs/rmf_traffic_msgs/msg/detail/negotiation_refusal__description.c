// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationRefusal.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_refusal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationRefusal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0xa8, 0xb2, 0xf5, 0xef, 0x5a, 0x8f, 0xd7,
      0x25, 0x1d, 0xb7, 0x42, 0xe5, 0xb9, 0x3e, 0xaa,
      0xd5, 0x0f, 0x06, 0x78, 0xe2, 0x9a, 0x51, 0x20,
      0x80, 0xa5, 0xd8, 0x65, 0x86, 0x9d, 0xe6, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__NegotiationRefusal__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationRefusal";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationRefusal__FIELD_NAME__conflict_version[] = "conflict_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationRefusal__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationRefusal__FIELD_NAME__conflict_version, 16, 16},
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
rmf_traffic_msgs__msg__NegotiationRefusal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationRefusal__TYPE_NAME, 39, 39},
      {rmf_traffic_msgs__msg__NegotiationRefusal__FIELDS, 1, 1},
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
  "# The ID of the conflict negotiation that is being refused\n"
  "uint64 conflict_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationRefusal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationRefusal__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 84, 84},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationRefusal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationRefusal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
