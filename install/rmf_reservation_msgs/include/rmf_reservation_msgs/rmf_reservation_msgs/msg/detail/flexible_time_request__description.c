// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/FlexibleTimeRequest.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/flexible_time_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0x48, 0xa7, 0x75, 0xa3, 0x20, 0x0a, 0xf1,
      0xdf, 0xa9, 0xaf, 0x8e, 0x02, 0x0f, 0xbf, 0x42,
      0x1c, 0xd5, 0xe0, 0x12, 0x23, 0xa1, 0xf1, 0x74,
      0x89, 0x49, 0xd0, 0x15, 0x5b, 0xb3, 0x58, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_reservation_msgs/msg/detail/flexible_time_reservation_alt__functions.h"
#include "rmf_reservation_msgs/msg/detail/start_time_range__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"

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
static const rosidl_type_hash_t rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__EXPECTED_HASH = {1, {
    0xaa, 0x80, 0xcd, 0xa2, 0xe2, 0x5b, 0x7d, 0xad,
    0x26, 0xe9, 0xb5, 0x80, 0x15, 0x20, 0x4f, 0x65,
    0x32, 0xc8, 0x0b, 0x73, 0x78, 0xd5, 0x2d, 0x2d,
    0x39, 0xed, 0x4a, 0xdc, 0x25, 0x69, 0x6a, 0x70,
  }};
static const rosidl_type_hash_t rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH = {1, {
    0x79, 0x00, 0x02, 0xab, 0x8d, 0x8d, 0x83, 0x3f,
    0xb0, 0xff, 0xe4, 0xca, 0x9a, 0x5f, 0x8d, 0x69,
    0x74, 0x9e, 0x54, 0x36, 0x13, 0x86, 0x87, 0xce,
    0xf0, 0xd2, 0x6e, 0x8b, 0xec, 0x3a, 0xad, 0x16,
  }};
static const rosidl_type_hash_t rmf_reservation_msgs__msg__StartTimeRange__EXPECTED_HASH = {1, {
    0x9a, 0xe1, 0xfb, 0xcb, 0x5b, 0x39, 0x0e, 0xda,
    0x23, 0x5b, 0xca, 0xe3, 0xeb, 0xd8, 0x8e, 0x57,
    0x69, 0x75, 0xa6, 0x57, 0x1d, 0x87, 0x33, 0xd0,
    0x9f, 0x6b, 0x82, 0x65, 0x5f, 0x8a, 0x56, 0x72,
  }};
#endif

static char rmf_reservation_msgs__msg__FlexibleTimeRequest__TYPE_NAME[] = "rmf_reservation_msgs/msg/FlexibleTimeRequest";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__TYPE_NAME[] = "rmf_reservation_msgs/msg/FlexibleTimeReservationAlt";
static char rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME[] = "rmf_reservation_msgs/msg/RequestHeader";
static char rmf_reservation_msgs__msg__StartTimeRange__TYPE_NAME[] = "rmf_reservation_msgs/msg/StartTimeRange";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELD_NAME__header[] = "header";
static char rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELD_NAME__alternatives[] = "alternatives";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELD_NAME__alternatives, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_reservation_msgs__msg__FlexibleTimeRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__StartTimeRange__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__FlexibleTimeRequest__TYPE_NAME, 44, 44},
      {rmf_reservation_msgs__msg__FlexibleTimeRequest__FIELDS, 2, 2},
    },
    {rmf_reservation_msgs__msg__FlexibleTimeRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__EXPECTED_HASH, rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH, rmf_reservation_msgs__msg__RequestHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_reservation_msgs__msg__RequestHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_reservation_msgs__msg__StartTimeRange__EXPECTED_HASH, rmf_reservation_msgs__msg__StartTimeRange__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = rmf_reservation_msgs__msg__StartTimeRange__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "rmf_reservation_msgs/RequestHeader header\n"
  "rmf_reservation_msgs/FlexibleTimeReservationAlt[] alternatives";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__FlexibleTimeRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__FlexibleTimeRequest__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 105, 105},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__FlexibleTimeRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__FlexibleTimeRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *rmf_reservation_msgs__msg__FlexibleTimeReservationAlt__get_individual_type_description_source(NULL);
    sources[4] = *rmf_reservation_msgs__msg__RequestHeader__get_individual_type_description_source(NULL);
    sources[5] = *rmf_reservation_msgs__msg__StartTimeRange__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
