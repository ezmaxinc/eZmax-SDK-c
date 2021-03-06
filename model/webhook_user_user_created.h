/*
 * webhook_user_user_created.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_user_user_created_H_
#define _webhook_user_user_created_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_user_user_created_t webhook_user_user_created_t;

#include "attempt_response.h"
#include "common_webhook.h"
#include "user_response.h"
#include "webhook_response.h"
#include "webhook_user_user_created_all_of.h"



typedef struct webhook_user_user_created_t {
    struct user_response_t *obj_user; //model
    struct webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container

} webhook_user_user_created_t;

webhook_user_user_created_t *webhook_user_user_created_create(
    user_response_t *obj_user,
    webhook_response_t *obj_webhook,
    list_t *a_obj_attempt
);

void webhook_user_user_created_free(webhook_user_user_created_t *webhook_user_user_created);

webhook_user_user_created_t *webhook_user_user_created_parseFromJSON(cJSON *webhook_user_user_createdJSON);

cJSON *webhook_user_user_created_convertToJSON(webhook_user_user_created_t *webhook_user_user_created);

#endif /* _webhook_user_user_created_H_ */

