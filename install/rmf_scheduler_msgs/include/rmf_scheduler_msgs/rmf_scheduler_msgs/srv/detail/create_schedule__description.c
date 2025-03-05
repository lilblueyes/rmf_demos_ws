// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/CreateSchedule.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/create_schedule__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateSchedule__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x7b, 0xe5, 0x41, 0xd4, 0xad, 0x03, 0x7b,
      0xe4, 0x58, 0x3b, 0x7b, 0xbf, 0x01, 0xf2, 0x8e,
      0x1b, 0xb5, 0x4c, 0x42, 0x9f, 0xaf, 0xf4, 0x69,
      0xc9, 0x26, 0x3b, 0x2d, 0x4d, 0x57, 0x59, 0x1c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateSchedule_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xda, 0xb3, 0xe7, 0xef, 0x6b, 0x7b, 0xfd, 0xeb,
      0xf4, 0x07, 0xab, 0xcf, 0xd5, 0x49, 0xff, 0x2f,
      0x4a, 0x11, 0x4f, 0x8e, 0x57, 0x91, 0xf1, 0x13,
      0x86, 0xef, 0xb3, 0xc3, 0x70, 0x8e, 0x8b, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateSchedule_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x9e, 0x84, 0x1a, 0xc5, 0x79, 0xa0, 0x28,
      0xdb, 0x94, 0x39, 0x80, 0xa7, 0x49, 0xec, 0x36,
      0xb8, 0xbf, 0x2e, 0x6e, 0xbd, 0x4d, 0x99, 0x4b,
      0x83, 0x08, 0x61, 0x22, 0x49, 0x5f, 0xcf, 0xeb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateSchedule_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x06, 0x6a, 0xda, 0x26, 0x69, 0x77, 0x0a,
      0x1a, 0x4d, 0xe2, 0x72, 0xa5, 0x0b, 0xb5, 0x88,
      0x6b, 0x3c, 0x0c, 0x64, 0x6e, 0xe8, 0x8b, 0xa5,
      0x00, 0xf5, 0x22, 0x43, 0x13, 0x4e, 0x8e, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_scheduler_msgs/msg/detail/schedule__functions.h"
#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH = {1, {
    0xc9, 0x73, 0x95, 0x52, 0xb9, 0x9a, 0xc5, 0xdc,
    0x0c, 0x69, 0xfb, 0x91, 0x96, 0xe9, 0xf8, 0xc0,
    0x27, 0x3a, 0x50, 0xb4, 0xdb, 0x65, 0x63, 0xf0,
    0xb4, 0x37, 0x47, 0xd1, 0x05, 0x6d, 0xc3, 0xd7,
  }};
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__Schedule__EXPECTED_HASH = {1, {
    0x65, 0x6b, 0xb7, 0x23, 0x4e, 0x31, 0xde, 0xd0,
    0xb5, 0xcb, 0x60, 0xf9, 0x8e, 0xd1, 0xc0, 0x86,
    0x9b, 0x1a, 0xe7, 0x6f, 0xaf, 0xf3, 0xe4, 0x68,
    0x6f, 0x08, 0xc9, 0x78, 0x8e, 0x47, 0xb1, 0x5d,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_scheduler_msgs__srv__CreateSchedule__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateSchedule";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__msg__Payload__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Payload";
static char rmf_scheduler_msgs__msg__Schedule__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Schedule";
static char rmf_scheduler_msgs__srv__CreateSchedule_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateSchedule_Event";
static char rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateSchedule_Request";
static char rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateSchedule_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateSchedule__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateSchedule_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateSchedule__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateSchedule__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateSchedule__TYPE_NAME, 37, 37},
      {rmf_scheduler_msgs__srv__CreateSchedule__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CreateSchedule__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Schedule__EXPECTED_HASH, rmf_scheduler_msgs__msg__Schedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__msg__Schedule__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CreateSchedule_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_scheduler_msgs__srv__CreateSchedule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rmf_scheduler_msgs__srv__CreateSchedule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateSchedule_Request__FIELD_NAME__schedule[] = "schedule";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateSchedule_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Request__FIELD_NAME__schedule, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateSchedule_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateSchedule_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
      {rmf_scheduler_msgs__srv__CreateSchedule_Request__FIELDS, 1, 1},
    },
    {rmf_scheduler_msgs__srv__CreateSchedule_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Schedule__EXPECTED_HASH, rmf_scheduler_msgs__msg__Schedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Schedule__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateSchedule_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
      {rmf_scheduler_msgs__srv__CreateSchedule_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateSchedule_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Schedule__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateSchedule_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateSchedule_Event__TYPE_NAME, 43, 43},
      {rmf_scheduler_msgs__srv__CreateSchedule_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Schedule__EXPECTED_HASH, rmf_scheduler_msgs__msg__Schedule__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__msg__Schedule__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CreateSchedule_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_scheduler_msgs__srv__CreateSchedule_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Registers a new recurring schedule. Existing schedule with the same name will be replaced.\n"
  "\n"
  "# The following fields are ignored:\n"
  "#   - created_at\n"
  "Schedule schedule\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the schedule is successfully registered\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateSchedule__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateSchedule__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 323, 323},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateSchedule_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateSchedule_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateSchedule_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateSchedule_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateSchedule_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateSchedule_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateSchedule__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateSchedule__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__msg__Schedule__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CreateSchedule_Event__get_individual_type_description_source(NULL);
    sources[5] = *rmf_scheduler_msgs__srv__CreateSchedule_Request__get_individual_type_description_source(NULL);
    sources[6] = *rmf_scheduler_msgs__srv__CreateSchedule_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateSchedule_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateSchedule_Request__get_individual_type_description_source(NULL),
    sources[1] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Schedule__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateSchedule_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateSchedule_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateSchedule_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateSchedule_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__msg__Schedule__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CreateSchedule_Request__get_individual_type_description_source(NULL);
    sources[5] = *rmf_scheduler_msgs__srv__CreateSchedule_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
