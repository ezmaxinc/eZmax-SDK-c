#ifndef common_response_TEST
#define common_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define common_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/common_response.h"
common_response_t* instantiate_common_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


common_response_t* instantiate_common_response(int include_optional) {
  common_response_t* common_response = NULL;
  if (include_optional) {
    common_response = common_response_create(
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    common_response = common_response_create(
      {"iVersionMin":1,"iVersionMax":2,"a_RequiredPermissions":[45,61]},
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return common_response;
}


#ifdef common_response_MAIN

void test_common_response(int include_optional) {
    common_response_t* common_response_1 = instantiate_common_response(include_optional);

	cJSON* jsoncommon_response_1 = common_response_convertToJSON(common_response_1);
	printf("common_response :\n%s\n", cJSON_Print(jsoncommon_response_1));
	common_response_t* common_response_2 = common_response_parseFromJSON(jsoncommon_response_1);
	cJSON* jsoncommon_response_2 = common_response_convertToJSON(common_response_2);
	printf("repeating common_response:\n%s\n", cJSON_Print(jsoncommon_response_2));
}

int main() {
  test_common_response(1);
  test_common_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // common_response_MAIN
#endif // common_response_TEST
