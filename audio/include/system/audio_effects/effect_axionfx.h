/*
 * Copyright (C) 2025-2026 AxionOS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_EFFECT_AXIONFX_CORE_H_
#define ANDROID_EFFECT_AXIONFX_CORE_H_

#include <system/audio_effect.h>

#if __cplusplus
extern "C" {
#endif

static const effect_uuid_t SL_IID_AXIONFX_ =
    { 0x5867be72, 0x4060, 0x4c55, 0xa378, { 0xc1, 0xcd, 0xef, 0x3e, 0x13, 0x53 } };
const effect_uuid_t * const SL_IID_AXIONFX = &SL_IID_AXIONFX_;

static const effect_uuid_t SL_IID_AXIONFX_IMPL_ =
    { 0xf35cb927, 0xa887, 0x4f3d, 0x847f, { 0x77, 0x06, 0x34, 0x48, 0x6d, 0x53 } };
const effect_uuid_t * const SL_IID_AXIONFX_IMPL = &SL_IID_AXIONFX_IMPL_;

#if __cplusplus
}  // extern "C"
#endif

#endif /*ANDROID_EFFECT_AXIONFX_CORE_H_*/
