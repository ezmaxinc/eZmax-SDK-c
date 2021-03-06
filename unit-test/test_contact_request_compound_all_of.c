#ifndef contact_request_compound_all_of_TEST
#define contact_request_compound_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define contact_request_compound_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/contact_request_compound_all_of.h"
contact_request_compound_all_of_t* instantiate_contact_request_compound_all_of(int include_optional);

#include "test_contactinformations_request_compound.c"


contact_request_compound_all_of_t* instantiate_contact_request_compound_all_of(int include_optional) {
  contact_request_compound_all_of_t* contact_request_compound_all_of = NULL;
  if (include_optional) {
    contact_request_compound_all_of = contact_request_compound_all_of_create(
       // false, not to have infinite recursion
      instantiate_contactinformations_request_compound(0)
    );
  } else {
    contact_request_compound_all_of = contact_request_compound_all_of_create(
      NULL
    );
  }

  return contact_request_compound_all_of;
}


#ifdef contact_request_compound_all_of_MAIN

void test_contact_request_compound_all_of(int include_optional) {
    contact_request_compound_all_of_t* contact_request_compound_all_of_1 = instantiate_contact_request_compound_all_of(include_optional);

	cJSON* jsoncontact_request_compound_all_of_1 = contact_request_compound_all_of_convertToJSON(contact_request_compound_all_of_1);
	printf("contact_request_compound_all_of :\n%s\n", cJSON_Print(jsoncontact_request_compound_all_of_1));
	contact_request_compound_all_of_t* contact_request_compound_all_of_2 = contact_request_compound_all_of_parseFromJSON(jsoncontact_request_compound_all_of_1);
	cJSON* jsoncontact_request_compound_all_of_2 = contact_request_compound_all_of_convertToJSON(contact_request_compound_all_of_2);
	printf("repeating contact_request_compound_all_of:\n%s\n", cJSON_Print(jsoncontact_request_compound_all_of_2));
}

int main() {
  test_contact_request_compound_all_of(1);
  test_contact_request_compound_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // contact_request_compound_all_of_MAIN
#endif // contact_request_compound_all_of_TEST
