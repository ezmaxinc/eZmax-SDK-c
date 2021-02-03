#ifndef ezsigndocument_edit_object_v1_request_TEST
#define ezsigndocument_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigndocument_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigndocument_edit_object_v1_request.h"
ezsigndocument_edit_object_v1_request_t* instantiate_ezsigndocument_edit_object_v1_request(int include_optional);

#include "test_ezsigndocument_request.c"


ezsigndocument_edit_object_v1_request_t* instantiate_ezsigndocument_edit_object_v1_request(int include_optional) {
  ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request = NULL;
  if (include_optional) {
    ezsigndocument_edit_object_v1_request = ezsigndocument_edit_object_v1_request_create(
      {"sEzsigndocumentName":"Important contract","sEzsigndocumentFilename":"Important Contract.pdf","fkiLanguageID":2,"eEzsigndocumentSource":"Base64","eEzsigndocumentFormat":"Pdf","sEzsigndocumentBase64":"JVBERi0xLjENCiXCpcKxw6sNCg0KMSAwIG9iag0KICA8PCAvVHlwZSAvQ2F0YWxvZw0KICAgICAvUGFnZXMgMiAwIFINCiAgPj4NCmVuZG9iag0KDQoyIDAgb2JqDQogIDw8IC9UeXBlIC9QYWdlcw0KICAgICAvS2lkcyBbMyAwIFJdDQogICAgIC9Db3VudCAxDQogICAgIC9NZWRpYUJveCBbMCAwIDMwMCAxNDRdDQogID4+DQplbmRvYmoNCg0KMyAwIG9iag0KICA8PCAgL1R5cGUgL1BhZ2UNCiAgICAgIC9QYXJlbnQgMiAwIFINCiAgICAgIC9SZXNvdXJjZXMNCiAgICAgICA8PCAvRm9udA0KICAgICAgICAgICA8PCAvRjENCiAgICAgICAgICAgICAgIDw8IC9UeXBlIC9Gb250DQogICAgICAgICAgICAgICAgICAvU3VidHlwZSAvVHlwZTENCiAgICAgICAgICAgICAgICAgIC9CYXNlRm9udCAvVGltZXMtUm9tYW4NCiAgICAgICAgICAgICAgID4+DQogICAgICAgICAgID4+DQogICAgICAgPj4NCiAgICAgIC9Db250ZW50cyA0IDAgUg0KICA+Pg0KZW5kb2JqDQoNCjQgMCBvYmoNCiAgPDwgL0xlbmd0aCA1NSA+Pg0Kc3RyZWFtDQogIEJUDQogICAgL0YxIDE4IFRmDQogICAgMCAwIFRkDQogICAgKEhlbGxvIFdvcmxkKSBUag0KICBFVA0KZW5kc3RyZWFtDQplbmRvYmoNCg0KeHJlZg0KMCA1DQowMDAwMDAwMDAwIDY1NTM1IGYgDQowMDAwMDAwMDE4IDAwMDAwIG4gDQowMDAwMDAwMDc3IDAwMDAwIG4gDQowMDAwMDAwMTc4IDAwMDAwIG4gDQowMDAwMDAwNDU3IDAwMDAwIG4gDQp0cmFpbGVyDQogIDw8ICAvUm9vdCAxIDAgUg0KICAgICAgL1NpemUgNQ0KICA+Pg0Kc3RhcnR4cmVmDQo1NjUNCiUlRU9G","fkiEzsignfolderID":1,"dtEzsigndocumentDuedate":"2020-12-31 23:59:59"}
    );
  } else {
    ezsigndocument_edit_object_v1_request = ezsigndocument_edit_object_v1_request_create(
      {"sEzsigndocumentName":"Important contract","sEzsigndocumentFilename":"Important Contract.pdf","fkiLanguageID":2,"eEzsigndocumentSource":"Base64","eEzsigndocumentFormat":"Pdf","sEzsigndocumentBase64":"JVBERi0xLjENCiXCpcKxw6sNCg0KMSAwIG9iag0KICA8PCAvVHlwZSAvQ2F0YWxvZw0KICAgICAvUGFnZXMgMiAwIFINCiAgPj4NCmVuZG9iag0KDQoyIDAgb2JqDQogIDw8IC9UeXBlIC9QYWdlcw0KICAgICAvS2lkcyBbMyAwIFJdDQogICAgIC9Db3VudCAxDQogICAgIC9NZWRpYUJveCBbMCAwIDMwMCAxNDRdDQogID4+DQplbmRvYmoNCg0KMyAwIG9iag0KICA8PCAgL1R5cGUgL1BhZ2UNCiAgICAgIC9QYXJlbnQgMiAwIFINCiAgICAgIC9SZXNvdXJjZXMNCiAgICAgICA8PCAvRm9udA0KICAgICAgICAgICA8PCAvRjENCiAgICAgICAgICAgICAgIDw8IC9UeXBlIC9Gb250DQogICAgICAgICAgICAgICAgICAvU3VidHlwZSAvVHlwZTENCiAgICAgICAgICAgICAgICAgIC9CYXNlRm9udCAvVGltZXMtUm9tYW4NCiAgICAgICAgICAgICAgID4+DQogICAgICAgICAgID4+DQogICAgICAgPj4NCiAgICAgIC9Db250ZW50cyA0IDAgUg0KICA+Pg0KZW5kb2JqDQoNCjQgMCBvYmoNCiAgPDwgL0xlbmd0aCA1NSA+Pg0Kc3RyZWFtDQogIEJUDQogICAgL0YxIDE4IFRmDQogICAgMCAwIFRkDQogICAgKEhlbGxvIFdvcmxkKSBUag0KICBFVA0KZW5kc3RyZWFtDQplbmRvYmoNCg0KeHJlZg0KMCA1DQowMDAwMDAwMDAwIDY1NTM1IGYgDQowMDAwMDAwMDE4IDAwMDAwIG4gDQowMDAwMDAwMDc3IDAwMDAwIG4gDQowMDAwMDAwMTc4IDAwMDAwIG4gDQowMDAwMDAwNDU3IDAwMDAwIG4gDQp0cmFpbGVyDQogIDw8ICAvUm9vdCAxIDAgUg0KICAgICAgL1NpemUgNQ0KICA+Pg0Kc3RhcnR4cmVmDQo1NjUNCiUlRU9G","fkiEzsignfolderID":1,"dtEzsigndocumentDuedate":"2020-12-31 23:59:59"}
    );
  }

  return ezsigndocument_edit_object_v1_request;
}


#ifdef ezsigndocument_edit_object_v1_request_MAIN

void test_ezsigndocument_edit_object_v1_request(int include_optional) {
    ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request_1 = instantiate_ezsigndocument_edit_object_v1_request(include_optional);

	cJSON* jsonezsigndocument_edit_object_v1_request_1 = ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_1);
	printf("ezsigndocument_edit_object_v1_request :\n%s\n", cJSON_Print(jsonezsigndocument_edit_object_v1_request_1));
	ezsigndocument_edit_object_v1_request_t* ezsigndocument_edit_object_v1_request_2 = ezsigndocument_edit_object_v1_request_parseFromJSON(jsonezsigndocument_edit_object_v1_request_1);
	cJSON* jsonezsigndocument_edit_object_v1_request_2 = ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_2);
	printf("repeating ezsigndocument_edit_object_v1_request:\n%s\n", cJSON_Print(jsonezsigndocument_edit_object_v1_request_2));
}

int main() {
  test_ezsigndocument_edit_object_v1_request(1);
  test_ezsigndocument_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigndocument_edit_object_v1_request_MAIN
#endif // ezsigndocument_edit_object_v1_request_TEST
