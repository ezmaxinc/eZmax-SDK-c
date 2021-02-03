#ifndef franchisereferalincome_create_object_v1_response_TEST
#define franchisereferalincome_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisereferalincome_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisereferalincome_create_object_v1_response.h"
franchisereferalincome_create_object_v1_response_t* instantiate_franchisereferalincome_create_object_v1_response(int include_optional);

#include "test_franchisereferalincome_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


franchisereferalincome_create_object_v1_response_t* instantiate_franchisereferalincome_create_object_v1_response(int include_optional) {
  franchisereferalincome_create_object_v1_response_t* franchisereferalincome_create_object_v1_response = NULL;
  if (include_optional) {
    franchisereferalincome_create_object_v1_response = franchisereferalincome_create_object_v1_response_create(
      {"a_pkiFranchisereferalincomeID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    franchisereferalincome_create_object_v1_response = franchisereferalincome_create_object_v1_response_create(
      {"a_pkiFranchisereferalincomeID":[95,96]},
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return franchisereferalincome_create_object_v1_response;
}


#ifdef franchisereferalincome_create_object_v1_response_MAIN

void test_franchisereferalincome_create_object_v1_response(int include_optional) {
    franchisereferalincome_create_object_v1_response_t* franchisereferalincome_create_object_v1_response_1 = instantiate_franchisereferalincome_create_object_v1_response(include_optional);

	cJSON* jsonfranchisereferalincome_create_object_v1_response_1 = franchisereferalincome_create_object_v1_response_convertToJSON(franchisereferalincome_create_object_v1_response_1);
	printf("franchisereferalincome_create_object_v1_response :\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v1_response_1));
	franchisereferalincome_create_object_v1_response_t* franchisereferalincome_create_object_v1_response_2 = franchisereferalincome_create_object_v1_response_parseFromJSON(jsonfranchisereferalincome_create_object_v1_response_1);
	cJSON* jsonfranchisereferalincome_create_object_v1_response_2 = franchisereferalincome_create_object_v1_response_convertToJSON(franchisereferalincome_create_object_v1_response_2);
	printf("repeating franchisereferalincome_create_object_v1_response:\n%s\n", cJSON_Print(jsonfranchisereferalincome_create_object_v1_response_2));
}

int main() {
  test_franchisereferalincome_create_object_v1_response(1);
  test_franchisereferalincome_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisereferalincome_create_object_v1_response_MAIN
#endif // franchisereferalincome_create_object_v1_response_TEST
