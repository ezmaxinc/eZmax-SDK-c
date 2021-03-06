#ifndef unused_ezsignfolder_edit_object_v1_request_TEST
#define unused_ezsignfolder_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define unused_ezsignfolder_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/unused_ezsignfolder_edit_object_v1_request.h"
unused_ezsignfolder_edit_object_v1_request_t* instantiate_unused_ezsignfolder_edit_object_v1_request(int include_optional);

#include "test_ezsignfolder_request.c"


unused_ezsignfolder_edit_object_v1_request_t* instantiate_unused_ezsignfolder_edit_object_v1_request(int include_optional) {
  unused_ezsignfolder_edit_object_v1_request_t* unused_ezsignfolder_edit_object_v1_request = NULL;
  if (include_optional) {
    unused_ezsignfolder_edit_object_v1_request = unused_ezsignfolder_edit_object_v1_request_create(
      {"fkiEzsignfoldertypeID":1,"sEzsignfolderDescription":"Test eZsign Folder","tEzsignfolderNote":"An extra notes we can add to the ezsign folder","fkiEzsigntsarequirementID":1,"eEzsignfolderSendreminderfrequency":"Daily"}
    );
  } else {
    unused_ezsignfolder_edit_object_v1_request = unused_ezsignfolder_edit_object_v1_request_create(
      {"fkiEzsignfoldertypeID":1,"sEzsignfolderDescription":"Test eZsign Folder","tEzsignfolderNote":"An extra notes we can add to the ezsign folder","fkiEzsigntsarequirementID":1,"eEzsignfolderSendreminderfrequency":"Daily"}
    );
  }

  return unused_ezsignfolder_edit_object_v1_request;
}


#ifdef unused_ezsignfolder_edit_object_v1_request_MAIN

void test_unused_ezsignfolder_edit_object_v1_request(int include_optional) {
    unused_ezsignfolder_edit_object_v1_request_t* unused_ezsignfolder_edit_object_v1_request_1 = instantiate_unused_ezsignfolder_edit_object_v1_request(include_optional);

	cJSON* jsonunused_ezsignfolder_edit_object_v1_request_1 = unused_ezsignfolder_edit_object_v1_request_convertToJSON(unused_ezsignfolder_edit_object_v1_request_1);
	printf("unused_ezsignfolder_edit_object_v1_request :\n%s\n", cJSON_Print(jsonunused_ezsignfolder_edit_object_v1_request_1));
	unused_ezsignfolder_edit_object_v1_request_t* unused_ezsignfolder_edit_object_v1_request_2 = unused_ezsignfolder_edit_object_v1_request_parseFromJSON(jsonunused_ezsignfolder_edit_object_v1_request_1);
	cJSON* jsonunused_ezsignfolder_edit_object_v1_request_2 = unused_ezsignfolder_edit_object_v1_request_convertToJSON(unused_ezsignfolder_edit_object_v1_request_2);
	printf("repeating unused_ezsignfolder_edit_object_v1_request:\n%s\n", cJSON_Print(jsonunused_ezsignfolder_edit_object_v1_request_2));
}

int main() {
  test_unused_ezsignfolder_edit_object_v1_request(1);
  test_unused_ezsignfolder_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // unused_ezsignfolder_edit_object_v1_request_MAIN
#endif // unused_ezsignfolder_edit_object_v1_request_TEST
