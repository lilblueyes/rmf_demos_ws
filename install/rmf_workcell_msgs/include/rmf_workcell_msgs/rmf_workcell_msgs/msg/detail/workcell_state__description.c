// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_workcell_msgs:msg/WorkcellState.idl
// generated code does not contain a copyright notice

#include "rmf_workcell_msgs/msg/detail/workcell_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_workcell_msgs
const rosidl_type_hash_t *
rmf_workcell_msgs__msg__WorkcellState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0x8a, 0x96, 0x0c, 0x43, 0xb1, 0x13, 0x6a,
      0x2c, 0x63, 0x07, 0xf2, 0xae, 0x9b, 0x55, 0xfa,
      0xee, 0xab, 0xb0, 0xe4, 0x6e, 0x06, 0xa3, 0x03,
      0x2b, 0xad, 0xbd, 0x24, 0x7c, 0x49, 0xb7, 0xa7,
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

static char rmf_workcell_msgs__msg__WorkcellState__TYPE_NAME[] = "rmf_workcell_msgs/msg/WorkcellState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__time[] = "time";
static char rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__guid[] = "guid";
static char rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__mode[] = "mode";
static char rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__request_guid_queue[] = "request_guid_queue";

static rosidl_runtime_c__type_description__Field rmf_workcell_msgs__msg__WorkcellState__FIELDS[] = {
  {
    {rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__guid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_workcell_msgs__msg__WorkcellState__FIELD_NAME__request_guid_queue, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_workcell_msgs__msg__WorkcellState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_workcell_msgs__msg__WorkcellState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_workcell_msgs__msg__WorkcellState__TYPE_NAME, 35, 35},
      {rmf_workcell_msgs__msg__WorkcellState__FIELDS, 4, 4},
    },
    {rmf_workcell_msgs__msg__WorkcellState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is a template message for all types of workcells to build off from,\n"
  "# which allows generic workcell libraries to have access to common message\n"
  "# fields.\n"
  "\n"
  "builtin_interfaces/Time time\n"
  "\n"
  "# A unique ID for this workcell\n"
  "string guid\n"
  "\n"
  "# Different basic modes that the workcell could be in\n"
  "int32 mode\n"
  "int32 IDLE=0\n"
  "int32 BUSY=1\n"
  "int32 OFFLINE=2\n"
  "\n"
  "# Queued up requests that are being handled by this workcell\n"
  "string[] request_guid_queue\n"
  "\n"
  "# below are custom workcell-type message fields";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_workcell_msgs__msg__WorkcellState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_workcell_msgs__msg__WorkcellState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 482, 482},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_workcell_msgs__msg__WorkcellState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_workcell_msgs__msg__WorkcellState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
