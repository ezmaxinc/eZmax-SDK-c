/*
 * ezsignfoldersignerassociation_create_object_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef _ezsignfoldersignerassociation_create_object_v1_response_m_payload_H_
#define _ezsignfoldersignerassociation_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_object_v1_response_m_payload_t ezsignfoldersignerassociation_create_object_v1_response_m_payload_t;




typedef struct ezsignfoldersignerassociation_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignfoldersignerassociation_id; //primitive container

} ezsignfoldersignerassociation_create_object_v1_response_m_payload_t;

ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignfoldersignerassociation_id
);

void ezsignfoldersignerassociation_create_object_v1_response_m_payload_free(ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload);

ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v1_response_m_payloadJSON);

cJSON *ezsignfoldersignerassociation_create_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_create_object_v1_response_m_payload_t *ezsignfoldersignerassociation_create_object_v1_response_m_payload);

#endif /* _ezsignfoldersignerassociation_create_object_v1_response_m_payload_H_ */

