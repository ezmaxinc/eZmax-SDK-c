#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_response_all_of.h"


char* e_user_typeuser_response_all_of_ToString(ezmax_api_definition_user_response_all_of__e e_user_type) {
    char* e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Attendance", "Customer", "Employee", "Ezcom", "EzsignSigner", "EzsignUser", "FranchiseCustomerServer", "Normal", "RewardAdministration", "RewardMember", "RewardRepresentative", "RewardCustomer", "RewardDistributorServer", "Supplier", "VetrxCustomer", "Vetrxcustomergroup", "VetrxCustomerServer", "VetrxManufacturer", "VetrxVendor" };
	return e_user_typeArray[e_user_type];
}

ezmax_api_definition_user_response_all_of__e e_user_typeuser_response_all_of_FromString(char* e_user_type){
    int stringToReturn = 0;
    char *e_user_typeArray[] =  { "NULL", "AgentBroker", "Assistant", "Attendance", "Customer", "Employee", "Ezcom", "EzsignSigner", "EzsignUser", "FranchiseCustomerServer", "Normal", "RewardAdministration", "RewardMember", "RewardRepresentative", "RewardCustomer", "RewardDistributorServer", "Supplier", "VetrxCustomer", "Vetrxcustomergroup", "VetrxCustomerServer", "VetrxManufacturer", "VetrxVendor" };
    size_t sizeofArray = sizeof(e_user_typeArray) / sizeof(e_user_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_user_type, e_user_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

user_response_all_of_t *user_response_all_of_create(
    int pki_user_id,
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    common_audit_t *obj_audit
    ) {
    user_response_all_of_t *user_response_all_of_local_var = malloc(sizeof(user_response_all_of_t));
    if (!user_response_all_of_local_var) {
        return NULL;
    }
    user_response_all_of_local_var->pki_user_id = pki_user_id;
    user_response_all_of_local_var->fki_language_id = fki_language_id;
    user_response_all_of_local_var->e_user_type = e_user_type;
    user_response_all_of_local_var->s_user_firstname = s_user_firstname;
    user_response_all_of_local_var->s_user_lastname = s_user_lastname;
    user_response_all_of_local_var->s_user_loginname = s_user_loginname;
    user_response_all_of_local_var->obj_audit = obj_audit;

    return user_response_all_of_local_var;
}


void user_response_all_of_free(user_response_all_of_t *user_response_all_of) {
    if(NULL == user_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (user_response_all_of->s_user_firstname) {
        free(user_response_all_of->s_user_firstname);
        user_response_all_of->s_user_firstname = NULL;
    }
    if (user_response_all_of->s_user_lastname) {
        free(user_response_all_of->s_user_lastname);
        user_response_all_of->s_user_lastname = NULL;
    }
    if (user_response_all_of->s_user_loginname) {
        free(user_response_all_of->s_user_loginname);
        user_response_all_of->s_user_loginname = NULL;
    }
    if (user_response_all_of->obj_audit) {
        common_audit_free(user_response_all_of->obj_audit);
        user_response_all_of->obj_audit = NULL;
    }
    free(user_response_all_of);
}

cJSON *user_response_all_of_convertToJSON(user_response_all_of_t *user_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // user_response_all_of->pki_user_id
    if (!user_response_all_of->pki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiUserID", user_response_all_of->pki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response_all_of->fki_language_id
    if (!user_response_all_of->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", user_response_all_of->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // user_response_all_of->e_user_type
    


    // user_response_all_of->s_user_firstname
    if (!user_response_all_of->s_user_firstname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserFirstname", user_response_all_of->s_user_firstname) == NULL) {
    goto fail; //String
    }


    // user_response_all_of->s_user_lastname
    if (!user_response_all_of->s_user_lastname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserLastname", user_response_all_of->s_user_lastname) == NULL) {
    goto fail; //String
    }


    // user_response_all_of->s_user_loginname
    if (!user_response_all_of->s_user_loginname) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sUserLoginname", user_response_all_of->s_user_loginname) == NULL) {
    goto fail; //String
    }


    // user_response_all_of->obj_audit
    if (!user_response_all_of->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(user_response_all_of->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_response_all_of_t *user_response_all_of_parseFromJSON(cJSON *user_response_all_ofJSON){

    user_response_all_of_t *user_response_all_of_local_var = NULL;

    // user_response_all_of->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }

    // user_response_all_of->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // user_response_all_of->e_user_type
    cJSON *e_user_type = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "eUserType");
    if (!e_user_type) {
        goto end;
    }


    // user_response_all_of->s_user_firstname
    cJSON *s_user_firstname = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "sUserFirstname");
    if (!s_user_firstname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_firstname))
    {
    goto end; //String
    }

    // user_response_all_of->s_user_lastname
    cJSON *s_user_lastname = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "sUserLastname");
    if (!s_user_lastname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_lastname))
    {
    goto end; //String
    }

    // user_response_all_of->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "sUserLoginname");
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }

    // user_response_all_of->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(user_response_all_ofJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    common_audit_t *obj_audit_local_nonprim = NULL;
    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    user_response_all_of_local_var = user_response_all_of_create (
        pki_user_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_user_firstname->valuestring),
        strdup(s_user_lastname->valuestring),
        strdup(s_user_loginname->valuestring),
        obj_audit_local_nonprim
        );

    return user_response_all_of_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
