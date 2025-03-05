// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice

#include "rmf_ingestor_msgs/msg/detail/ingestor_result__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_type_hash_t *
rmf_ingestor_msgs__msg__IngestorResult__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0xef, 0x2e, 0xce, 0x25, 0xfa, 0x8f, 0x71,
      0xc9, 0x45, 0xb8, 0x5f, 0x82, 0x16, 0xa2, 0xa0,
      0x31, 0xce, 0xdd, 0x37, 0xd1, 0x14, 0x5a, 0xf5,
      0x22, 0x5d, 0x36, 0x34, 0x07, 0xf5, 0x61, 0x27,
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

static char rmf_ingestor_msgs__msg__IngestorResult__TYPE_NAME[] = "rmf_ingestor_msgs/msg/IngestorResult";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__time[] = "time";
static char rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__request_guid[] = "request_guid";
static char rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__source_guid[] = "source_guid";
static char rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field rmf_ingestor_msgs__msg__IngestorResult__FIELDS[] = {
  {
    {rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__request_guid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__source_guid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorResult__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_ingestor_msgs__msg__IngestorResult__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_ingestor_msgs__msg__IngestorResult__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_ingestor_msgs__msg__IngestorResult__TYPE_NAME, 36, 36},
      {rmf_ingestor_msgs__msg__IngestorResult__FIELDS, 4, 4},
    },
    {rmf_ingestor_msgs__msg__IngestorResult__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "# A unique ID for the request which this result is for\n"
  "string request_guid\n"
  "\n"
  "# The unique ID of the workcell that this result was sent from\n"
  "string source_guid\n"
  "\n"
  "# Different basic result statuses\n"
  "uint8 status\n"
  "uint8 ACKNOWLEDGED=0\n"
  "uint8 SUCCESS=1\n"
  "uint8 FAILED=2\n"
  "\n"
  "# below are custom workcell message fields";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_ingestor_msgs__msg__IngestorResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_ingestor_msgs__msg__IngestorResult__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 332, 332},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_ingestor_msgs__msg__IngestorResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_ingestor_msgs__msg__IngestorResult__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
