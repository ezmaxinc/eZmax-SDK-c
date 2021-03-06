#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_create_object_v1_response_m_payload.h"



ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignature_id
    ) {
    ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignature_create_object_v1_response_m_payload_t));
    if (!ezsignsignature_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_create_object_v1_response_m_payload_local_var->a_pki_ezsignsignature_id = a_pki_ezsignsignature_id;

    return ezsignsignature_create_object_v1_response_m_payload_local_var;
}


void ezsignsignature_create_object_v1_response_m_payload_free(ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload) {
    if(NULL == ezsignsignature_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id) {
        list_ForEach(listEntry, ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id) {
            free(listEntry->data);
        }
        list_free(ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id);
        ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id = NULL;
    }
    free(ezsignsignature_create_object_v1_response_m_payload);
}

cJSON *ezsignsignature_create_object_v1_response_m_payload_convertToJSON(ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id
    if (!ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id) {
        goto fail;
    }
    
    cJSON *a_pki_ezsignsignature_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsignatureID");
    if(a_pki_ezsignsignature_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsignature_idListEntry;
    list_ForEach(a_pki_ezsignsignature_idListEntry, ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignsignature_id, "", *(double *)a_pki_ezsignsignature_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_create_object_v1_response_m_payloadJSON){

    ezsignsignature_create_object_v1_response_m_payload_t *ezsignsignature_create_object_v1_response_m_payload_local_var = NULL;

    // ezsignsignature_create_object_v1_response_m_payload->a_pki_ezsignsignature_id
    cJSON *a_pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v1_response_m_payloadJSON, "a_pkiEzsignsignatureID");
    if (!a_pki_ezsignsignature_id) {
        goto end;
    }

    list_t *a_pki_ezsignsignature_idList;
    
    cJSON *a_pki_ezsignsignature_id_local;
    if(!cJSON_IsArray(a_pki_ezsignsignature_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignsignature_idList = list_create();

    cJSON_ArrayForEach(a_pki_ezsignsignature_id_local, a_pki_ezsignsignature_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignsignature_id_local))
        {
            goto end;
        }
        list_addElement(a_pki_ezsignsignature_idList , &a_pki_ezsignsignature_id_local->valuedouble);
    }


    ezsignsignature_create_object_v1_response_m_payload_local_var = ezsignsignature_create_object_v1_response_m_payload_create (
        a_pki_ezsignsignature_idList
        );

    return ezsignsignature_create_object_v1_response_m_payload_local_var;
end:
    return NULL;

}
