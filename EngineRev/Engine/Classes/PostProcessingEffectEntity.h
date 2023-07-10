/* Copyright (c) 2023 Dreamy Cecil
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

#ifndef _RevEntities_CPostProcessingEffectEntity_INCLUDED
#define _RevEntities_CPostProcessingEffectEntity_INCLUDED 1
extern "C" DECL_DLL CDLLEntityClass CPostProcessingEffectEntity_DLLClass;
class DECL_DLL CPostProcessingEffectEntity : public CEntity {
public:
  BOOL m_bGlobal;
  RANGE m_fRange;
  CTFileName m_fnmFrgShader;
  CTFileName m_fnmVtxShader;
  FLOAT m_fParam0;
  FLOAT m_fParam1;
  FLOAT m_fParam2;
  FLOAT m_fParam3;
  FLOAT m_fParam4;
  FLOAT m_fTimeStarted;

  // [Cecil] Rev: Unknown fields
  ULONG m_aPostProcessingEffectEntityFields[11];

  BOOL Dummy(const CEntityEvent &__eeInput);
};
#endif // _RevEntities_CPostProcessingEffectEntity_INCLUDED
