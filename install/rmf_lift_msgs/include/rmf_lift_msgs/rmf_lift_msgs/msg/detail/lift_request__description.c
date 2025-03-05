// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice

#include "rmf_lift_msgs/msg/detail/lift_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_lift_msgs
const rosidl_type_hash_t *
rmf_lift_msgs__msg__LiftRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0xf1, 0xe0, 0xaa, 0x4d, 0x17, 0x27, 0x03,
      0xd0, 0xd7, 0x84, 0x0c, 0x18, 0x76, 0x44, 0x8c,
      0x6c, 0x5d, 0x75, 0xab, 0x58, 0x95, 0x5f, 0xaf,
      0x7d, 0xe7, 0xdd, 0xdc, 0x17, 0xc0, 0x96, 0xac,
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

static char rmf_lift_msgs__msg__LiftRequest__TYPE_NAME[] = "rmf_lift_msgs/msg/LiftRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__lift_name[] = "lift_name";
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__request_time[] = "request_time";
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__session_id[] = "session_id";
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__request_type[] = "request_type";
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__destination_floor[] = "destination_floor";
static char rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__door_state[] = "door_state";

static rosidl_runtime_c__type_description__Field rmf_lift_msgs__msg__LiftRequest__FIELDS[] = {
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__lift_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__request_time, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__request_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__destination_floor, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_lift_msgs__msg__LiftRequest__FIELD_NAME__door_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_lift_msgs__msg__LiftRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_lift_msgs__msg__LiftRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_lift_msgs__msg__LiftRequest__TYPE_NAME, 29, 29},
      {rmf_lift_msgs__msg__LiftRequest__FIELDS, 6, 6},
    },
    {rmf_lift_msgs__msg__LiftRequest__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string lift_name\n"
  "builtin_interfaces/Time request_time\n"
  "\n"
  "# session_id should be unique at least between different requesters.\n"
  "# For example, session_id could be the requester's node name.\n"
  "string session_id\n"
  "\n"
  "# AGV mode means that the doors are always open when the lift is stopped\n"
  "# Human mode means that LiftDoorRequest messages must be used to open/close\n"
  "# the doors explicitly, since they may \"time out\" and close automatically.\n"
  "uint8 request_type\n"
  "uint8 REQUEST_END_SESSION=0\n"
  "uint8 REQUEST_AGV_MODE=1\n"
  "uint8 REQUEST_HUMAN_MODE=2\n"
  "\n"
  "# The destination_floor must be one of the values returned in a LiftState.\n"
  "string destination_floor\n"
  "\n"
  "# Explicit door requests are necessary in \"human\" mode to open/close doors.\n"
  "# Door requests are not necessary in \"AGV\" mode, when the doors are always\n"
  "# held open when the lift cabin is stopped.\n"
  "uint8 door_state\n"
  "uint8 DOOR_CLOSED=0\n"
  "uint8 DOOR_OPEN=2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_lift_msgs__msg__LiftRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_lift_msgs__msg__LiftRequest__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 880, 880},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_lift_msgs__msg__LiftRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_lift_msgs__msg__LiftRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
