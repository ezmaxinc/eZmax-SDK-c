/*
 * ezsignsignature_request_compound.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef _ezsignsignature_request_compound_H_
#define _ezsignsignature_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_compound_t ezsignsignature_request_compound_t;

#include "ezsignsignature_request.h"

// Enum EEZSIGNSIGNATURETYPE for ezsignsignature_request_compound

typedef enum  { ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_NULL = 0, ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_Acknowledgement, ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_Handwritten, ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_Initials, ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_Name } ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_e;

char* ezsignsignature_request_compound_e_ezsignsignature_type_ToString(ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_e e_ezsignsignature_type);

ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_e ezsignsignature_request_compound_e_ezsignsignature_type_FromString(char* e_ezsignsignature_type);



typedef struct ezsignsignature_request_compound_t {
    int fki_ezsignfoldersignerassociation_id; //numeric
    int i_ezsignpage_pagenumber; //numeric
    int i_ezsignsignature_x; //numeric
    int i_ezsignsignature_y; //numeric
    int i_ezsignsignature_step; //numeric
    ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_e e_ezsignsignature_type; //enum
    int fki_ezsigndocument_id; //numeric

} ezsignsignature_request_compound_t;

ezsignsignature_request_compound_t *ezsignsignature_request_compound_create(
    int fki_ezsignfoldersignerassociation_id,
    int i_ezsignpage_pagenumber,
    int i_ezsignsignature_x,
    int i_ezsignsignature_y,
    int i_ezsignsignature_step,
    ezmax_api_definition_ezsignsignature_request_compound_EEZSIGNSIGNATURETYPE_e e_ezsignsignature_type,
    int fki_ezsigndocument_id
);

void ezsignsignature_request_compound_free(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

ezsignsignature_request_compound_t *ezsignsignature_request_compound_parseFromJSON(cJSON *ezsignsignature_request_compoundJSON);

cJSON *ezsignsignature_request_compound_convertToJSON(ezsignsignature_request_compound_t *ezsignsignature_request_compound);

#endif /* _ezsignsignature_request_compound_H_ */

