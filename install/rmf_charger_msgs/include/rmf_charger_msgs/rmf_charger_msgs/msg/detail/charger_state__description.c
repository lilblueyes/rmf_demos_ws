// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#include "rmf_charger_msgs/msg/detail/charger_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_charger_msgs
const rosidl_type_hash_t *
rmf_charger_msgs__msg__ChargerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x63, 0x8f, 0x4a, 0x11, 0x49, 0xcb, 0x44,
      0xd0, 0xe5, 0x6c, 0x42, 0xf4, 0x1e, 0x2e, 0xa7,
      0x52, 0x84, 0x6d, 0x25, 0x01, 0x0e, 0x16, 0xde,
      0x13, 0xf2, 0xd1, 0xb0, 0x5f, 0x4f, 0xe9, 0xf0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char rmf_charger_msgs__msg__ChargerState__TYPE_NAME[] = "rmf_charger_msgs/msg/ChargerState";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__charger_time[] = "charger_time";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__state[] = "state";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__charger_name[] = "charger_name";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__error_message[] = "error_message";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__request_id[] = "request_id";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__robot_fleet[] = "robot_fleet";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__robot_name[] = "robot_name";
static char rmf_charger_msgs__msg__ChargerState__FIELD_NAME__time_to_fully_charged[] = "time_to_fully_charged";

static rosidl_runtime_c__type_description__Field rmf_charger_msgs__msg__ChargerState__FIELDS[] = {
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__charger_time, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__charger_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__error_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__request_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__robot_fleet, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_charger_msgs__msg__ChargerState__FIELD_NAME__time_to_fully_charged, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_charger_msgs__msg__ChargerState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_charger_msgs__msg__ChargerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_charger_msgs__msg__ChargerState__TYPE_NAME, 33, 33},
      {rmf_charger_msgs__msg__ChargerState__FIELDS, 8, 8},
    },
    {rmf_charger_msgs__msg__ChargerState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Time when this state message was created\n"
  "builtin_interfaces/Time charger_time\n"
  "\n"
  "uint32 CHARGER_IDLE = 1      # Charger is not occupied\n"
  "uint32 CHARGER_ASSIGNED = 2  # Charger has been assigned a robot\n"
  "uint32 CHARGER_CHARGING = 3  # Charger is charging\n"
  "uint32 CHARGER_RELEASED = 4  # Charger has been disconnected from a robot\n"
  "uint32 CHARGER_ERROR = 200   # Error state, see error_message for info\n"
  "\n"
  "uint32 state  # One of the previously enumerated states\n"
  "\n"
  "# The charger name should be unique in the RMF system and\n"
  "# should match a charger name appearing in the traffic map\n"
  "string charger_name\n"
  "\n"
  "# The error_message field should be blank unless state is CHARGER_ERROR\n"
  "string error_message\n"
  "\n"
  "# The request_id field will be populated with the ID that started the\n"
  "# charging cycle if state is anything other than CHARGER_IDLE\n"
  "string request_id\n"
  "\n"
  "# The robot that is currently assigned to this charger (if any)\n"
  "string robot_fleet\n"
  "string robot_name\n"
  "\n"
  "# This contains the duration till the robot becomes fully charged.\n"
  "builtin_interfaces/Duration time_to_fully_charged";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_charger_msgs__msg__ChargerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_charger_msgs__msg__ChargerState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1057, 1057},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_charger_msgs__msg__ChargerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_charger_msgs__msg__ChargerState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
