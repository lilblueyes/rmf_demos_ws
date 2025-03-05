// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_ingestor_msgs:msg/IngestorState.idl
// generated code does not contain a copyright notice

#include "rmf_ingestor_msgs/msg/detail/ingestor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_type_hash_t *
rmf_ingestor_msgs__msg__IngestorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x65, 0x0b, 0x33, 0xe9, 0xde, 0x53, 0x11,
      0xfe, 0xe7, 0x57, 0x01, 0xfc, 0x3d, 0x15, 0x92,
      0x0d, 0xf9, 0x06, 0xa4, 0x02, 0xef, 0x22, 0xc5,
      0xeb, 0xb1, 0x49, 0x05, 0x82, 0xf0, 0x8b, 0x08,
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

static char rmf_ingestor_msgs__msg__IngestorState__TYPE_NAME[] = "rmf_ingestor_msgs/msg/IngestorState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__time[] = "time";
static char rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__guid[] = "guid";
static char rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__mode[] = "mode";
static char rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__request_guid_queue[] = "request_guid_queue";
static char rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__seconds_remaining[] = "seconds_remaining";

static rosidl_runtime_c__type_description__Field rmf_ingestor_msgs__msg__IngestorState__FIELDS[] = {
  {
    {rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__guid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__request_guid_queue, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorState__FIELD_NAME__seconds_remaining, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_ingestor_msgs__msg__IngestorState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_ingestor_msgs__msg__IngestorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_ingestor_msgs__msg__IngestorState__TYPE_NAME, 35, 35},
      {rmf_ingestor_msgs__msg__IngestorState__FIELDS, 5, 5},
    },
    {rmf_ingestor_msgs__msg__IngestorState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
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
  "# below are custom workcell message fields\n"
  "float32 seconds_remaining";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_ingestor_msgs__msg__IngestorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_ingestor_msgs__msg__IngestorState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 342, 342},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_ingestor_msgs__msg__IngestorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_ingestor_msgs__msg__IngestorState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
