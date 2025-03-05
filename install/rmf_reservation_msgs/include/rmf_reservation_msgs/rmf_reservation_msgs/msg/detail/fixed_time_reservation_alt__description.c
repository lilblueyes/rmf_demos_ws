// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/FixedTimeReservationAlt.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/fixed_time_reservation_alt__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__FixedTimeReservationAlt__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xe0, 0x5a, 0xf4, 0x7c, 0x63, 0xb9, 0xa9,
      0x6e, 0x8c, 0x3e, 0xcc, 0x3c, 0xb1, 0x89, 0xfb,
      0x88, 0x8a, 0x2e, 0xc9, 0x62, 0xad, 0xa2, 0x1d,
      0x5c, 0x8a, 0x1d, 0xf3, 0x75, 0x67, 0xe1, 0x77,
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

static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__TYPE_NAME[] = "rmf_reservation_msgs/msg/FixedTimeReservationAlt";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__resource_name[] = "resource_name";
static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__cost[] = "cost";
static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__start_time[] = "start_time";
static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__has_end[] = "has_end";
static char rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__resource_name, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__cost, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__start_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__has_end, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_reservation_msgs__msg__FixedTimeReservationAlt__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
rmf_reservation_msgs__msg__FixedTimeReservationAlt__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__FixedTimeReservationAlt__TYPE_NAME, 48, 48},
      {rmf_reservation_msgs__msg__FixedTimeReservationAlt__FIELDS, 5, 5},
    },
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "string resource_name\n"
  "float64 cost\n"
  "builtin_interfaces/Time start_time\n"
  "bool has_end\n"
  "builtin_interfaces/Duration duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__FixedTimeReservationAlt__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__FixedTimeReservationAlt__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__FixedTimeReservationAlt__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__FixedTimeReservationAlt__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
