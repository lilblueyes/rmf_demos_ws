// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__NegotiationParticipantAck__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x98, 0x95, 0x6c, 0xc8, 0xe6, 0xf8, 0xef,
      0x19, 0x7b, 0x40, 0x05, 0x95, 0x75, 0xc8, 0x45,
      0x14, 0x19, 0x7e, 0xd5, 0x6e, 0x20, 0x6b, 0x00,
      0xd0, 0xa3, 0x44, 0x75, 0x39, 0x85, 0x26, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME[] = "rmf_traffic_msgs/msg/NegotiationParticipantAck";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__updating[] = "updating";
static char rmf_traffic_msgs__msg__NegotiationParticipantAck__DEFAULT_VALUE__updating[] = "False";
static char rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__itinerary_version[] = "itinerary_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__updating, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__DEFAULT_VALUE__updating, 5, 5},
  },
  {
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELD_NAME__itinerary_version, 17, 17},
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
rmf_traffic_msgs__msg__NegotiationParticipantAck__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME, 46, 46},
      {rmf_traffic_msgs__msg__NegotiationParticipantAck__FIELDS, 3, 3},
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
  "# The participant that is acknowledging\n"
  "uint64 participant\n"
  "\n"
  "# Whether this participant will be updating\n"
  "bool updating false\n"
  "\n"
  "# The itinerary version that will provide the update to\n"
  "# conform to the negotiation result\n"
  "uint64 itinerary_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__NegotiationParticipantAck__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__NegotiationParticipantAck__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 243, 243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__NegotiationParticipantAck__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__NegotiationParticipantAck__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
