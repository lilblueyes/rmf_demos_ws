// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/msg/detail/delivery__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__msg__Delivery__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x48, 0x10, 0xcd, 0x05, 0x55, 0xbb, 0x59,
      0xa1, 0x56, 0x5a, 0xb6, 0x82, 0x07, 0x28, 0x77,
      0x33, 0xd9, 0x06, 0xf5, 0x67, 0x8c, 0xf0, 0xe1,
      0xfd, 0x41, 0xbe, 0xc6, 0x43, 0x7a, 0xa8, 0xcd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_task_msgs/msg/detail/behavior__functions.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__functions.h"
#include "rmf_task_msgs/msg/detail/behavior_parameter__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH = {1, {
    0xb2, 0x16, 0x4f, 0x63, 0x7d, 0x5c, 0x5f, 0x7d,
    0x24, 0xd1, 0xb3, 0x1f, 0xc6, 0xc2, 0x02, 0x1d,
    0xc0, 0x35, 0xb1, 0x41, 0xd7, 0x91, 0xf9, 0x11,
    0xf3, 0x5d, 0x71, 0xe9, 0xa2, 0x69, 0xcb, 0x70,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Behavior__EXPECTED_HASH = {1, {
    0xe5, 0x1d, 0xa1, 0x85, 0xa9, 0x8b, 0xb6, 0xaa,
    0x80, 0x00, 0xb7, 0x43, 0x15, 0xe7, 0x08, 0x22,
    0xa3, 0xe9, 0x30, 0x61, 0xde, 0xbc, 0x9d, 0xda,
    0xa8, 0x9e, 0x24, 0x82, 0xa5, 0xe2, 0x4e, 0x91,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH = {1, {
    0xb7, 0xc9, 0x29, 0xfa, 0xd1, 0xe9, 0x15, 0xaa,
    0x1f, 0x01, 0x81, 0xa2, 0xbe, 0x23, 0xed, 0x27,
    0xad, 0x17, 0xcb, 0x58, 0x0f, 0x82, 0xc7, 0xd6,
    0x2e, 0x75, 0x51, 0xb5, 0x70, 0x0a, 0x71, 0x65,
  }};
#endif

static char rmf_task_msgs__msg__Delivery__TYPE_NAME[] = "rmf_task_msgs/msg/Delivery";
static char rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME[] = "rmf_dispenser_msgs/msg/DispenserRequestItem";
static char rmf_task_msgs__msg__Behavior__TYPE_NAME[] = "rmf_task_msgs/msg/Behavior";
static char rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME[] = "rmf_task_msgs/msg/BehaviorParameter";

// Define type names, field names, and default values
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__task_id[] = "task_id";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__items[] = "items";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_place_name[] = "pickup_place_name";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_dispenser[] = "pickup_dispenser";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_behavior[] = "pickup_behavior";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_place_name[] = "dropoff_place_name";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_ingestor[] = "dropoff_ingestor";
static char rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_behavior[] = "dropoff_behavior";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__msg__Delivery__FIELDS[] = {
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__task_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__items, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_place_name, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_dispenser, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__pickup_behavior, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_place_name, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_ingestor, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Delivery__FIELD_NAME__dropoff_behavior, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__msg__Delivery__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_dispenser_msgs__msg__DispenserRequestItem__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Behavior__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__BehaviorParameter__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__msg__Delivery__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
      {rmf_task_msgs__msg__Delivery__FIELDS, 8, 8},
    },
    {rmf_task_msgs__msg__Delivery__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_dispenser_msgs__msg__DispenserRequestItem__EXPECTED_HASH, rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_dispenser_msgs__msg__DispenserRequestItem__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Behavior__EXPECTED_HASH, rmf_task_msgs__msg__Behavior__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__msg__Behavior__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__BehaviorParameter__EXPECTED_HASH, rmf_task_msgs__msg__BehaviorParameter__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__BehaviorParameter__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# task_id is intended to be a pseudo-random string generated\n"
  "# by the caller which can be used to identify this task as it\n"
  "# moves between the queues to completion (or failure).\n"
  "string task_id\n"
  "\n"
  "rmf_dispenser_msgs/DispenserRequestItem[] items\n"
  "\n"
  "string pickup_place_name\n"
  "string pickup_dispenser\n"
  "Behavior pickup_behavior\n"
  "\n"
  "string dropoff_place_name\n"
  "string dropoff_ingestor\n"
  "Behavior dropoff_behavior";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__msg__Delivery__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__msg__Delivery__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 394, 394},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__msg__Delivery__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__msg__Delivery__get_individual_type_description_source(NULL),
    sources[1] = *rmf_dispenser_msgs__msg__DispenserRequestItem__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__msg__Behavior__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__BehaviorParameter__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
