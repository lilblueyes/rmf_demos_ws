// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ItineraryClear.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/itinerary_clear__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ItineraryClear__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0xc3, 0x84, 0x30, 0x1d, 0xcf, 0xcd, 0xeb,
      0x8a, 0xb8, 0xed, 0x3d, 0xe2, 0x2f, 0x3c, 0xa0,
      0x5a, 0xab, 0x10, 0xe0, 0xc3, 0xe2, 0x33, 0x67,
      0x94, 0x37, 0xe8, 0x31, 0x8b, 0x04, 0x8f, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ItineraryClear__TYPE_NAME[] = "rmf_traffic_msgs/msg/ItineraryClear";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ItineraryClear__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__ItineraryClear__FIELD_NAME__itinerary_version[] = "itinerary_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ItineraryClear__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ItineraryClear__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryClear__FIELD_NAME__itinerary_version, 17, 17},
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
rmf_traffic_msgs__msg__ItineraryClear__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ItineraryClear__TYPE_NAME, 35, 35},
      {rmf_traffic_msgs__msg__ItineraryClear__FIELDS, 2, 2},
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
  "uint64 itinerary_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ItineraryClear__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ItineraryClear__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ItineraryClear__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ItineraryClear__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
