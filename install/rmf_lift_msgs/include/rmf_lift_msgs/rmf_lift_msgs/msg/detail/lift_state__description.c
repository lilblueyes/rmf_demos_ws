// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#include "rmf_lift_msgs/msg/detail/lift_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_lift_msgs
const rosidl_type_hash_t *
rmf_lift_msgs__msg__LiftState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x05, 0x53, 0xcd, 0x08, 0xee, 0xeb, 0x32,
      0x1b, 0xda, 0xe5, 0x54, 0xef, 0xdb, 0x6d, 0x2e,
      0xbb, 0x2b, 0xe9, 0x75, 0x5d, 0xf2, 0xe3, 0x48,
      0x95, 0xcb, 0xef, 0x55, 0xb5, 0x1f, 0x4c, 0x06,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char rmf_lift_msgs__msg__LiftState__TYPE_NAME[] = "rmf_lift_msgs/msg/LiftState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__lift_time[] = "lift_time";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__lift_name[] = "lift_name";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__available_floors[] = "available_floors";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__current_floor[] = "current_floor";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__destination_floor[] = "destination_floor";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__door_state[] = "door_state";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__motion_state[] = "motion_state";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__available_modes[] = "available_modes";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__current_mode[] = "current_mode";
static char rmf_lift_msgs__msg__LiftState__FIELD_NAME__session_id[] = "session_id";

static rosidl_runtime_c__type_description__Field rmf_lift_msgs__msg__LiftState__FIELDS[] = {
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__lift_time, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__lift_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__available_floors, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__current_floor, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__destination_floor, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__door_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__motion_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__available_modes, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__current_mode, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftState__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_lift_msgs__msg__LiftState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_lift_msgs__msg__LiftState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_lift_msgs__msg__LiftState__TYPE_NAME, 27, 27},
      {rmf_lift_msgs__msg__LiftState__FIELDS, 10, 10},
    },
    {rmf_lift_msgs__msg__LiftState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# lift_time records when the information in this message was generated\n"
  "builtin_interfaces/Time lift_time\n"
  "\n"
  "string lift_name\n"
  "\n"
  "string[] available_floors\n"
  "string current_floor\n"
  "string destination_floor\n"
  "\n"
  "uint8 door_state\n"
  "uint8 DOOR_CLOSED=0\n"
  "uint8 DOOR_MOVING=1\n"
  "uint8 DOOR_OPEN=2\n"
  "\n"
  "uint8 motion_state\n"
  "uint8 MOTION_STOPPED=0\n"
  "uint8 MOTION_UP=1\n"
  "uint8 MOTION_DOWN=2\n"
  "uint8 MOTION_UNKNOWN=3\n"
  "\n"
  "# We can only set human or agv mode, but we can read other modes: fire, etc.\n"
  "uint8[] available_modes\n"
  "uint8 current_mode\n"
  "uint8 MODE_UNKNOWN=0\n"
  "uint8 MODE_HUMAN=1\n"
  "uint8 MODE_AGV=2\n"
  "uint8 MODE_FIRE=3\n"
  "uint8 MODE_OFFLINE=4\n"
  "uint8 MODE_EMERGENCY=5\n"
  "# we can add more \"read-only\" modes as we come across more of them.\n"
  "\n"
  "# this field records the session_id that has been granted control of the lift\n"
  "# until it sends a request with a request_type of REQUEST_END_SESSION\n"
  "string session_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_lift_msgs__msg__LiftState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_lift_msgs__msg__LiftState__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 851, 851},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_lift_msgs__msg__LiftState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_lift_msgs__msg__LiftState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
