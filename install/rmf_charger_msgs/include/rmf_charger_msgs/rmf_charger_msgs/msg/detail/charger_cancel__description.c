// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice

#include "rmf_charger_msgs/msg/detail/charger_cancel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
const rosidl_type_hash_t *
rmf_charger_msgs__msg__ChargerCancel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x39, 0xd5, 0xd5, 0xf2, 0xdd, 0x72, 0x69,
      0x53, 0xfb, 0x24, 0x33, 0x97, 0x64, 0xc2, 0x6d,
      0x2c, 0x1c, 0xd2, 0x1f, 0x37, 0xf0, 0x72, 0xec,
      0xdb, 0x4b, 0xe3, 0x53, 0x02, 0x70, 0x76, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rmf_charger_msgs__msg__ChargerCancel__TYPE_NAME[] = "rmf_charger_msgs/msg/ChargerCancel";

// Define type names, field names, and default values
static char rmf_charger_msgs__msg__ChargerCancel__FIELD_NAME__charger_name[] = "charger_name";
static char rmf_charger_msgs__msg__ChargerCancel__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field rmf_charger_msgs__msg__ChargerCancel__FIELDS[] = {
  {
    {rmf_charger_msgs__msg__ChargerCancel__FIELD_NAME__charger_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerCancel__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_charger_msgs__msg__ChargerCancel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_charger_msgs__msg__ChargerCancel__TYPE_NAME, 34, 34},
      {rmf_charger_msgs__msg__ChargerCancel__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string charger_name  # the charger that should process this message\n"
  "\n"
  "# A unique ID for each request. It is advised that you prefix this\n"
  "# with the sender's node name. This is used for error tracking\n"
  "# later on\n"
  "string request_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_charger_msgs__msg__ChargerCancel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_charger_msgs__msg__ChargerCancel__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 228, 228},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_charger_msgs__msg__ChargerCancel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_charger_msgs__msg__ChargerCancel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
