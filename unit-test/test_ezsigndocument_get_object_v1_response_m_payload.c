#ifndef ezsigndocument_get_object_v1_response_m_payload_TEST
#define ezsigndocument_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_get_object_v1_response_m_payload.h"
ezsigndocument_get_object_v1_response_m_payload_t* instantiate_ezsigndocument_get_object_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"


ezsigndocument_get_object_v1_response_m_payload_t* instantiate_ezsigndocument_get_object_v1_response_m_payload(int include_optional) {
  ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsigndocument_get_object_v1_response_m_payload = ezsigndocument_get_object_v1_response_m_payload_create(
      33,
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "012345678901234567890123456789AB",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsigndocument_get_object_v1_response_m_payload = ezsigndocument_get_object_v1_response_m_payload_create(
      33,
      "2020-12-31 23:59:59",
      2,
      "Contract #123",
      97,
      ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      "2020-12-31 23:59:59",
      1,
      4,
      3,
      4,
      "012345678901234567890123456789AB",
      "012345678901234567890123456789AB",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return ezsigndocument_get_object_v1_response_m_payload;
}


#ifdef ezsigndocument_get_object_v1_response_m_payload_MAIN

void test_ezsigndocument_get_object_v1_response_m_payload(int include_optional) {
    ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload_1 = instantiate_ezsigndocument_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsigndocument_get_object_v1_response_m_payload_1 = ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_1);
	printf("ezsigndocument_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsigndocument_get_object_v1_response_m_payload_1));
	ezsigndocument_get_object_v1_response_m_payload_t* ezsigndocument_get_object_v1_response_m_payload_2 = ezsigndocument_get_object_v1_response_m_payload_parseFromJSON(jsonezsigndocument_get_object_v1_response_m_payload_1);
	cJSON* jsonezsigndocument_get_object_v1_response_m_payload_2 = ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_2);
	printf("repeating ezsigndocument_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsigndocument_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsigndocument_get_object_v1_response_m_payload(1);
  test_ezsigndocument_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_get_object_v1_response_m_payload_MAIN
#endif // ezsigndocument_get_object_v1_response_m_payload_TEST
