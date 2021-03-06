#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phone_request.h"


char* e_phone_typephone_request_ToString(ezmax_api_definition_phone_request__e e_phone_type) {
    char* e_phone_typeArray[] =  { "NULL", "Local", "International" };
	return e_phone_typeArray[e_phone_type];
}

ezmax_api_definition_phone_request__e e_phone_typephone_request_FromString(char* e_phone_type){
    int stringToReturn = 0;
    char *e_phone_typeArray[] =  { "NULL", "Local", "International" };
    size_t sizeofArray = sizeof(e_phone_typeArray) / sizeof(e_phone_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_phone_type, e_phone_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

phone_request_t *phone_request_create(
    int fki_phonetype_id,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension
    ) {
    phone_request_t *phone_request_local_var = malloc(sizeof(phone_request_t));
    if (!phone_request_local_var) {
        return NULL;
    }
    phone_request_local_var->fki_phonetype_id = fki_phonetype_id;
    phone_request_local_var->e_phone_type = e_phone_type;
    phone_request_local_var->s_phone_region = s_phone_region;
    phone_request_local_var->s_phone_exchange = s_phone_exchange;
    phone_request_local_var->s_phone_number = s_phone_number;
    phone_request_local_var->s_phone_international = s_phone_international;
    phone_request_local_var->s_phone_extension = s_phone_extension;

    return phone_request_local_var;
}


void phone_request_free(phone_request_t *phone_request) {
    if(NULL == phone_request){
        return ;
    }
    listEntry_t *listEntry;
    if (phone_request->s_phone_region) {
        free(phone_request->s_phone_region);
        phone_request->s_phone_region = NULL;
    }
    if (phone_request->s_phone_exchange) {
        free(phone_request->s_phone_exchange);
        phone_request->s_phone_exchange = NULL;
    }
    if (phone_request->s_phone_number) {
        free(phone_request->s_phone_number);
        phone_request->s_phone_number = NULL;
    }
    if (phone_request->s_phone_international) {
        free(phone_request->s_phone_international);
        phone_request->s_phone_international = NULL;
    }
    if (phone_request->s_phone_extension) {
        free(phone_request->s_phone_extension);
        phone_request->s_phone_extension = NULL;
    }
    free(phone_request);
}

cJSON *phone_request_convertToJSON(phone_request_t *phone_request) {
    cJSON *item = cJSON_CreateObject();

    // phone_request->fki_phonetype_id
    if (!phone_request->fki_phonetype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiPhonetypeID", phone_request->fki_phonetype_id) == NULL) {
    goto fail; //Numeric
    }


    // phone_request->e_phone_type
    


    // phone_request->s_phone_region
    if(phone_request->s_phone_region) { 
    if(cJSON_AddStringToObject(item, "sPhoneRegion", phone_request->s_phone_region) == NULL) {
    goto fail; //String
    }
     } 


    // phone_request->s_phone_exchange
    if(phone_request->s_phone_exchange) { 
    if(cJSON_AddStringToObject(item, "sPhoneExchange", phone_request->s_phone_exchange) == NULL) {
    goto fail; //String
    }
     } 


    // phone_request->s_phone_number
    if(phone_request->s_phone_number) { 
    if(cJSON_AddStringToObject(item, "sPhoneNumber", phone_request->s_phone_number) == NULL) {
    goto fail; //String
    }
     } 


    // phone_request->s_phone_international
    if(phone_request->s_phone_international) { 
    if(cJSON_AddStringToObject(item, "sPhoneInternational", phone_request->s_phone_international) == NULL) {
    goto fail; //String
    }
     } 


    // phone_request->s_phone_extension
    if(phone_request->s_phone_extension) { 
    if(cJSON_AddStringToObject(item, "sPhoneExtension", phone_request->s_phone_extension) == NULL) {
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

phone_request_t *phone_request_parseFromJSON(cJSON *phone_requestJSON){

    phone_request_t *phone_request_local_var = NULL;

    // phone_request->fki_phonetype_id
    cJSON *fki_phonetype_id = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "fkiPhonetypeID");
    if (!fki_phonetype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_phonetype_id))
    {
    goto end; //Numeric
    }

    // phone_request->e_phone_type
    cJSON *e_phone_type = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "ePhoneType");
    if (!e_phone_type) {
        goto end;
    }


    // phone_request->s_phone_region
    cJSON *s_phone_region = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneRegion");
    if (s_phone_region) { 
    if(!cJSON_IsString(s_phone_region))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_exchange
    cJSON *s_phone_exchange = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneExchange");
    if (s_phone_exchange) { 
    if(!cJSON_IsString(s_phone_exchange))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_number
    cJSON *s_phone_number = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneNumber");
    if (s_phone_number) { 
    if(!cJSON_IsString(s_phone_number))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_international
    cJSON *s_phone_international = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneInternational");
    if (s_phone_international) { 
    if(!cJSON_IsString(s_phone_international))
    {
    goto end; //String
    }
    }

    // phone_request->s_phone_extension
    cJSON *s_phone_extension = cJSON_GetObjectItemCaseSensitive(phone_requestJSON, "sPhoneExtension");
    if (s_phone_extension) { 
    if(!cJSON_IsString(s_phone_extension))
    {
    goto end; //String
    }
    }


    phone_request_local_var = phone_request_create (
        fki_phonetype_id->valuedouble,
        s_phone_region ? strdup(s_phone_region->valuestring) : NULL,
        s_phone_exchange ? strdup(s_phone_exchange->valuestring) : NULL,
        s_phone_number ? strdup(s_phone_number->valuestring) : NULL,
        s_phone_international ? strdup(s_phone_international->valuestring) : NULL,
        s_phone_extension ? strdup(s_phone_extension->valuestring) : NULL
        );

    return phone_request_local_var;
end:
    return NULL;

}
