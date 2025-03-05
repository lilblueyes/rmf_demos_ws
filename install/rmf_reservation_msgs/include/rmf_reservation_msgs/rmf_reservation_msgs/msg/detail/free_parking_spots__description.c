// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/FreeParkingSpots.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/free_parking_spots__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__FreeParkingSpots__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0xeb, 0xd4, 0x0c, 0x78, 0xa6, 0xad, 0x72,
      0x21, 0x0f, 0x58, 0x30, 0x65, 0xff, 0x8d, 0x69,
      0xf3, 0x9a, 0xf5, 0x30, 0x2a, 0x35, 0x27, 0x2c,
      0x4a, 0x56, 0xba, 0xd9, 0x5b, 0x51, 0x57, 0xb3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_reservation_msgs__msg__FreeParkingSpots__TYPE_NAME[] = "rmf_reservation_msgs/msg/FreeParkingSpots";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__FreeParkingSpots__FIELD_NAME__spots[] = "spots";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__FreeParkingSpots__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__FreeParkingSpots__FIELD_NAME__spots, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_reservation_msgs__msg__FreeParkingSpots__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__FreeParkingSpots__TYPE_NAME, 41, 41},
      {rmf_reservation_msgs__msg__FreeParkingSpots__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] spots";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__FreeParkingSpots__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__FreeParkingSpots__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__FreeParkingSpots__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__FreeParkingSpots__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
