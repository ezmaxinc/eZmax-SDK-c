#ifndef sspr_unlock_account_request_v1_request_TEST
#define sspr_unlock_account_request_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sspr_unlock_account_request_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sspr_unlock_account_request_v1_request.h"
sspr_unlock_account_request_v1_request_t* instantiate_sspr_unlock_account_request_v1_request(int include_optional);



sspr_unlock_account_request_v1_request_t* instantiate_sspr_unlock_account_request_v1_request(int include_optional) {
  sspr_unlock_account_request_v1_request_t* sspr_unlock_account_request_v1_request = NULL;
  if (include_optional) {
    sspr_unlock_account_request_v1_request = sspr_unlock_account_request_v1_request_create(
      "demo",
      2,
      ezmax_api_definition_sspr_unlock_account_request_v1_request__"Native",
      "example@domain.com",
      "JohnDoe"
    );
  } else {
    sspr_unlock_account_request_v1_request = sspr_unlock_account_request_v1_request_create(
      "demo",
      2,
      ezmax_api_definition_sspr_unlock_account_request_v1_request__"Native",
      "example@domain.com",
      "JohnDoe"
    );
  }

  return sspr_unlock_account_request_v1_request;
}


#ifdef sspr_unlock_account_request_v1_request_MAIN

void test_sspr_unlock_account_request_v1_request(int include_optional) {
    sspr_unlock_account_request_v1_request_t* sspr_unlock_account_request_v1_request_1 = instantiate_sspr_unlock_account_request_v1_request(include_optional);

	cJSON* jsonsspr_unlock_account_request_v1_request_1 = sspr_unlock_account_request_v1_request_convertToJSON(sspr_unlock_account_request_v1_request_1);
	printf("sspr_unlock_account_request_v1_request :\n%s\n", cJSON_Print(jsonsspr_unlock_account_request_v1_request_1));
	sspr_unlock_account_request_v1_request_t* sspr_unlock_account_request_v1_request_2 = sspr_unlock_account_request_v1_request_parseFromJSON(jsonsspr_unlock_account_request_v1_request_1);
	cJSON* jsonsspr_unlock_account_request_v1_request_2 = sspr_unlock_account_request_v1_request_convertToJSON(sspr_unlock_account_request_v1_request_2);
	printf("repeating sspr_unlock_account_request_v1_request:\n%s\n", cJSON_Print(jsonsspr_unlock_account_request_v1_request_2));
}

int main() {
  test_sspr_unlock_account_request_v1_request(1);
  test_sspr_unlock_account_request_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // sspr_unlock_account_request_v1_request_MAIN
#endif // sspr_unlock_account_request_v1_request_TEST
