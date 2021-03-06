#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_error.h"



common_response_error_t *common_response_error_create(
    char *s_error_message
    ) {
    common_response_error_t *common_response_error_local_var = malloc(sizeof(common_response_error_t));
    if (!common_response_error_local_var) {
        return NULL;
    }
    common_response_error_local_var->s_error_message = s_error_message;

    return common_response_error_local_var;
}


void common_response_error_free(common_response_error_t *common_response_error) {
    if(NULL == common_response_error){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_error->s_error_message) {
        free(common_response_error->s_error_message);
        common_response_error->s_error_message = NULL;
    }
    free(common_response_error);
}

cJSON *common_response_error_convertToJSON(common_response_error_t *common_response_error) {
    cJSON *item = cJSON_CreateObject();

    // common_response_error->s_error_message
    if (!common_response_error->s_error_message) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sErrorMessage", common_response_error->s_error_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_error_t *common_response_error_parseFromJSON(cJSON *common_response_errorJSON){

    common_response_error_t *common_response_error_local_var = NULL;

    // common_response_error->s_error_message
    cJSON *s_error_message = cJSON_GetObjectItemCaseSensitive(common_response_errorJSON, "sErrorMessage");
    if (!s_error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_error_message))
    {
    goto end; //String
    }


    common_response_error_local_var = common_response_error_create (
        strdup(s_error_message->valuestring)
        );

    return common_response_error_local_var;
end:
    return NULL;

}
