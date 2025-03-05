// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#include "rmf_ingestor_msgs/msg/detail/ingestor_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_ingestor_msgs
const rosidl_type_hash_t *
rmf_ingestor_msgs__msg__IngestorRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x29, 0xef, 0xe5, 0x32, 0xcb, 0x69, 0x54,
      0x90, 0x14, 0x78, 0x28, 0xc2, 0x20, 0x4e, 0x45,
      0x6e, 0x82, 0xfb, 0xbd, 0x11, 0xd4, 0xff, 0xc9,
      0x0e, 0x2a, 0x58, 0x36, 0x16, 0xf3, 0xff, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_ingestor_msgs__msg__IngestorRequestItem__EXPECTED_HASH = {1, {
    0x93, 0x3e, 0x04, 0xb4, 0x3b, 0x65, 0xff, 0x72,
    0x16, 0x3f, 0xc5, 0x2d, 0x1b, 0x09, 0x4a, 0xf6,
    0xd8, 0x93, 0xd2, 0x14, 0x32, 0x56, 0xac, 0x85,
    0x9a, 0x68, 0x91, 0xa2, 0xe2, 0x5b, 0x3d, 0xa7,
  }};
#endif

static char rmf_ingestor_msgs__msg__IngestorRequest__TYPE_NAME[] = "rmf_ingestor_msgs/msg/IngestorRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME[] = "rmf_ingestor_msgs/msg/IngestorRequestItem";

// Define type names, field names, and default values
static char rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__time[] = "time";
static char rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__request_guid[] = "request_guid";
static char rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__target_guid[] = "target_guid";
static char rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__transporter_type[] = "transporter_type";
static char rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__items[] = "items";

static rosidl_runtime_c__type_description__Field rmf_ingestor_msgs__msg__IngestorRequest__FIELDS[] = {
  {
    {rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__request_guid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__target_guid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__transporter_type, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequest__FIELD_NAME__items, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_ingestor_msgs__msg__IngestorRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_ingestor_msgs__msg__IngestorRequestItem__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_ingestor_msgs__msg__IngestorRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_ingestor_msgs__msg__IngestorRequest__TYPE_NAME, 37, 37},
      {rmf_ingestor_msgs__msg__IngestorRequest__FIELDS, 5, 5},
    },
    {rmf_ingestor_msgs__msg__IngestorRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_ingestor_msgs__msg__IngestorRequestItem__EXPECTED_HASH, rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_ingestor_msgs__msg__IngestorRequestItem__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time time\n"
  "\n"
  "# A unique ID for this request\n"
  "string request_guid\n"
  "\n"
  "# The unique name of the ingestor that this request is aimed at\n"
  "string target_guid\n"
  "\n"
  "# below are custom workcell message fields\n"
  "string transporter_type\n"
  "IngestorRequestItem[] items";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_ingestor_msgs__msg__IngestorRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_ingestor_msgs__msg__IngestorRequest__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 261, 261},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_ingestor_msgs__msg__IngestorRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_ingestor_msgs__msg__IngestorRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_ingestor_msgs__msg__IngestorRequestItem__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
