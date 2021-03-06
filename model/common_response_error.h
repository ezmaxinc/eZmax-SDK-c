/*
 * common_response_error.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_H_
#define _common_response_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_t common_response_error_t;




typedef struct common_response_error_t {
    char *s_error_message; // string

} common_response_error_t;

common_response_error_t *common_response_error_create(
    char *s_error_message
);

void common_response_error_free(common_response_error_t *common_response_error);

common_response_error_t *common_response_error_parseFromJSON(cJSON *common_response_errorJSON);

cJSON *common_response_error_convertToJSON(common_response_error_t *common_response_error);

#endif /* _common_response_error_H_ */

