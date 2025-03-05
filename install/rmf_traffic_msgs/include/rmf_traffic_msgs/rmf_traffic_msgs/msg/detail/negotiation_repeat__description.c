// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationRepeat.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_repeat__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationRepeat__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x3f, 0x5b, 0x5c, 0xb5, 0xd3, 0x48, 0xaa,
      0x0c, 0x0d, 0x98, 0x14, 0x0c, 0x21, 0xfd, 0x01,
      0xe9, 0x8b, 0x21, 0xb4, 0x0e, 0x5a, 0xdf, 0x52,
      0x8a, 0x00, 0x72, 0x3b, 0x36, 0x35, 0x2e, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__NegotiationRepeat__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationRepeat";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationRepeat__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationRepeat__FIELD_NAME__table[] = "table";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationRepeat__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationRepeat__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationRepeat__FIELD_NAME__table, 5, 5},
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
rmf_traffic_msgs__msg__NegotiationRepeat__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationRepeat__TYPE_NAME, 38, 38},
      {rmf_traffic_msgs__msg__NegotiationRepeat__FIELDS, 2, 2},
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
  "# Repeat conflict information related to this version\n"
  "uint64 conflict_version\n"
  "\n"
  "# Repeat conflict information related to this table. If this is empty, then\n"
  "# only the initial NegotiationNotice will be repeated.\n"
  "uint64[] table";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationRepeat__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationRepeat__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 226, 226},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationRepeat__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationRepeat__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
