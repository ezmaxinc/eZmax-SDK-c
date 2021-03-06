#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigner_request_compound.h"


char* e_ezsignsigner_logintypeezsignsigner_request_compound_ToString(ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype) {
    char* e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
	return e_ezsignsigner_logintypeArray[e_ezsignsigner_logintype];
}

ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeezsignsigner_request_compound_FromString(char* e_ezsignsigner_logintype){
    int stringToReturn = 0;
    char *e_ezsignsigner_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion", "InPersonPhone", "InPerson" };
    size_t sizeofArray = sizeof(e_ezsignsigner_logintypeArray) / sizeof(e_ezsignsigner_logintypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignsigner_logintype, e_ezsignsigner_logintypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignsigner_request_compound_t *ezsignsigner_request_compound_create(
    ezsignsigner_request_compound_contact_t *obj_contact,
    int fki_taxassignment_id,
    int fki_secretquestion_id,
    ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintype,
    char *s_ezsignsigner_secretanswer
    ) {
    ezsignsigner_request_compound_t *ezsignsigner_request_compound_local_var = malloc(sizeof(ezsignsigner_request_compound_t));
    if (!ezsignsigner_request_compound_local_var) {
        return NULL;
    }
    ezsignsigner_request_compound_local_var->obj_contact = obj_contact;
    ezsignsigner_request_compound_local_var->fki_taxassignment_id = fki_taxassignment_id;
    ezsignsigner_request_compound_local_var->fki_secretquestion_id = fki_secretquestion_id;
    ezsignsigner_request_compound_local_var->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    ezsignsigner_request_compound_local_var->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;

    return ezsignsigner_request_compound_local_var;
}


void ezsignsigner_request_compound_free(ezsignsigner_request_compound_t *ezsignsigner_request_compound) {
    if(NULL == ezsignsigner_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigner_request_compound->obj_contact) {
        ezsignsigner_request_compound_contact_free(ezsignsigner_request_compound->obj_contact);
        ezsignsigner_request_compound->obj_contact = NULL;
    }
    if (ezsignsigner_request_compound->s_ezsignsigner_secretanswer) {
        free(ezsignsigner_request_compound->s_ezsignsigner_secretanswer);
        ezsignsigner_request_compound->s_ezsignsigner_secretanswer = NULL;
    }
    free(ezsignsigner_request_compound);
}

cJSON *ezsignsigner_request_compound_convertToJSON(ezsignsigner_request_compound_t *ezsignsigner_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigner_request_compound->obj_contact
    if (!ezsignsigner_request_compound->obj_contact) {
        goto fail;
    }
    
    cJSON *obj_contact_local_JSON = ezsignsigner_request_compound_contact_convertToJSON(ezsignsigner_request_compound->obj_contact);
    if(obj_contact_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContact", obj_contact_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsigner_request_compound->fki_taxassignment_id
    if (!ezsignsigner_request_compound->fki_taxassignment_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiTaxassignmentID", ezsignsigner_request_compound->fki_taxassignment_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsigner_request_compound->fki_secretquestion_id
    if(ezsignsigner_request_compound->fki_secretquestion_id) { 
    if(cJSON_AddNumberToObject(item, "fkiSecretquestionID", ezsignsigner_request_compound->fki_secretquestion_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // ezsignsigner_request_compound->e_ezsignsigner_logintype
    
    if(cJSON_AddStringToObject(item, "eEzsignsignerLogintype", e_ezsignsigner_logintypeezsignsigner_request_compound_ToString(ezsignsigner_request_compound->e_ezsignsigner_logintype)) == NULL)
    {
    goto fail; //Enum
    }


    // ezsignsigner_request_compound->s_ezsignsigner_secretanswer
    if(ezsignsigner_request_compound->s_ezsignsigner_secretanswer) { 
    if(cJSON_AddStringToObject(item, "sEzsignsignerSecretanswer", ezsignsigner_request_compound->s_ezsignsigner_secretanswer) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigner_request_compound_t *ezsignsigner_request_compound_parseFromJSON(cJSON *ezsignsigner_request_compoundJSON){

    ezsignsigner_request_compound_t *ezsignsigner_request_compound_local_var = NULL;

    // ezsignsigner_request_compound->obj_contact
    cJSON *obj_contact = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "objContact");
    if (!obj_contact) {
        goto end;
    }

    ezsignsigner_request_compound_contact_t *obj_contact_local_nonprim = NULL;
    
    obj_contact_local_nonprim = ezsignsigner_request_compound_contact_parseFromJSON(obj_contact); //nonprimitive

    // ezsignsigner_request_compound->fki_taxassignment_id
    cJSON *fki_taxassignment_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "fkiTaxassignmentID");
    if (!fki_taxassignment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_taxassignment_id))
    {
    goto end; //Numeric
    }

    // ezsignsigner_request_compound->fki_secretquestion_id
    cJSON *fki_secretquestion_id = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "fkiSecretquestionID");
    if (fki_secretquestion_id) { 
    if(!cJSON_IsNumber(fki_secretquestion_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsigner_request_compound->e_ezsignsigner_logintype
    cJSON *e_ezsignsigner_logintype = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "eEzsignsignerLogintype");
    if (!e_ezsignsigner_logintype) {
        goto end;
    }

    ezmax_api_definition_ezsignsigner_request_compound_EEZSIGNSIGNERLOGINTYPE_e e_ezsignsigner_logintypeVariable;
    
    if(!cJSON_IsString(e_ezsignsigner_logintype))
    {
    goto end; //Enum
    }
    e_ezsignsigner_logintypeVariable = e_ezsignsigner_logintypeezsignsigner_request_compound_FromString(e_ezsignsigner_logintype->valuestring);

    // ezsignsigner_request_compound->s_ezsignsigner_secretanswer
    cJSON *s_ezsignsigner_secretanswer = cJSON_GetObjectItemCaseSensitive(ezsignsigner_request_compoundJSON, "sEzsignsignerSecretanswer");
    if (s_ezsignsigner_secretanswer) { 
    if(!cJSON_IsString(s_ezsignsigner_secretanswer))
    {
    goto end; //String
    }
    }


    ezsignsigner_request_compound_local_var = ezsignsigner_request_compound_create (
        obj_contact_local_nonprim,
        fki_taxassignment_id->valuedouble,
        fki_secretquestion_id ? fki_secretquestion_id->valuedouble : 0,
        e_ezsignsigner_logintypeVariable,
        s_ezsignsigner_secretanswer ? strdup(s_ezsignsigner_secretanswer->valuestring) : NULL
        );

    return ezsignsigner_request_compound_local_var;
end:
    if (obj_contact_local_nonprim) {
        ezsignsigner_request_compound_contact_free(obj_contact_local_nonprim);
        obj_contact_local_nonprim = NULL;
    }
    return NULL;

}
