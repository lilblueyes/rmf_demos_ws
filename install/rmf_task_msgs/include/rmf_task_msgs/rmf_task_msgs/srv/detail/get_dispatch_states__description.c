// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice

#include "rmf_task_msgs/srv/detail/get_dispatch_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__GetDispatchStates__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x07, 0x98, 0x41, 0x79, 0x2d, 0xf1, 0xeb,
      0x02, 0x5b, 0x46, 0x19, 0x64, 0x56, 0x92, 0x88,
      0xfb, 0x50, 0x89, 0x44, 0xec, 0x5d, 0x93, 0x6b,
      0x88, 0x00, 0x8d, 0x3b, 0x62, 0xaa, 0x4b, 0x6f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__GetDispatchStates_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x62, 0x70, 0xec, 0x21, 0xa0, 0x1a, 0x36,
      0x5d, 0xa3, 0x9b, 0x87, 0xf1, 0xd7, 0xf6, 0x4f,
      0x05, 0x17, 0x53, 0x1c, 0xb4, 0xe7, 0x8d, 0x06,
      0xea, 0x64, 0xec, 0x6d, 0x8d, 0x9a, 0x8f, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__GetDispatchStates_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x49, 0x04, 0x2a, 0xad, 0xe4, 0xe6, 0x1f,
      0x69, 0xe1, 0x40, 0x18, 0x57, 0xe5, 0x9c, 0x3d,
      0x07, 0x16, 0x34, 0xd5, 0xd0, 0x9f, 0x47, 0x3b,
      0xe7, 0x77, 0x53, 0x6a, 0xc5, 0x70, 0x52, 0x9f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rmf_task_msgs
const rosidl_type_hash_t *
rmf_task_msgs__srv__GetDispatchStates_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x90, 0x01, 0x17, 0xf7, 0x2d, 0xc2, 0xdb,
      0x69, 0xb7, 0x4d, 0x6d, 0xff, 0x61, 0x3e, 0xbe,
      0xab, 0x5a, 0x80, 0xfc, 0x81, 0xdc, 0xb2, 0xf5,
      0xd5, 0xcd, 0x8f, 0x30, 0xb1, 0xe4, 0x68, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rmf_task_msgs/msg/detail/dispatch_state__functions.h"
#include "rmf_task_msgs/msg/detail/assignment__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "rmf_task_msgs/msg/detail/dispatch_states__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__Assignment__EXPECTED_HASH = {1, {
    0x71, 0xa6, 0x68, 0xba, 0xcb, 0xa7, 0x93, 0xe6,
    0x02, 0xe5, 0xc4, 0x62, 0x87, 0x48, 0x7d, 0xce,
    0x84, 0x06, 0x23, 0x4f, 0xc2, 0x06, 0x59, 0x04,
    0x47, 0x01, 0xb3, 0xd1, 0x5b, 0x18, 0xc8, 0x4f,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__DispatchState__EXPECTED_HASH = {1, {
    0xcb, 0x3c, 0x56, 0x1b, 0xe7, 0x10, 0x5a, 0x4e,
    0xab, 0x3a, 0x04, 0xd5, 0xa8, 0x61, 0xf6, 0x93,
    0x03, 0x5d, 0xda, 0x43, 0x11, 0x6f, 0x49, 0x23,
    0xfa, 0x44, 0x27, 0xbc, 0xc6, 0x45, 0x45, 0x97,
  }};
static const rosidl_type_hash_t rmf_task_msgs__msg__DispatchStates__EXPECTED_HASH = {1, {
    0x28, 0x87, 0xb7, 0x1d, 0x54, 0xcf, 0x88, 0x38,
    0xc3, 0xca, 0x8e, 0xe4, 0x7e, 0x5e, 0xd8, 0x69,
    0xf2, 0x6a, 0xaa, 0xa3, 0xe2, 0x45, 0x3c, 0x18,
    0x31, 0x19, 0xe3, 0x5a, 0x95, 0x9c, 0x75, 0x19,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rmf_task_msgs__srv__GetDispatchStates__TYPE_NAME[] = "rmf_task_msgs/srv/GetDispatchStates";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rmf_task_msgs__msg__Assignment__TYPE_NAME[] = "rmf_task_msgs/msg/Assignment";
static char rmf_task_msgs__msg__DispatchState__TYPE_NAME[] = "rmf_task_msgs/msg/DispatchState";
static char rmf_task_msgs__msg__DispatchStates__TYPE_NAME[] = "rmf_task_msgs/msg/DispatchStates";
static char rmf_task_msgs__srv__GetDispatchStates_Event__TYPE_NAME[] = "rmf_task_msgs/srv/GetDispatchStates_Event";
static char rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME[] = "rmf_task_msgs/srv/GetDispatchStates_Request";
static char rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME[] = "rmf_task_msgs/srv/GetDispatchStates_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__request_message[] = "request_message";
static char rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__response_message[] = "response_message";
static char rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__GetDispatchStates__FIELDS[] = {
  {
    {rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__srv__GetDispatchStates_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__GetDispatchStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchStates__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__GetDispatchStates__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__GetDispatchStates__TYPE_NAME, 35, 35},
      {rmf_task_msgs__srv__GetDispatchStates__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__GetDispatchStates__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Assignment__EXPECTED_HASH, rmf_task_msgs__msg__Assignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__msg__Assignment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchState__EXPECTED_HASH, rmf_task_msgs__msg__DispatchState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__DispatchState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchStates__EXPECTED_HASH, rmf_task_msgs__msg__DispatchStates__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__DispatchStates__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__srv__GetDispatchStates_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__srv__GetDispatchStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = rmf_task_msgs__srv__GetDispatchStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__GetDispatchStates_Request__FIELD_NAME__task_ids[] = "task_ids";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__GetDispatchStates_Request__FIELDS[] = {
  {
    {rmf_task_msgs__srv__GetDispatchStates_Request__FIELD_NAME__task_ids, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__GetDispatchStates_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
      {rmf_task_msgs__srv__GetDispatchStates_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__GetDispatchStates_Response__FIELD_NAME__success[] = "success";
static char rmf_task_msgs__srv__GetDispatchStates_Response__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__GetDispatchStates_Response__FIELDS[] = {
  {
    {rmf_task_msgs__srv__GetDispatchStates_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Response__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rmf_task_msgs__msg__DispatchStates__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__GetDispatchStates_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchStates__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__GetDispatchStates_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
      {rmf_task_msgs__srv__GetDispatchStates_Response__FIELDS, 2, 2},
    },
    {rmf_task_msgs__srv__GetDispatchStates_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&rmf_task_msgs__msg__Assignment__EXPECTED_HASH, rmf_task_msgs__msg__Assignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rmf_task_msgs__msg__Assignment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchState__EXPECTED_HASH, rmf_task_msgs__msg__DispatchState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__msg__DispatchState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchStates__EXPECTED_HASH, rmf_task_msgs__msg__DispatchStates__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__DispatchStates__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__info[] = "info";
static char rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__request[] = "request";
static char rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rmf_task_msgs__srv__GetDispatchStates_Event__FIELDS[] = {
  {
    {rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rmf_task_msgs__srv__GetDispatchStates_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__Assignment__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchState__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__msg__DispatchStates__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rmf_task_msgs__srv__GetDispatchStates_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rmf_task_msgs__srv__GetDispatchStates_Event__TYPE_NAME, 41, 41},
      {rmf_task_msgs__srv__GetDispatchStates_Event__FIELDS, 3, 3},
    },
    {rmf_task_msgs__srv__GetDispatchStates_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__Assignment__EXPECTED_HASH, rmf_task_msgs__msg__Assignment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rmf_task_msgs__msg__Assignment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchState__EXPECTED_HASH, rmf_task_msgs__msg__DispatchState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = rmf_task_msgs__msg__DispatchState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rmf_task_msgs__msg__DispatchStates__EXPECTED_HASH, rmf_task_msgs__msg__DispatchStates__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = rmf_task_msgs__msg__DispatchStates__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rmf_task_msgs__srv__GetDispatchStates_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = rmf_task_msgs__srv__GetDispatchStates_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Query list of submitted tasks | Get service call\n"
  "\n"
  "# Input the generated task ID during submission\n"
  "# if empty, provide all Submitted Tasks\n"
  "string[] task_ids\n"
  "\n"
  "---\n"
  "\n"
  "bool success\n"
  "\n"
  "DispatchStates states";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__GetDispatchStates__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__GetDispatchStates__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 200, 200},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__GetDispatchStates_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__GetDispatchStates_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__GetDispatchStates_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__GetDispatchStates_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rmf_task_msgs__srv__GetDispatchStates_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rmf_task_msgs__srv__GetDispatchStates_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__GetDispatchStates__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__GetDispatchStates__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__msg__Assignment__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__DispatchState__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__DispatchStates__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__srv__GetDispatchStates_Event__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__srv__GetDispatchStates_Request__get_individual_type_description_source(NULL);
    sources[7] = *rmf_task_msgs__srv__GetDispatchStates_Response__get_individual_type_description_source(NULL);
    sources[8] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__GetDispatchStates_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__GetDispatchStates_Response__get_individual_type_description_source(NULL),
    sources[1] = *rmf_task_msgs__msg__Assignment__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__msg__DispatchState__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__DispatchStates__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rmf_task_msgs__srv__GetDispatchStates_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rmf_task_msgs__srv__GetDispatchStates_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rmf_task_msgs__msg__Assignment__get_individual_type_description_source(NULL);
    sources[3] = *rmf_task_msgs__msg__DispatchState__get_individual_type_description_source(NULL);
    sources[4] = *rmf_task_msgs__msg__DispatchStates__get_individual_type_description_source(NULL);
    sources[5] = *rmf_task_msgs__srv__GetDispatchStates_Request__get_individual_type_description_source(NULL);
    sources[6] = *rmf_task_msgs__srv__GetDispatchStates_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
