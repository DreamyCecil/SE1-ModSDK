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

612
%{
#include "StdH.h"
#include "Effects/WorldSettingsController.h"
#include "Tools/BackgroundViewer.h"
%}

uses "Tools/Marker";

enum BlendControllerType {
  0 BCT_NONE                        "None",                      // no FX
  1 BCT_PYRAMID_PLATES              "Appear pyramid plates",     // effect of appearing of pyramid plates
  2 BCT_ACTIVATE_PLATE_1            "Activate plate 1",          // plate 1 activating
  3 BCT_ACTIVATE_PLATE_2            "Activate plate 2",          // plate 2 activating
  4 BCT_ACTIVATE_PLATE_3            "Activate plate 3",          // plate 3 activating
  5 BCT_ACTIVATE_PLATE_4            "Activate plate 4",          // plate 4 activating
  6 BCT_ACTIVATE_PYRAMID_MORPH_ROOM "Pyramid morph room",        // pyramid morph room activated
  // [Cecil] Rev: New blend modes
  7 BCT_TOGGLE_LIGHTS_1             "Toggle lights 1",
  8 BCT_TOGGLE_LIGHTS_2             "Toggle lights 2",
  9 BCT_TOGGLE_LIGHTS_3             "Toggle lights 3",
 10 BCT_TOGGLE_LIGHTS_4             "Toggle lights 4",
 11 BCT_TOGGLE_CONTROLLED_LIGHTS_1  "Toggle controlled lights 1",
 12 BCT_TOGGLE_CONTROLLED_LIGHTS_2  "Toggle controlled lights 2",
 13 BCT_TOGGLE_CONTROLLED_LIGHTS_3  "Toggle controlled lights 3",
 14 BCT_TOGGLE_CONTROLLED_LIGHTS_4  "Toggle controlled lights 4",
};

class CBlendController: CMarker
{
name      "Blend controller";
thumbnail "Thumbnails\\BlendController.tbn";
features "IsImportant";

properties:

  1 enum BlendControllerType m_bctType  "Blend type" 'Y' = BCT_NONE,         // type of effect

components:

  1 model   MODEL_CONTROLLER          "Models\\Editor\\BlendController.mdl",
  2 texture TEXTURE_CONTROLLER        "Models\\Editor\\BlendController.tex",


functions:

  /* Handle an event, return false if the event is not handled. */
  BOOL HandleEvent(const CEntityEvent &ee)
  {
    // obtain world settings controller
    CWorldSettingsController *pwsc = GetWSC(this);
    if( pwsc == NULL) {
      return FALSE;
    }
    FLOAT tmNow = _pTimer->CurrentTick();

    if (ee.ee_slEvent==EVENTCODE_EActivate)
    {
      switch(m_bctType)
      {
        case BCT_PYRAMID_PLATES:
          pwsc->m_tmPyramidPlatesStart = tmNow;
          break;
        case BCT_ACTIVATE_PLATE_1:
          pwsc->m_tmActivatedPlate1 = tmNow;
          pwsc->m_tmDeactivatedPlate1 = 1e6;
          break;
        case BCT_ACTIVATE_PLATE_2:
          pwsc->m_tmActivatedPlate2 = tmNow;
          pwsc->m_tmDeactivatedPlate2 = 1e6;
          break;
        case BCT_ACTIVATE_PLATE_3:
          pwsc->m_tmActivatedPlate3 = tmNow;
          pwsc->m_tmDeactivatedPlate3 = 1e6;
          break;
        case BCT_ACTIVATE_PLATE_4:
          pwsc->m_tmActivatedPlate4 = tmNow;
          pwsc->m_tmDeactivatedPlate4 = 1e6;
          break;
        case BCT_ACTIVATE_PYRAMID_MORPH_ROOM:
          pwsc->m_tmPyramidMorphRoomActivated = tmNow;
          break;

        // [Cecil] Rev: New blend types
        case BCT_TOGGLE_LIGHTS_1:
          pwsc->m_tmActivatedToggledLights1 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_2:
          pwsc->m_tmActivatedToggledLights2 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_3:
          pwsc->m_tmActivatedToggledLights3 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_4:
          pwsc->m_tmActivatedToggledLights4 = tmNow;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_1:
          pwsc->m_tmActivatedInstToggledLights1 = tmNow;
          pwsc->m_tmDeactivatedInstToggledLights1 = 1e6;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_2:
          pwsc->m_tmActivatedInstToggledLights2 = tmNow;
          pwsc->m_tmDeactivatedInstToggledLights2 = 1e6;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_3:
          pwsc->m_tmActivatedInstToggledLights3 = tmNow;
          pwsc->m_tmDeactivatedInstToggledLights3 = 1e6;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_4:
          pwsc->m_tmActivatedInstToggledLights4 = tmNow;
          pwsc->m_tmDeactivatedInstToggledLights4 = 1e6;
          break;
      }
    }
    else if (ee.ee_slEvent==EVENTCODE_EDeactivate)
    {
      switch(m_bctType)
      {
        case BCT_ACTIVATE_PLATE_1:
          pwsc->m_tmDeactivatedPlate1 = tmNow;
          break;
        case BCT_ACTIVATE_PLATE_2:
          pwsc->m_tmDeactivatedPlate2 = tmNow;
          break;
        case BCT_ACTIVATE_PLATE_3:
          pwsc->m_tmDeactivatedPlate3 = tmNow;
          break;
        case BCT_ACTIVATE_PLATE_4:
          pwsc->m_tmDeactivatedPlate4 = tmNow;
          break;

        // [Cecil] Rev: New blend types
        case BCT_TOGGLE_LIGHTS_1:
          pwsc->m_tmDeactivatedToggledLights1 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_2:
          pwsc->m_tmDeactivatedToggledLights2 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_3:
          pwsc->m_tmDeactivatedToggledLights3 = tmNow;
          break;
        case BCT_TOGGLE_LIGHTS_4:
          pwsc->m_tmDeactivatedToggledLights4 = tmNow;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_1:
          pwsc->m_tmActivatedInstToggledLights1 = 1e6;
          pwsc->m_tmDeactivatedInstToggledLights1 = tmNow;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_2:
          pwsc->m_tmActivatedInstToggledLights2 = 1e6;
          pwsc->m_tmDeactivatedInstToggledLights2 = tmNow;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_3:
          pwsc->m_tmActivatedInstToggledLights3 = 1e6;
          pwsc->m_tmDeactivatedInstToggledLights3 = tmNow;
          break;
        case BCT_TOGGLE_CONTROLLED_LIGHTS_4:
          pwsc->m_tmActivatedInstToggledLights4 = 1e6;
          pwsc->m_tmDeactivatedInstToggledLights4 = tmNow;
          break;
      }
    }
    return FALSE;
  }

procedures:

  Main()
  {
    // init model
    InitAsEditorModel();
    SetPhysicsFlags(EPF_MODEL_IMMATERIAL);
    SetCollisionFlags(ECF_IMMATERIAL);

    // set appearance
    SetModel(MODEL_CONTROLLER);
    SetModelMainTexture(TEXTURE_CONTROLLER);

    return;
  }
};

