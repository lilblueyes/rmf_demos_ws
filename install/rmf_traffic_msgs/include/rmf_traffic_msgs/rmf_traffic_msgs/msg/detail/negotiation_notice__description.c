// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationNotice.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_notice__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationNotice__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xc5, 0x26, 0xb2, 0x05, 0x70, 0x75, 0x35,
      0xd0, 0xba, 0x6e, 0x29, 0x4c, 0x27, 0x25, 0xc7,
      0x0c, 0x79, 0x6e, 0x45, 0x86, 0xb0, 0xb9, 0xde,
      0xd4, 0xfc, 0xbe, 0x7e, 0xc0, 0x19, 0x55, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__NegotiationNotice__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationNotice";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationNotice__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationNotice__FIELD_NAME__participants[] = "participants";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationNotice__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationNotice__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationNotice__FIELD_NAME__participants, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__NegotiationNotice__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationNotice__TYPE_NAME, 38, 38},
      {rmf_traffic_msgs__msg__NegotiationNotice__FIELDS, 2, 2},
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
  "# The version number assigned to this conflict\n"
  "uint64 conflict_version\n"
  "\n"
  "# The IDs of the participants that are in conflict.\n"
  "uint64[] participants";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationNotice__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationNotice__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 147, 147},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationNotice__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationNotice__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
