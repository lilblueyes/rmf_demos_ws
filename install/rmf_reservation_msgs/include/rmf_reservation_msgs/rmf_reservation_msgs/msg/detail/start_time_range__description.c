// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/StartTimeRange.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/start_time_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__StartTimeRange__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0xe1, 0xfb, 0xcb, 0x5b, 0x39, 0x0e, 0xda,
      0x23, 0x5b, 0xca, 0xe3, 0xeb, 0xd8, 0x8e, 0x57,
      0x69, 0x75, 0xa6, 0x57, 0x1d, 0x87, 0x33, 0xd0,
      0x9f, 0x6b, 0x82, 0x65, 0x5f, 0x8a, 0x56, 0x72,
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

static char rmf_reservation_msgs__msg__StartTimeRange__TYPE_NAME[] = "rmf_reservation_msgs/msg/StartTimeRange";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__earliest_start_time[] = "earliest_start_time";
static char rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__has_earliest_start_time[] = "has_earliest_start_time";
static char rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__latest_start_time[] = "latest_start_time";
static char rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__has_latest_start_time[] = "has_latest_start_time";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__StartTimeRange__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__earliest_start_time, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__has_earliest_start_time, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__latest_start_time, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__StartTimeRange__FIELD_NAME__has_latest_start_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_reservation_msgs__msg__StartTimeRange__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_reservation_msgs__msg__StartTimeRange__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__StartTimeRange__TYPE_NAME, 39, 39},
      {rmf_reservation_msgs__msg__StartTimeRange__FIELDS, 4, 4},
    },
    {rmf_reservation_msgs__msg__StartTimeRange__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time earliest_start_time\n"
  "bool has_earliest_start_time\n"
  "builtin_interfaces/Time latest_start_time\n"
  "bool has_latest_start_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__StartTimeRange__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__StartTimeRange__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 141, 141},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__StartTimeRange__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__StartTimeRange__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
