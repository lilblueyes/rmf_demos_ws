// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_traffic_msgs:msg/ItineraryReached.idl
// generated code does not contain a copyright notice

#include "rmf_traffic_msgs/msg/detail/itinerary_reached__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
const rosidl_type_hash_t *
rmf_traffic_msgs__msg__ItineraryReached__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0xbb, 0xa0, 0xcc, 0xb8, 0x20, 0x33, 0x33,
      0x1a, 0x8c, 0xe5, 0x8e, 0x5e, 0x79, 0x45, 0x48,
      0x14, 0x6c, 0xae, 0xff, 0x3e, 0xed, 0xa2, 0xba,
      0xe2, 0x10, 0x52, 0xfa, 0x24, 0x43, 0x07, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_traffic_msgs__msg__ItineraryReached__TYPE_NAME[] = "rmf_traffic_msgs/msg/ItineraryReached";

// Define type names, field names, and default values
static char rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__participant[] = "participant";
static char rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__plan[] = "plan";
static char rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__reached_checkpoints[] = "reached_checkpoints";
static char rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__progress_version[] = "progress_version";

static rosidl_runtime_c__type_description__Field rmf_traffic_msgs__msg__ItineraryReached__FIELDS[] = {
  {
    {rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__participant, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__plan, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__reached_checkpoints, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_traffic_msgs__msg__ItineraryReached__FIELD_NAME__progress_version, 16, 16},
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
rmf_traffic_msgs__msg__ItineraryReached__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_traffic_msgs__msg__ItineraryReached__TYPE_NAME, 37, 37},
      {rmf_traffic_msgs__msg__ItineraryReached__FIELDS, 4, 4},
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
  "uint64 plan\n"
  "uint64[] reached_checkpoints\n"
  "uint64 progress_version";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_traffic_msgs__msg__ItineraryReached__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_traffic_msgs__msg__ItineraryReached__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_traffic_msgs__msg__ItineraryReached__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_traffic_msgs__msg__ItineraryReached__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
