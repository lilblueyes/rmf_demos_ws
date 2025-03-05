// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationStatuses.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_statuses__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationStatuses__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x37, 0xc8, 0xc7, 0x23, 0xe0, 0xc8, 0xd5,
      0x19, 0x4b, 0x5d, 0xde, 0xf6, 0x08, 0xc5, 0x05,
      0x23, 0x67, 0xe0, 0x9d, 0x76, 0xf3, 0x17, 0xea,
      0xfa, 0xad, 0x90, 0x44, 0x2b, 0x41, 0xac, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/negotiation_status__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationStatus__EXPECTED_HASH = {1, {
    0x60, 0x43, 0x82, 0x54, 0x7a, 0x9b, 0x50, 0xab,
    0x80, 0x49, 0xc1, 0x27, 0x04, 0x28, 0x5d, 0x77,
    0x69, 0x5f, 0x60, 0xcf, 0x8f, 0x24, 0x20, 0xea,
    0x39, 0xf4, 0xcf, 0x6f, 0xbe, 0x80, 0x89, 0x97,
  }};
#endif

static char rmf_traffic_msgs__msg__NegotiationStatuses__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationStatuses";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationStatus";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationStatuses__FIELD_NAME__negotiations[] = "negotiations";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationStatuses__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationStatuses__FIELD_NAME__negotiations, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationStatuses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationStatus__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__NegotiationStatuses__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationStatuses__TYPE_NAME, 40, 40},
      {rmf_traffic_msgs__msg__NegotiationStatuses__FIELDS, 1, 1},
    },
    {rmf_traffic_msgs__msg__NegotiationStatuses__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationStatus__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_traffic_msgs__msg__NegotiationStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "NegotiationStatus[] negotiations";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationStatuses__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationStatuses__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationStatuses__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationStatuses__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_traffic_msgs__msg__NegotiationStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
