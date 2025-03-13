// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_scheduler_msgs:srv/CreateTrigger.idl
// generated code does not contain a copyright notice

#include "rmf_scheduler_msgs/srv/detail/create_trigger__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateTrigger__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x30, 0xb7, 0xee, 0x13, 0xbc, 0x12, 0x4e,
      0x58, 0x18, 0x19, 0x9a, 0x7b, 0xdc, 0xd4, 0x7d,
      0x73, 0xf7, 0x96, 0x25, 0x0d, 0x93, 0x51, 0xae,
      0x4c, 0x30, 0xf8, 0xb8, 0x55, 0xa4, 0xd4, 0x1a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateTrigger_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x26, 0x77, 0x70, 0x10, 0xa5, 0xa7, 0xed,
      0x25, 0x1c, 0x40, 0xc9, 0xad, 0x82, 0x3c, 0x68,
      0x5d, 0x4e, 0x74, 0x5d, 0x99, 0xbe, 0x48, 0xc0,
      0x69, 0x69, 0x4d, 0x5b, 0x78, 0xc5, 0x13, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateTrigger_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0xb7, 0xb2, 0x52, 0xb2, 0xd4, 0x7c, 0x61,
      0x9e, 0x0e, 0xba, 0xe0, 0xc4, 0xc2, 0xc5, 0x9a,
      0x59, 0x1a, 0xb2, 0x7c, 0xea, 0x51, 0xcb, 0xc2,
      0xa4, 0xbc, 0x63, 0x71, 0x74, 0x56, 0x1a, 0xc0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
const rosidl_type_hash_t *
rmf_scheduler_msgs__srv__CreateTrigger_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x7f, 0xe9, 0xed, 0x46, 0x1b, 0x5b, 0x59,
      0x92, 0xfa, 0xda, 0x39, 0x79, 0xcf, 0x62, 0xa7,
      0x97, 0x70, 0x17, 0xbb, 0x01, 0xfe, 0xf5, 0xab,
      0x1b, 0x2c, 0xcd, 0x49, 0x6f, 0x4e, 0xfe, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "rmf_scheduler_msgs/msg/detail/trigger__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
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
static const rosidl_type_hash_t rmf_scheduler_msgs__msg__Trigger__EXPECTED_HASH = {1, {
    0xe9, 0xa9, 0xdc, 0xef, 0x7c, 0xf1, 0x62, 0xe3,
    0xad, 0x5b, 0xce, 0x02, 0xc2, 0x1f, 0x3c, 0x27,
    0x0f, 0x13, 0x9e, 0x9e, 0xae, 0x76, 0x74, 0x35,
    0x9f, 0xd4, 0xe6, 0x49, 0x43, 0x41, 0xec, 0xd8,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_scheduler_msgs__srv__CreateTrigger__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateTrigger";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_scheduler_msgs__msg__Payload__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Payload";
static char rmf_scheduler_msgs__msg__Trigger__TYPE_NAME[] = "rmf_scheduler_msgs/msg/Trigger";
static char rmf_scheduler_msgs__srv__CreateTrigger_Event__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateTrigger_Event";
static char rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateTrigger_Request";
static char rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME[] = "rmf_scheduler_msgs/srv/CreateTrigger_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__request_message[] = "request_message";
static char rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__response_message[] = "response_message";
static char rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateTrigger__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__srv__CreateTrigger_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateTrigger__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateTrigger__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateTrigger__TYPE_NAME, 36, 36},
      {rmf_scheduler_msgs__srv__CreateTrigger__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CreateTrigger__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Trigger__EXPECTED_HASH, rmf_scheduler_msgs__msg__Trigger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__msg__Trigger__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CreateTrigger_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_scheduler_msgs__srv__CreateTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rmf_scheduler_msgs__srv__CreateTrigger_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateTrigger_Request__FIELD_NAME__trigger[] = "trigger";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateTrigger_Request__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Request__FIELD_NAME__trigger, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateTrigger_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateTrigger_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
      {rmf_scheduler_msgs__srv__CreateTrigger_Request__FIELDS, 1, 1},
    },
    {rmf_scheduler_msgs__srv__CreateTrigger_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Trigger__EXPECTED_HASH, rmf_scheduler_msgs__msg__Trigger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Trigger__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELD_NAME__success[] = "success";
static char rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELD_NAME__message, 7, 7},
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
rmf_scheduler_msgs__srv__CreateTrigger_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
      {rmf_scheduler_msgs__srv__CreateTrigger_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__info[] = "info";
static char rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__request[] = "request";
static char rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELDS[] = {
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_scheduler_msgs__srv__CreateTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Payload__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__msg__Trigger__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_scheduler_msgs__srv__CreateTrigger_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_scheduler_msgs__srv__CreateTrigger_Event__TYPE_NAME, 42, 42},
      {rmf_scheduler_msgs__srv__CreateTrigger_Event__FIELDS, 3, 3},
    },
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Payload__EXPECTED_HASH, rmf_scheduler_msgs__msg__Payload__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_scheduler_msgs__msg__Payload__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_scheduler_msgs__msg__Trigger__EXPECTED_HASH, rmf_scheduler_msgs__msg__Trigger__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_scheduler_msgs__msg__Trigger__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rmf_scheduler_msgs__srv__CreateTrigger_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_scheduler_msgs__srv__CreateTrigger_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Registers a new trigger to be performed at a specific time. Existing trigger with the same\n"
  "# name will be replaced.\n"
  "\n"
  "# The following fields are ignored:\n"
  "#   - created_at\n"
  "Trigger trigger\n"
  "\n"
  "---\n"
  "\n"
  "# Confirmation that the trigger is successfully registered\n"
  "bool success\n"
  "\n"
  "# If success is false, this provides a reason for the failure.\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateTrigger__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateTrigger__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 345, 345},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateTrigger_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateTrigger_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateTrigger_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateTrigger_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_scheduler_msgs__srv__CreateTrigger_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_scheduler_msgs__srv__CreateTrigger_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateTrigger__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateTrigger__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__msg__Trigger__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CreateTrigger_Event__get_individual_type_description_source(NULL);
    sources[5] = *rmf_scheduler_msgs__srv__CreateTrigger_Request__get_individual_type_description_source(NULL);
    sources[6] = *rmf_scheduler_msgs__srv__CreateTrigger_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateTrigger_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateTrigger_Request__get_individual_type_description_source(NULL),
    sources[1] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Trigger__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateTrigger_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateTrigger_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_scheduler_msgs__srv__CreateTrigger_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_scheduler_msgs__srv__CreateTrigger_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_scheduler_msgs__msg__Payload__get_individual_type_description_source(NULL);
    sources[3] = *rmf_scheduler_msgs__msg__Trigger__get_individual_type_description_source(NULL);
    sources[4] = *rmf_scheduler_msgs__srv__CreateTrigger_Request__get_individual_type_description_source(NULL);
    sources[5] = *rmf_scheduler_msgs__srv__CreateTrigger_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
