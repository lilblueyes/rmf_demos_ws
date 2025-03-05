// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__RequestHeader__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x00, 0x02, 0xab, 0x8d, 0x8d, 0x83, 0x3f,
      0xb0, 0xff, 0xe4, 0xca, 0x9a, 0x5f, 0x8d, 0x69,
      0x74, 0x9e, 0x54, 0x36, 0x13, 0x86, 0x87, 0xce,
      0xf0, 0xd2, 0x6e, 0x8b, 0xec, 0x3a, 0xad, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME[] = "rmf_reservation_msgs/msg/RequestHeader";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__RequestHeader__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__RequestHeader__FIELD_NAME__request_id, 10, 10},
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
rmf_reservation_msgs__msg__RequestHeader__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
      {rmf_reservation_msgs__msg__RequestHeader__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string robot_name\n"
  "string fleet_name\n"
  "uint64 request_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__RequestHeader__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__RequestHeader__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__RequestHeader__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
