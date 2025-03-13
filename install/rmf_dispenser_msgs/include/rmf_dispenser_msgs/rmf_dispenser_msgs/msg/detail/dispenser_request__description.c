// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#include "rmf_dispenser_msgs/msg/detail/dispenser_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_dispenser_msgs
const rosidl_type_hash_t *
rmf_dispenser_msgs__msg__DispenserRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xc5, 0xcd, 0xc7, 0x0d, 0x41, 0x0d, 0x35,
      0x0d, 0x5b, 0xed, 0x92, 0x6b, 0xe9, 0x25, 0x93,
      0x98, 0xfc, 0x6d, 0xcd, 0xfd, 0xde, 0x4f, 0xb0,
      0x10, 0x45, 0xa5, 0x4d, 0x52, 0xdc, 0x71, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH = {1, {
    0xb2, 0x16, 0x4f, 0x63, 0x7d, 0x5c, 0x5f, 0x7d,
    0x24, 0xd1, 0xb3, 0x1f, 0xc6, 0xc2, 0x02, 0x1d,
    0xc0, 0x35, 0xb1, 0x41, 0xd7, 0x91, 0xf9, 0x11,
    0xf3, 0x5d, 0x71, 0xe9, 0xa2, 0x69, 0xcb, 0x70,
  }};
#endif

static char rmf_dispenser_msgs__msg__DispenserRequest__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequestItem";

// Define type names, field names, and default values
static char rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__time[] = "time";
static char rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__request_guid[] = "request_guid";
static char rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__target_guid[] = "target_guid";
static char rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__transporter_type[] = "transporter_type";
static char rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__items[] = "items";

static rosidl_runtime_c__type_description__Field rmf_dispenser_msgs__msg__DispenserRequest__FIELDS[] = {
  {
    {rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__request_guid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__target_guid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__transporter_type, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequest__FIELD_NAME__items, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_dispenser_msgs__msg__DispenserRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_dispenser_msgs__msg__DispenserRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_dispenser_msgs__msg__DispenserRequest__TYPE_NAME, 39, 39},
      {rmf_dispenser_msgs__msg__DispenserRequest__FIELDS, 5, 5},
    },
    {rmf_dispenser_msgs__msg__DispenserRequest__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
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
  "# The unique name of the dispenser that this request is aimed at\n"
  "string target_guid\n"
  "\n"
  "# below are custom workcell message fields\n"
  "string transporter_type\n"
  "DispenserRequestItem[] items";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_dispenser_msgs__msg__DispenserRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_dispenser_msgs__msg__DispenserRequest__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 263, 263},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_dispenser_msgs__msg__DispenserRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_dispenser_msgs__msg__DispenserRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
