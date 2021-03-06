/*
 * ezsigndocument_response_all_of.h
 *
 * 
 */

#ifndef _ezsigndocument_response_all_of_H_
#define _ezsigndocument_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_response_all_of_t ezsigndocument_response_all_of_t;

#include "common_audit.h"
#include "field_e_ezsigndocument_step.h"

// Enum  for ezsigndocument_response_all_of

typedef enum  { ezmax_api_definition_ezsigndocument_response_all_of__NULL = 0, ezmax_api_definition_ezsigndocument_response_all_of__Unsent, ezmax_api_definition_ezsigndocument_response_all_of___Unsigned, ezmax_api_definition_ezsigndocument_response_all_of__PartiallySigned, ezmax_api_definition_ezsigndocument_response_all_of__Completed } ezmax_api_definition_ezsigndocument_response_all_of__e;

char* ezsigndocument_response_all_of_e_ezsigndocument_step_ToString(ezmax_api_definition_ezsigndocument_response_all_of__e e_ezsigndocument_step);

ezmax_api_definition_ezsigndocument_response_all_of__e ezsigndocument_response_all_of_e_ezsigndocument_step_FromString(char* e_ezsigndocument_step);



typedef struct ezsigndocument_response_all_of_t {
    int fki_ezsignfolder_id; //numeric
    char *dt_ezsigndocument_duedate; // string
    int fki_language_id; //numeric
    char *s_ezsigndocument_name; // string
    int pki_ezsigndocument_id; //numeric
    char *dt_ezsigndocument_firstsend; // string
    char *dt_ezsigndocument_lastsend; // string
    int i_ezsigndocument_order; //numeric
    int i_ezsigndocument_pagetotal; //numeric
    int i_ezsigndocument_signaturesigned; //numeric
    int i_ezsigndocument_signaturetotal; //numeric
    char *s_ezsigndocument_md5initial; // string
    char *s_ezsigndocument_md5signed; // string
    struct common_audit_t *obj_audit; //model

} ezsigndocument_response_all_of_t;

ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_create(
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_name,
    int pki_ezsigndocument_id,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *s_ezsigndocument_md5signed,
    common_audit_t *obj_audit
);

void ezsigndocument_response_all_of_free(ezsigndocument_response_all_of_t *ezsigndocument_response_all_of);

ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_parseFromJSON(cJSON *ezsigndocument_response_all_ofJSON);

cJSON *ezsigndocument_response_all_of_convertToJSON(ezsigndocument_response_all_of_t *ezsigndocument_response_all_of);

#endif /* _ezsigndocument_response_all_of_H_ */

