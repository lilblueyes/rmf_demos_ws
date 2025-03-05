// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_reservation_msgs:msg/ReservationAllocation.idl
// generated code does not contain a copyright notice

#include "rmf_reservation_msgs/msg/detail/reservation_allocation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_reservation_msgs
const rosidl_type_hash_t *
rmf_reservation_msgs__msg__ReservationAllocation__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x3e, 0x74, 0xd5, 0xe4, 0x40, 0xa4, 0xcc,
      0x16, 0x55, 0x16, 0xf1, 0x8e, 0xe1, 0xa6, 0xae,
      0xa8, 0x1b, 0x60, 0x74, 0x69, 0x1e, 0xd3, 0x19,
      0x69, 0x28, 0xf2, 0x98, 0x4a, 0xee, 0xb4, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_reservation_msgs/msg/detail/request_header__functions.h"
#include "rmf_reservation_msgs/msg/detail/ticket__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH = {1, {
    0x79, 0x00, 0x02, 0xab, 0x8d, 0x8d, 0x83, 0x3f,
    0xb0, 0xff, 0xe4, 0xca, 0x9a, 0x5f, 0x8d, 0x69,
    0x74, 0x9e, 0x54, 0x36, 0x13, 0x86, 0x87, 0xce,
    0xf0, 0xd2, 0x6e, 0x8b, 0xec, 0x3a, 0xad, 0x16,
  }};
static const rosidl_type_hash_t rmf_reservation_msgs__msg__Ticket__EXPECTED_HASH = {1, {
    0xf4, 0x37, 0x06, 0x6a, 0xb4, 0x40, 0x2f, 0x42,
    0x9b, 0x4b, 0x4e, 0x86, 0xba, 0xb4, 0x08, 0x1d,
    0x43, 0xc8, 0x9b, 0xb8, 0x26, 0x07, 0x28, 0x68,
    0xad, 0x29, 0xe1, 0xc7, 0x90, 0xef, 0xf7, 0xba,
  }};
#endif

static char rmf_reservation_msgs__msg__ReservationAllocation__TYPE_NAME[] = "rmf_reservation_msgs/msg/ReservationAllocation";
static char rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME[] = "rmf_reservation_msgs/msg/RequestHeader";
static char rmf_reservation_msgs__msg__Ticket__TYPE_NAME[] = "rmf_reservation_msgs/msg/Ticket";

// Define type names, field names, and default values
static char rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__ticket[] = "ticket";
static char rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__instruction_type[] = "instruction_type";
static char rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__chosen_alternative[] = "chosen_alternative";
static char rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__resource[] = "resource";

static rosidl_runtime_c__type_description__Field rmf_reservation_msgs__msg__ReservationAllocation__FIELDS[] = {
  {
    {rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__ticket, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_reservation_msgs__msg__Ticket__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__instruction_type, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__chosen_alternative, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__ReservationAllocation__FIELD_NAME__resource, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_reservation_msgs__msg__ReservationAllocation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_reservation_msgs__msg__RequestHeader__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rmf_reservation_msgs__msg__Ticket__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_reservation_msgs__msg__ReservationAllocation__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_reservation_msgs__msg__ReservationAllocation__TYPE_NAME, 46, 46},
      {rmf_reservation_msgs__msg__ReservationAllocation__FIELDS, 4, 4},
    },
    {rmf_reservation_msgs__msg__ReservationAllocation__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_reservation_msgs__msg__RequestHeader__EXPECTED_HASH, rmf_reservation_msgs__msg__RequestHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_reservation_msgs__msg__RequestHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_reservation_msgs__msg__Ticket__EXPECTED_HASH, rmf_reservation_msgs__msg__Ticket__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_reservation_msgs__msg__Ticket__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 IMMEDIATELY_PROCEED=0\n"
  "uint8 WAIT_IDENTIFIED=1\n"
  "\n"
  "rmf_reservation_msgs/Ticket ticket\n"
  "\n"
  "uint8 instruction_type\n"
  "uint64 chosen_alternative\n"
  "string resource\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_reservation_msgs__msg__ReservationAllocation__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_reservation_msgs__msg__ReservationAllocation__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_reservation_msgs__msg__ReservationAllocation__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_reservation_msgs__msg__ReservationAllocation__get_individual_type_description_source(NULL),
    sources[1] = *rmf_reservation_msgs__msg__RequestHeader__get_individual_type_description_source(NULL);
    sources[2] = *rmf_reservation_msgs__msg__Ticket__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
