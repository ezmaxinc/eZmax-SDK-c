/*
 * ezsignfoldersignerassociation_edit_object_v1_response.h
 *
 * Response for the /1/object/ezsignfoldersignerassociation/editObject API Request
 */

#ifndef _ezsignfoldersignerassociation_edit_object_v1_response_H_
#define _ezsignfoldersignerassociation_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_edit_object_v1_response_t ezsignfoldersignerassociation_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfoldersignerassociation_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignfoldersignerassociation_edit_object_v1_response_t;

ezsignfoldersignerassociation_edit_object_v1_response_t *ezsignfoldersignerassociation_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfoldersignerassociation_edit_object_v1_response_free(ezsignfoldersignerassociation_edit_object_v1_response_t *ezsignfoldersignerassociation_edit_object_v1_response);

ezsignfoldersignerassociation_edit_object_v1_response_t *ezsignfoldersignerassociation_edit_object_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_edit_object_v1_responseJSON);

cJSON *ezsignfoldersignerassociation_edit_object_v1_response_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_response_t *ezsignfoldersignerassociation_edit_object_v1_response);

#endif /* _ezsignfoldersignerassociation_edit_object_v1_response_H_ */

