// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#pragma once

///////////////////////////////////////////////////////////////////////////
//
// This API is provided as a simple interface for Microsoft SEAL library
// that can be PInvoked by .Net code.
//
///////////////////////////////////////////////////////////////////////////

#include <stdint.h>
#include "sealnet/defines.h"

SEALMETHOD SEALContext_Create(void *encryptionParams, bool expand_mod_chain, int sec_level, void **context);

SEALMETHOD SEALContext_Destroy(void *thisptr);

SEALMETHOD SEALContext_KeyParmsId(void *thisptr, uint64_t *parms_id);

SEALMETHOD SEALContext_FirstParmsId(void *thisptr, uint64_t *parms_id);

SEALMETHOD SEALContext_LastParmsId(void *thisptr, uint64_t *parms_id);

SEALMETHOD SEALContext_ParametersSet(void *thisptr, bool *params_set);

SEALMETHOD SEALContext_KeyContextData(void *thisptr, void **context_data);

SEALMETHOD SEALContext_FirstContextData(void *thisptr, void **context_data);

SEALMETHOD SEALContext_LastContextData(void *thisptr, void **context_data);

SEALMETHOD SEALContext_GetContextData(void *thisptr, uint64_t *parms_id, void **context_data);

SEALMETHOD SEALContext_UsingKeyswitching(void *thisptr, bool *using_keyswitching);
