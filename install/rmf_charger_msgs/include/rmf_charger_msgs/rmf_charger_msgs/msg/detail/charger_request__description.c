// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#include "rmf_charger_msgs/msg/detail/charger_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
const rosidl_type_hash_t *
rmf_charger_msgs__msg__ChargerRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0xd0, 0x39, 0x37, 0x29, 0x4b, 0x4a, 0x40,
      0x4f, 0x80, 0xdb, 0xd8, 0x69, 0x74, 0x20, 0x8c,
      0x6a, 0xb8, 0xab, 0x7f, 0x22, 0xf1, 0x25, 0x01,
      0xe9, 0x0f, 0x43, 0xc3, 0x03, 0x6f, 0xb8, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
#endif

static char rmf_charger_msgs__msg__ChargerRequest__TYPE_NAME[] = "rmf_charger_msgs/msg/ChargerRequest";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";

// Define type names, field names, and default values
static char rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__charger_name[] = "charger_name";
static char rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__fleet_name[] = "fleet_name";
static char rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__start_timeout[] = "start_timeout";
static char rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__request_id[] = "request_id";

static rosidl_runtime_c__type_description__Field rmf_charger_msgs__msg__ChargerRequest__FIELDS[] = {
  {
    {rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__charger_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__fleet_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__start_timeout, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerRequest__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_charger_msgs__msg__ChargerRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_charger_msgs__msg__ChargerRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_charger_msgs__msg__ChargerRequest__TYPE_NAME, 35, 35},
      {rmf_charger_msgs__msg__ChargerRequest__FIELDS, 5, 5},
    },
    {rmf_charger_msgs__msg__ChargerRequest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# The name of the charger that should process this message\n"
  "string charger_name\n"
  "\n"
  "# The robot that wishes to charge\n"
  "string fleet_name\n"
  "string robot_name\n"
  "\n"
  "# The maximum amount of time to wait for the charging to start.\n"
  "# If the robot takes longer than this to arrive and start charging,\n"
  "# the charge request will be canceled.\n"
  "builtin_interfaces/Duration start_timeout\n"
  "\n"
  "# A unique ID for each request. It is advised that you prefix this\n"
  "# with the sender's node name. This is used for error tracking\n"
  "# later on\n"
  "string request_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_charger_msgs__msg__ChargerRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_charger_msgs__msg__ChargerRequest__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 524, 524},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_charger_msgs__msg__ChargerRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_charger_msgs__msg__ChargerRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
