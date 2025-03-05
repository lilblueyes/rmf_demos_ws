// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationConclusion.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_conclusion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationConclusion__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0xf4, 0x5e, 0x36, 0xbf, 0xb1, 0x57, 0x06,
      0xae, 0x8a, 0x46, 0x66, 0xee, 0x72, 0xd8, 0x68,
      0xcc, 0x2a, 0x7f, 0x1c, 0x0c, 0x74, 0xbd, 0xdf,
      0xa9, 0x25, 0x90, 0x30, 0xe7, 0xff, 0x69, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH = {1, {
    0xd1, 0x5f, 0xff, 0x4c, 0x80, 0xf9, 0x24, 0xf3,
    0x4e, 0x6c, 0xe8, 0x32, 0x37, 0x7c, 0x29, 0xca,
    0xcd, 0xfe, 0xeb, 0x22, 0x7f, 0xd2, 0x3b, 0x3d,
    0xa5, 0x9a, 0x79, 0xa0, 0xe1, 0x25, 0x64, 0x8d,
  }};
#endif

static char rmf_traffic_msgs__msg__NegotiationConclusion__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationConclusion";
static char rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationKey";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__resolved[] = "resolved";
static char rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__table[] = "table";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationConclusion__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__resolved, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationConclusion__FIELD_NAME__table, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationConclusion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationKey__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__NegotiationConclusion__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationConclusion__TYPE_NAME, 42, 42},
      {rmf_traffic_msgs__msg__NegotiationConclusion__FIELDS, 3, 3},
    },
    {rmf_traffic_msgs__msg__NegotiationConclusion__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationKey__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationKey__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__NegotiationKey__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The version number assigned to this conflict\n"
  "uint64 conflict_version\n"
  "\n"
  "# True if the conflict was resolved. False if the negotiation was abandoned.\n"
  "bool resolved\n"
  "\n"
  "# The ID sequence for the negotiation table that was selected\n"
  "NegotiationKey[] table";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationConclusion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationConclusion__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 250, 250},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationConclusion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationConclusion__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__NegotiationKey__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
