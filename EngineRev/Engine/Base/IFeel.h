/* Copyright (c) 2002-2012 Croteam Ltd. 
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef SE_INCL_IFEEL_H
#define SE_INCL_IFEEL_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

ENGINE_API void IFeel_InitDevice(void); // [Cecil] Rev: No arguments or return value
ENGINE_API void IFeel_Delete(void); // [Cecil] Rev: 'IFeel_DeleteDevice' -> 'IFeel_Delete'
ENGINE_API void IFeel_UnLoadFile();
ENGINE_API void IFeel_PlayEffect(INDEX iExtra, const char *pstrEffectName); // [Cecil] Rev: Extra argument
ENGINE_API void IFeel_StopEffects(INDEX iExtra); // [Cecil] Rev: 'IFeel_StopEffect' -> 'IFeel_StopEffects'; extra argument
ENGINE_API void IFeel_Update(void); // [Cecil] Rev: New method

// [Cecil] Rev: Wrappers for compatibility
__forceinline void IFeel_PlayEffect(const char *pstrEffectName) {
  IFeel_PlayEffect(0, pstrEffectName);
};

__forceinline void IFeel_StopEffect(const char *pstrEffectName) {
  IFeel_StopEffects(0);
};

#endif  /* include-once check. */
