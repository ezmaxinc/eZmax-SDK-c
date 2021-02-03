/*
 * field_e_ezsigndocument_step.h
 *
 * The signature step of the Ezsigndocument.
 */

#ifndef _field_e_ezsigndocument_step_H_
#define _field_e_ezsigndocument_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigndocument_step_t field_e_ezsigndocument_step_t;


// Enum  for field_e_ezsigndocument_step

typedef enum { ezmax_api_definition_field_e_ezsigndocument_step__NULL = 0, ezmax_api_definition_field_e_ezsigndocument_step__Unsent, ezmax_api_definition_field_e_ezsigndocument_step___Unsigned, ezmax_api_definition_field_e_ezsigndocument_step__PartiallySigned, ezmax_api_definition_field_e_ezsigndocument_step__Completed } ezmax_api_definition_field_e_ezsigndocument_step__e;

char* field_e_ezsigndocument_step_field_e_ezsigndocument_step_ToString(ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step);

ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_field_e_ezsigndocument_step_FromString(char* field_e_ezsigndocument_step);

//cJSON *field_e_ezsigndocument_step_field_e_ezsigndocument_step_convertToJSON(ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step);

//ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_field_e_ezsigndocument_step_parseFromJSON(cJSON *field_e_ezsigndocument_stepJSON);

#endif /* _field_e_ezsigndocument_step_H_ */
