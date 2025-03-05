// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationAck.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x65, 0x29, 0xc3, 0xc9, 0xaf, 0xdf, 0x3c,
      0xc0, 0xd1, 0xe2, 0x7f, 0xdd, 0xc9, 0x13, 0x9f,
      0xae, 0x30, 0xba, 0x12, 0x6d, 0x6c, 0xbb, 0x83,
      0xe1, 0xbe, 0x0c, 0x7a, 0x73, 0xff, 0xee, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_traffic_msgs__msg__NegotiationParticipantAck__EXPECTED_HASH = {1, {
    0x46, 0x98, 0x95, 0x6c, 0xc8, 0xe6, 0xf8, 0xef,
    0x19, 0x7b, 0x40, 0x05, 0x95, 0x75, 0xc8, 0x45,
    0x14, 0x19, 0x7e, 0xd5, 0x6e, 0x20, 0x6b, 0x00,
    0xd0, 0xa3, 0x44, 0x75, 0x39, 0x85, 0x26, 0xbe,
  }};
#endif

static char rmf_traffic_msgs__msg__NegotiationAck__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationAck";
static char rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationParticipantAck";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationAck__FIELD_NAME__conflict_version[] = "conflict_version";
static char rmf_traffic_msgs__msg__NegotiationAck__FIELD_NAME__acknowledgments[] = "acknowledgments";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationAck__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationAck__FIELD_NAME__conflict_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationAck__FIELD_NAME__acknowledgments, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_traffic_msgs__msg__NegotiationAck__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_traffic_msgs__msg__NegotiationAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationAck__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__NegotiationAck__FIELDS, 2, 2},
    },
    {rmf_traffic_msgs__msg__NegotiationAck__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_traffic_msgs__msg__NegotiationParticipantAck__EXPECTED_HASH, rmf_traffic_msgs__msg__NegotiationParticipantAck__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_traffic_msgs__msg__NegotiationParticipantAck__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "# The version number of the conflict whose conclusion is being acknowledged\n"
  "uint64 conflict_version\n"
  "\n"
  "# The participants who are acknowledging the conclusion of the conflict\n"
  "# negotiation\n"
  "NegotiationParticipantAck[] acknowledgments";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationAck__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 232, 232},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationAck__get_individual_type_description_source(NULL),
    sources[1] = *rmf_traffic_msgs__msg__NegotiationParticipantAck__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
