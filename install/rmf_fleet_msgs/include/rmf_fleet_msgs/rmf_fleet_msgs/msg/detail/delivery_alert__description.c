// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#include "rmf_fleet_msgs/msg/detail/delivery_alert__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
const rosidl_type_hash_t *
rmf_fleet_msgs__msg__DeliveryAlert__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0xd4, 0x48, 0xc9, 0x25, 0x47, 0xcc, 0xe0,
      0x0d, 0x85, 0x86, 0x7f, 0x14, 0xc8, 0x4c, 0x94,
      0x2e, 0x51, 0xa1, 0x1c, 0x83, 0x91, 0x65, 0x6b,
      0x4e, 0xd9, 0x91, 0xf5, 0x4f, 0xb9, 0xa5, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__functions.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__functions.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_fleet_msgs__msg__DeliveryAlertAction__EXPECTED_HASH = {1, {
    0xac, 0x5b, 0x99, 0x63, 0x4c, 0xf0, 0x1f, 0x02,
    0xf7, 0x24, 0xed, 0x15, 0xf8, 0x5b, 0x5c, 0xd5,
    0x0d, 0x4f, 0x73, 0x48, 0x0f, 0xf2, 0xa9, 0x94,
    0x5c, 0xeb, 0x8a, 0xc5, 0xb9, 0x17, 0xf7, 0x89,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__DeliveryAlertCategory__EXPECTED_HASH = {1, {
    0x70, 0xf5, 0x33, 0x87, 0xbe, 0x55, 0x64, 0x4a,
    0x43, 0x33, 0x72, 0xb8, 0xff, 0x59, 0xf3, 0xd0,
    0x48, 0x9f, 0xa1, 0xfd, 0x0e, 0x43, 0x68, 0x75,
    0x01, 0x94, 0x41, 0x10, 0x01, 0xce, 0xd1, 0xac,
  }};
static const rosidl_type_hash_t rmf_fleet_msgs__msg__DeliveryAlertTier__EXPECTED_HASH = {1, {
    0x50, 0xe9, 0x7c, 0x01, 0x6b, 0x19, 0x15, 0x4b,
    0x26, 0x78, 0xd0, 0x1d, 0xd8, 0x87, 0x3d, 0xc2,
    0xff, 0x41, 0xd0, 0x49, 0xdf, 0x98, 0x30, 0xa5,
    0x7a, 0x2e, 0x53, 0xd7, 0x77, 0xa1, 0xbb, 0xa2,
  }};
#endif

static char rmf_fleet_msgs__msg__DeliveryAlert__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlert";
static char rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertAction";
static char rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertCategory";
static char rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME[] = "rmf_fleet_msgs/msg/DeliveryAlertTier";

// Define type names, field names, and default values
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__id[] = "id";
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__category[] = "category";
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__tier[] = "tier";
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__task_id[] = "task_id";
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__action[] = "action";
static char rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_fleet_msgs__msg__DeliveryAlert__FIELDS[] = {
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__category, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__tier, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlert__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_fleet_msgs__msg__DeliveryAlert__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_fleet_msgs__msg__DeliveryAlertAction__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlertCategory__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {rmf_fleet_msgs__msg__DeliveryAlertTier__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_fleet_msgs__msg__DeliveryAlert__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_fleet_msgs__msg__DeliveryAlert__TYPE_NAME, 32, 32},
      {rmf_fleet_msgs__msg__DeliveryAlert__FIELDS, 6, 6},
    },
    {rmf_fleet_msgs__msg__DeliveryAlert__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_fleet_msgs__msg__DeliveryAlertAction__EXPECTED_HASH, rmf_fleet_msgs__msg__DeliveryAlertAction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_fleet_msgs__msg__DeliveryAlertAction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__DeliveryAlertCategory__EXPECTED_HASH, rmf_fleet_msgs__msg__DeliveryAlertCategory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_fleet_msgs__msg__DeliveryAlertCategory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_fleet_msgs__msg__DeliveryAlertTier__EXPECTED_HASH, rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_fleet_msgs__msg__DeliveryAlertTier__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string id\n"
  "DeliveryAlertCategory category\n"
  "DeliveryAlertTier tier\n"
  "string task_id\n"
  "DeliveryAlertAction action\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_fleet_msgs__msg__DeliveryAlert__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_fleet_msgs__msg__DeliveryAlert__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 121, 121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_fleet_msgs__msg__DeliveryAlert__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_fleet_msgs__msg__DeliveryAlert__get_individual_type_description_source(NULL),
    sources[1] = *rmf_fleet_msgs__msg__DeliveryAlertAction__get_individual_type_description_source(NULL);
    sources[2] = *rmf_fleet_msgs__msg__DeliveryAlertCategory__get_individual_type_description_source(NULL);
    sources[3] = *rmf_fleet_msgs__msg__DeliveryAlertTier__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
