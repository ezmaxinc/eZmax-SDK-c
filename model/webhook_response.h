/*
 * webhook_response.h
 *
 * A webhook object
 */

#ifndef _webhook_response_H_
#define _webhook_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_response_t webhook_response_t;


// Enum EWEBHOOKMODULE for webhook_response

typedef enum  { ezmax_api_definition_webhook_response_EWEBHOOKMODULE_NULL = 0, ezmax_api_definition_webhook_response_EWEBHOOKMODULE_Ezsign, ezmax_api_definition_webhook_response_EWEBHOOKMODULE_Management } ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e;

char* webhook_response_e_webhook_module_ToString(ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_module);

ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e webhook_response_e_webhook_module_FromString(char* e_webhook_module);

// Enum EWEBHOOKEZSIGNEVENT for webhook_response

typedef enum  { ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_NULL = 0, ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_DocumentCompleted, ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_FolderCompleted } ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e;

char* webhook_response_e_webhook_ezsignevent_ToString(ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsignevent);

ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e webhook_response_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum EWEBHOOKMANAGEMENTEVENT for webhook_response

typedef enum  { ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_NULL = 0, ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_UserCreated } ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e;

char* webhook_response_e_webhook_managementevent_ToString(ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementevent);

ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e webhook_response_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_response_t {
    int pki_webhook_id; //numeric
    ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_module; //enum
    ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsignevent; //enum
    char *pks_customer_code; // string
    char *s_webhook_url; // string
    char *s_webhook_emailfailed; // string
    ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementevent; //enum

} webhook_response_t;

webhook_response_t *webhook_response_create(
    int pki_webhook_id,
    ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_module,
    ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsignevent,
    char *pks_customer_code,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementevent
);

void webhook_response_free(webhook_response_t *webhook_response);

webhook_response_t *webhook_response_parseFromJSON(cJSON *webhook_responseJSON);

cJSON *webhook_response_convertToJSON(webhook_response_t *webhook_response);

#endif /* _webhook_response_H_ */

