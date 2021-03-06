#ifndef ezsignfolder_get_object_v1_response_m_payload_TEST
#define ezsignfolder_get_object_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignfolder_get_object_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignfolder_get_object_v1_response_m_payload.h"
ezsignfolder_get_object_v1_response_m_payload_t* instantiate_ezsignfolder_get_object_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"


ezsignfolder_get_object_v1_response_m_payload_t* instantiate_ezsignfolder_get_object_v1_response_m_payload(int include_optional) {
  ezsignfolder_get_object_v1_response_m_payload_t* ezsignfolder_get_object_v1_response_m_payload = NULL;
  if (include_optional) {
    ezsignfolder_get_object_v1_response_m_payload = ezsignfolder_get_object_v1_response_m_payload_create(
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__"None",
      33,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsignfolder_get_object_v1_response_m_payload = ezsignfolder_get_object_v1_response_m_payload_create(
      5,
      92,
      "Test eZsign Folder",
      "An extra notes we can add to the ezsign folder",
      ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__"None",
      33,
      "2020-12-31 23:59:59",
      ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__"Completed",
      "2020-12-31 23:59:59",
      {"fkiUserIDCreated":35,"fkiUserIDModified":35,"fkiApikeyIDCreated":1,"fkiApikeyIDModified":1,"dtCreatedDate":"2020-12-31 23:59:59","dtModifiedDate":"2020-12-31 23:59:59"}
    );
  }

  return ezsignfolder_get_object_v1_response_m_payload;
}


#ifdef ezsignfolder_get_object_v1_response_m_payload_MAIN

void test_ezsignfolder_get_object_v1_response_m_payload(int include_optional) {
    ezsignfolder_get_object_v1_response_m_payload_t* ezsignfolder_get_object_v1_response_m_payload_1 = instantiate_ezsignfolder_get_object_v1_response_m_payload(include_optional);

	cJSON* jsonezsignfolder_get_object_v1_response_m_payload_1 = ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_1);
	printf("ezsignfolder_get_object_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezsignfolder_get_object_v1_response_m_payload_1));
	ezsignfolder_get_object_v1_response_m_payload_t* ezsignfolder_get_object_v1_response_m_payload_2 = ezsignfolder_get_object_v1_response_m_payload_parseFromJSON(jsonezsignfolder_get_object_v1_response_m_payload_1);
	cJSON* jsonezsignfolder_get_object_v1_response_m_payload_2 = ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_2);
	printf("repeating ezsignfolder_get_object_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezsignfolder_get_object_v1_response_m_payload_2));
}

int main() {
  test_ezsignfolder_get_object_v1_response_m_payload(1);
  test_ezsignfolder_get_object_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignfolder_get_object_v1_response_m_payload_MAIN
#endif // ezsignfolder_get_object_v1_response_m_payload_TEST
