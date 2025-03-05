// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ItineraryDelay.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/itinerary_delay__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ItineraryDelay__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x7f, 0xd6, 0x33, 0x1a, 0xbd, 0x60, 0x14,
      0x3f, 0xca, 0xcf, 0x52, 0x09, 0x87, 0x5d, 0x4e,
      0xbe, 0xd4, 0x0e, 0x4b, 0xce, 0x61, 0xe1, 0x65,
      0xc7, 0x77, 0xb4, 0xcb, 0xaf, 0x89, 0x9c, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ItineraryDelay__TYPE_NAME[] = "rmf_traffic_msgs/msg/ItineraryDelay";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__delay[] = "delay";
static char rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__itinerary_version[] = "itinerary_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ItineraryDelay__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__delay, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryDelay__FIELD_NAME__itinerary_version, 17, 17},
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
rmf_traffic_msgs__msg__ItineraryDelay__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ItineraryDelay__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__ItineraryDelay__FIELDS, 3, 3},
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
  "uint64 participant\n"
  "\n"
  "int64 delay\n"
  "\n"
  "uint64 itinerary_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ItineraryDelay__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ItineraryDelay__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ItineraryDelay__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ItineraryDelay__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
