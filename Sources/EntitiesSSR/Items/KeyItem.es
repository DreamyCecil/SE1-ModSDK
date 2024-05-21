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

805
%{
#include "StdH.h"
#include "Models/Items/ItemHolder/ItemHolder.h"
%}

uses "Items/Item";

// key type 
enum KeyItemType {
  // [Cecil] Rev: TFE keys
  0 KIT_ANKHWOOD          "Wooden ankh",
  1 KIT_ANKHROCK          "Stone ankh",
  2 KIT_ANKHGOLD          "Gold ankh",
  3 KIT_AMONGOLD          "Gold amon",
  4 KIT_ANKHGOLDDUMMY     "Gold ankh dummy key",
  5 KIT_ELEMENTEARTH      "Element - Earth",
  6 KIT_ELEMENTWATER      "Element - Water",
  7 KIT_ELEMENTAIR        "Element - Air",
  8 KIT_ELEMENTFIRE       "Element - Fire",
  9 KIT_RAKEY             "Ra Key",
 10 KIT_MOONKEY           "Moon Key",
 11 KIT_EYEOFRA           "Eye of Ra",
 12 KIT_SCARAB            "Scarab",
 13 KIT_COBRA             "Cobra",
 14 KIT_SCARABDUMMY       "Scarab dummy",
 15 KIT_HEART             "Gold Heart",
 16 KIT_FEATHER           "Feather of Truth",
 17 KIT_SPHINX1           "Sphinx 1",
 18 KIT_SPHINX2           "Sphinx 2",

 // [Cecil] Rev: Shifted TSE keys
 19 KIT_BOOKOFWISDOM      "Book of wisdom",
 20 KIT_CROSSWOODEN       "Wooden cross",
 21 KIT_CROSSMETAL        "Silver cross",
 22 KIT_CROSSGOLD         "Gold cross",
 23 KIT_JAGUARGOLDDUMMY   "Gold jaguar",
 24 KIT_HAWKWINGS01DUMMY  "Hawk wings - part 1",
 25 KIT_HAWKWINGS02DUMMY  "Hawk wings - part 2",
 26 KIT_HOLYGRAIL         "Holy grail",
 27 KIT_TABLESDUMMY       "Tablet of wisdom",
 28 KIT_WINGEDLION        "Winged lion",
 29 KIT_ELEPHANTGOLD      "Gold elephant",
 30 KIT_STATUEHEAD01      "Seriously scary ceremonial mask",
 31 KIT_STATUEHEAD02      "Hilariously happy ceremonial mask",
 32 KIT_STATUEHEAD03      "Ix Chel mask",
 33 KIT_KINGSTATUE        "Statue of King Tilmun",
 34 KIT_CRYSTALSKULL      "Crystal Skull",
};

// event for sending through receive item
event EKey {
  enum KeyItemType kitType,
  CTString strCustomText, // [Cecil] Rev: Custom pickup text
};

%{

const char *GetKeyName(enum KeyItemType kit)
{
  switch(kit) {
  // [Cecil] Rev: TFE keys
  case KIT_ANKHWOOD:      return TRANS("Wooden ankh"); break;
  case KIT_ANKHROCK:      return TRANS("Stone ankh"); break;
  case KIT_ANKHGOLD:
  case KIT_ANKHGOLDDUMMY: return TRANS("Gold ankh"); break;
  case KIT_AMONGOLD:      return TRANS("Gold Amon statue"); break;
  case KIT_ELEMENTEARTH:  return TRANS("Earth element"); break;
  case KIT_ELEMENTWATER:  return TRANS("Water element"); break;
  case KIT_ELEMENTAIR:    return TRANS("Air element"); break;
  case KIT_ELEMENTFIRE:   return TRANS("Fire element"); break;
  case KIT_RAKEY:         return TRANS("Ra key"); break;
  case KIT_MOONKEY:       return TRANS("Moon key"); break;
  case KIT_EYEOFRA:       return TRANS("Eye of Ra"); break;
  case KIT_SCARAB:
  case KIT_SCARABDUMMY:   return TRANS("Scarab"); break;
  case KIT_COBRA:         return TRANS("Cobra"); break;
  case KIT_HEART:         return TRANS("Gold Heart"); break;
  case KIT_FEATHER:       return TRANS("Feather of Truth"); break;
  case KIT_SPHINX1:
  case KIT_SPHINX2:       return TRANS("Gold Sphinx"); break;

  case KIT_BOOKOFWISDOM     :  return TRANS("Book of wisdom"); break;
  case KIT_CROSSWOODEN      :  return TRANS("Wooden cross"); break;
  case KIT_CROSSGOLD        :  return TRANS("Gold cross"); break;
  case KIT_CROSSMETAL       :  return TRANS("Silver cross"); break;
  case KIT_JAGUARGOLDDUMMY  :  return TRANS("Gold jaguar"); break;
  case KIT_HAWKWINGS01DUMMY :  return TRANS("Hawk wings - part 1"); break;
  case KIT_HAWKWINGS02DUMMY :  return TRANS("Hawk wings - part 2"); break;
  case KIT_HOLYGRAIL        :  return TRANS("Holy grail"); break;
  case KIT_TABLESDUMMY      :  return TRANS("Tablet of wisdom"); break;
  case KIT_WINGEDLION       :  return TRANS("Winged lion"); break;
  case KIT_ELEPHANTGOLD     :  return TRANS("Gold elephant"); break;    
  case KIT_STATUEHEAD01     :  return TRANS("Seriously scary ceremonial mask"); break;
  case KIT_STATUEHEAD02     :  return TRANS("Hilariously happy ceremonial mask"); break;
  case KIT_STATUEHEAD03     :  return TRANS("Ix Chel mask"); break;   
  case KIT_KINGSTATUE       :  return TRANS("Statue of King Tilmun"); break;   
  case KIT_CRYSTALSKULL     :  return TRANS("Crystal Skull"); break;   
  default: return TRANS("unknown item"); break;
  };
}

%}

class CKeyItem : CItem {
name      "KeyItem";
thumbnail "Thumbnails\\KeyItem.tbn";
features  "IsImportant";

properties:
  1 enum KeyItemType m_kitType    "Type" 'Y' = KIT_BOOKOFWISDOM, // key type
  3 INDEX m_iSoundComponent = 0,
  5 FLOAT m_fSize "Size" = 1.0f,
  6 CTString m_strCustomText "Custom text" = "", // [Cecil] Rev

components:
  0 class   CLASS_BASE        "Classes\\Item.ecl",

// ********* ANKH KEY *********
  1 model   MODEL_BOOKOFWISDOM      "ModelsMP\\Items\\Keys\\BookOfWisdom\\Book.mdl",
  2 texture TEXTURE_BOOKOFWISDOM    "ModelsMP\\Items\\Keys\\BookOfWisdom\\Book.tex",

  5 model   MODEL_CROSSWOODEN       "ModelsMP\\Items\\Keys\\Cross\\Cross.mdl",
  6 texture TEXTURE_CROSSWOODEN     "ModelsMP\\Items\\Keys\\Cross\\CrossWooden.tex",
  
  7 model   MODEL_CROSSMETAL        "ModelsMP\\Items\\Keys\\Cross\\Cross.mdl",
  8 texture TEXTURE_CROSSMETAL      "ModelsMP\\Items\\Keys\\Cross\\CrossMetal.tex",

 10 model   MODEL_CROSSGOLD         "ModelsMP\\Items\\Keys\\GoldCross\\Cross.mdl",
 11 texture TEXTURE_CROSSGOLD       "ModelsMP\\Items\\Keys\\GoldCross\\Cross.tex",

 15 model   MODEL_JAGUARGOLD        "ModelsMP\\Items\\Keys\\GoldJaguar\\Jaguar.mdl",

 20 model   MODEL_HAWKWINGS01       "ModelsMP\\Items\\Keys\\HawkWings\\WingRight.mdl",
 21 model   MODEL_HAWKWINGS02       "ModelsMP\\Items\\Keys\\HawkWings\\WingLeft.mdl",
 22 texture TEXTURE_HAWKWINGS       "ModelsMP\\Items\\Keys\\HawkWings\\Wings.tex",

 30 model   MODEL_HOLYGRAIL         "ModelsMP\\Items\\Keys\\HolyGrail\\Grail.mdl",
 31 texture TEXTURE_HOLYGRAIL       "ModelsMP\\Items\\Keys\\HolyGrail\\Grail.tex",

 35 model   MODEL_TABLESOFWISDOM    "ModelsMP\\Items\\Keys\\TablesOfWisdom\\Tables.mdl",
 36 texture TEXTURE_TABLESOFWISDOM  "ModelsMP\\Items\\Keys\\TablesOfWisdom\\Tables.tex",

 40 model   MODEL_WINGEDLION        "ModelsMP\\Items\\Keys\\WingLion\\WingLion.mdl",
 
 45 model   MODEL_ELEPHANTGOLD      "ModelsMP\\Items\\Keys\\GoldElephant\\Elephant.mdl",

 50 model   MODEL_STATUEHEAD01      "ModelsMP\\Items\\Keys\\Statue01\\Statue.mdl",
 51 texture TEXTURE_STATUEHEAD01    "ModelsMP\\Items\\Keys\\Statue01\\Statue.tex",
 52 model   MODEL_STATUEHEAD02      "ModelsMP\\Items\\Keys\\Statue02\\Statue.mdl",
 53 texture TEXTURE_STATUEHEAD02    "ModelsMP\\Items\\Keys\\Statue02\\Statue.tex",
 54 model   MODEL_STATUEHEAD03      "ModelsMP\\Items\\Keys\\Statue03\\Statue.mdl",
 55 texture TEXTURE_STATUEHEAD03    "ModelsMP\\Items\\Keys\\Statue03\\Statue.tex",

 58 model   MODEL_KINGSTATUE        "ModelsMP\\Items\\Keys\\ManStatue\\Statue.mdl",
 
 60 model   MODEL_CRYSTALSKULL      "ModelsMP\\Items\\Keys\\CrystalSkull\\Skull.mdl",
 61 texture TEXTURE_CRYSTALSKULL    "ModelsMP\\Items\\Keys\\CrystalSkull\\Skull.tex",

 // [Cecil] Rev: TFE keys
 62 model   MODEL_ANKHWOOD          "Models\\Items\\Keys\\AnkhWood\\Ankh.mdl",
 63 texture TEXTURE_ANKHWOOD        "Models\\Ages\\Egypt\\Vehicles\\BigBoat\\OldWood.tex",
 64 model   MODEL_ANKHROCK          "Models\\Items\\Keys\\AnkhStone\\Ankh.mdl",
 65 texture TEXTURE_ANKHROCK        "Models\\Items\\Keys\\AnkhStone\\Stone.tex",
 66 model   MODEL_ANKHGOLD          "Models\\Items\\Keys\\AnkhGold\\Ankh.mdl",
 67 texture TEXTURE_ANKHGOLD        "Models\\Items\\Keys\\AnkhGold\\Ankh.tex",
 68 model   MODEL_AMONGOLD          "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.mdl",
 69 texture TEXTURE_AMONGOLD        "Models\\Ages\\Egypt\\Gods\\Amon\\AmonGold.tex",
 70 model   MODEL_ELEMENTAIR        "Models\\Items\\Keys\\Elements\\Air.mdl",
 71 texture TEXTURE_ELEMENTAIR      "Models\\Items\\Keys\\Elements\\Air.tex",
 72 model   MODEL_ELEMENTWATER      "Models\\Items\\Keys\\Elements\\Water.mdl",
 73 texture TEXTURE_ELEMENTWATER    "Models\\Items\\Keys\\Elements\\Water.tex",
 74 model   MODEL_ELEMENTFIRE       "Models\\Items\\Keys\\Elements\\Fire.mdl",
 75 texture TEXTURE_ELEMENTFIRE     "Models\\Items\\Keys\\Elements\\Fire.tex",
 76 model   MODEL_ELEMENTEARTH      "Models\\Items\\Keys\\Elements\\Earth.mdl",
 77 texture TEXTURE_ELEMENTEARTH    "Models\\Items\\Keys\\Elements\\Texture.tex",
 78 model   MODEL_RAKEY             "Models\\Items\\Keys\\RaKey\\Key.mdl",
 79 texture TEXTURE_RAKEY           "Models\\Items\\Keys\\RaKey\\Key.tex",
 80 model   MODEL_MOONKEY           "Models\\Items\\Keys\\RaSign\\Sign.mdl",
 81 texture TEXTURE_MOONKEY         "Models\\Items\\Keys\\RaSign\\Sign.tex",
 82 model   MODEL_EYEOFRA           "Models\\Items\\Keys\\EyeOfRa\\EyeOfRa.mdl",
 83 texture TEXTURE_EYEOFRA         "Models\\Items\\Keys\\EyeOfRa\\EyeOfRa.tex",
 84 model   MODEL_SCARAB            "Models\\Items\\Keys\\Scarab\\Scarab.mdl",
 85 texture TEXTURE_SCARAB          "Models\\Items\\Keys\\Scarab\\Scarab.tex",
 86 model   MODEL_COBRA             "Models\\Items\\Keys\\Uaset\\Uaset.mdl",
 87 texture TEXTURE_COBRA           "Models\\Items\\Keys\\Uaset\\Uaset.tex",
 88 model   MODEL_FEATHER           "Models\\Items\\Keys\\Luxor\\FeatherOfTruth.mdl",
 89 texture TEXTURE_FEATHER         "Models\\Items\\Keys\\Luxor\\FeatherOfTruth.tex",
 90 model   MODEL_HEART             "Models\\Items\\Keys\\Luxor\\GoldHeart.mdl",
 91 texture TEXTURE_HEART           "Models\\Items\\Keys\\Luxor\\GoldHeart.tex",
 92 model   MODEL_SPHINXGOLD        "Models\\Items\\Keys\\GoldSphinx\\GoldSphinx.mdl",
 93 texture TEXTURE_SPHINXGOLD      "Models\\Items\\Keys\\GoldSphinx\\Sphinx.tex",

 // ********* MISC *********
250 texture TEXTURE_FLARE       "ModelsMP\\Items\\Flares\\Flare.tex",
251 model   MODEL_FLARE         "ModelsMP\\Items\\Flares\\Flare.mdl",
252 texture TEX_REFL_GOLD01     "ModelsMP\\ReflectionTextures\\Gold01.tex",
253 texture TEX_REFL_METAL01    "ModelsMP\\ReflectionTextures\\LightMetal01.tex",
254 texture TEX_SPEC_MEDIUM     "ModelsMP\\SpecularTextures\\Medium.tex",
255 texture TEX_SPEC_STRONG     "ModelsMP\\SpecularTextures\\Strong.tex",

// ************** SOUNDS **************
300 sound   SOUND_KEY         "Sounds\\Items\\Key.wav",

functions:
  void Precache(void) {
    PrecacheSound(SOUND_KEY);
  }
  /* Fill in entity statistics - for AI purposes only */
  BOOL FillEntityStatistics(EntityStats *pes)
  {
    pes->es_strName = GetKeyName(m_kitType);
    pes->es_ctCount = 1;
    pes->es_ctAmmount = 1;
    pes->es_fValue = 1;
    pes->es_iScore = 0;//m_iScore;
    return TRUE;
  }
  
  // render particles
  void RenderParticles(void) {
    // no particles when not existing
    if (GetRenderType()!=CEntity::RT_MODEL || !ShowItemParticles()) {
      return;
    }

    // [Cecil] Rev: TFE keys
    if (m_kitType < KIT_BOOKOFWISDOM) {
      switch (m_kitType) {
        case KIT_ANKHWOOD:
        case KIT_ANKHROCK:
        case KIT_ANKHGOLD:
        case KIT_ANKHGOLDDUMMY:
        default:
          Particles_Stardust(this, 0.9f, 0.70f, PT_STAR08, 32);
          break;

        case KIT_AMONGOLD:
          Particles_Stardust(this, 1.6f, 1.00f, PT_STAR08, 32);
          break;
      }

    // TSE keys
    } else {
      switch (m_kitType) {
        case KIT_BOOKOFWISDOM:
        case KIT_CRYSTALSKULL:   
        case KIT_HOLYGRAIL:
          Particles_Stardust(this, 1.0f, 0.5f, PT_STAR08, 64);
          break;

        case KIT_JAGUARGOLDDUMMY:
          Particles_Stardust(this, 2.0f, 2.0f, PT_STAR08, 64);
          break;

        case KIT_CROSSWOODEN:
        case KIT_CROSSMETAL:   
        case KIT_CROSSGOLD:      
        case KIT_HAWKWINGS01DUMMY:
        case KIT_HAWKWINGS02DUMMY:
        case KIT_TABLESDUMMY:
        case KIT_WINGEDLION:
        case KIT_ELEPHANTGOLD:
        case KIT_STATUEHEAD01:
        case KIT_STATUEHEAD02:
        case KIT_STATUEHEAD03:
        case KIT_KINGSTATUE:
        default:
          Particles_Stardust(this, 1.5f, 1.1f, PT_STAR08, 64);
          break;
      }
    }
  }
  


  // set health properties depending on type
  void SetProperties(void)
  {
    m_fRespawnTime = (m_fCustomRespawnTime > 0) ? m_fCustomRespawnTime : 10.0f;
    m_strDescription = GetKeyName(m_kitType);

    switch (m_kitType) {
      // [Cecil] Rev: TFE keys
      case KIT_ANKHWOOD:      AddItem(MODEL_ANKHWOOD,     TEXTURE_ANKHWOOD,     0, 0, 0); break;
      case KIT_ANKHROCK:      AddItem(MODEL_ANKHROCK,     TEXTURE_ANKHROCK,     0, 0, 0); break;
      case KIT_ANKHGOLD:
      case KIT_ANKHGOLDDUMMY: AddItem(MODEL_ANKHGOLD,     TEXTURE_ANKHGOLD,     TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_SPHINX1:
      case KIT_SPHINX2:       AddItem(MODEL_SPHINXGOLD,   TEXTURE_SPHINXGOLD,   TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_AMONGOLD:      AddItem(MODEL_AMONGOLD,     TEXTURE_AMONGOLD,     TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_ELEMENTEARTH:  AddItem(MODEL_ELEMENTEARTH, TEXTURE_ELEMENTEARTH, TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_ELEMENTAIR:    AddItem(MODEL_ELEMENTAIR,   TEXTURE_ELEMENTAIR,   TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_ELEMENTWATER:  AddItem(MODEL_ELEMENTWATER, TEXTURE_ELEMENTWATER, TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_ELEMENTFIRE:   AddItem(MODEL_ELEMENTFIRE,  TEXTURE_ELEMENTFIRE,  TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_RAKEY:         AddItem(MODEL_RAKEY,        TEXTURE_RAKEY,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_MOONKEY:       AddItem(MODEL_MOONKEY,      TEXTURE_MOONKEY,      TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_EYEOFRA:       AddItem(MODEL_EYEOFRA,      TEXTURE_EYEOFRA,      TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_SCARAB:
      case KIT_SCARABDUMMY:   AddItem(MODEL_SCARAB,       TEXTURE_SCARAB,       TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_COBRA:         AddItem(MODEL_COBRA,        TEXTURE_COBRA,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_FEATHER:       AddItem(MODEL_FEATHER,      TEXTURE_FEATHER,      0, 0, 0); break;
      case KIT_HEART:         AddItem(MODEL_HEART,        TEXTURE_HEART,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;

      // TSE keys
      case KIT_BOOKOFWISDOM:     AddItem(MODEL_BOOKOFWISDOM,   TEXTURE_BOOKOFWISDOM,   0, 0, 0); break;
      case KIT_CROSSWOODEN:      AddItem(MODEL_CROSSWOODEN,    TEXTURE_CROSSWOODEN,    0, 0, 0); break;
      case KIT_CROSSMETAL:       AddItem(MODEL_CROSSMETAL,     TEXTURE_CROSSMETAL,     TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_CROSSGOLD:        AddItem(MODEL_CROSSGOLD,      TEXTURE_CROSSGOLD,      TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_JAGUARGOLDDUMMY:  AddItem(MODEL_JAGUARGOLD,     TEX_REFL_GOLD01,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_HAWKWINGS01DUMMY: AddItem(MODEL_HAWKWINGS01,    TEXTURE_HAWKWINGS,      0, 0, 0); break;
      case KIT_HAWKWINGS02DUMMY: AddItem(MODEL_HAWKWINGS02,    TEXTURE_HAWKWINGS,      0, 0, 0); break;
      case KIT_HOLYGRAIL:        AddItem(MODEL_HOLYGRAIL,      TEXTURE_HOLYGRAIL,      TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_TABLESDUMMY:      AddItem(MODEL_TABLESOFWISDOM, TEXTURE_TABLESOFWISDOM, TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_WINGEDLION:       AddItem(MODEL_WINGEDLION,     TEX_REFL_GOLD01,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_ELEPHANTGOLD:     AddItem(MODEL_ELEPHANTGOLD,   TEX_REFL_GOLD01,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_STATUEHEAD01:     AddItem(MODEL_STATUEHEAD01,   TEXTURE_STATUEHEAD01,   0, 0, 0); break;
      case KIT_STATUEHEAD02:     AddItem(MODEL_STATUEHEAD02,   TEXTURE_STATUEHEAD02,   0, 0, 0); break;
      case KIT_STATUEHEAD03:     AddItem(MODEL_STATUEHEAD03,   TEXTURE_STATUEHEAD03,   0, 0, 0); break;
      case KIT_KINGSTATUE:       AddItem(MODEL_KINGSTATUE,     TEX_REFL_GOLD01,        TEX_REFL_GOLD01, TEX_SPEC_MEDIUM, 0); break;
      case KIT_CRYSTALSKULL:     AddItem(MODEL_CRYSTALSKULL,   TEXTURE_CRYSTALSKULL,   TEX_REFL_METAL01, TEX_SPEC_MEDIUM, 0); break;
    }

    // Common flare
    switch (m_kitType) {
      case KIT_JAGUARGOLDDUMMY:
      case KIT_ELEPHANTGOLD:
      case KIT_AMONGOLD: // [Cecil] Rev: TFE key
        AddFlare(MODEL_FLARE, TEXTURE_FLARE, FLOAT3D(0.0f, 0.5f, 0.0f), FLOAT3D(2.0f, 2.0f, 0.3f));
        break;

      default:
        AddFlare(MODEL_FLARE, TEXTURE_FLARE, FLOAT3D(0.0f, 0.2f, 0.0f), FLOAT3D(1.0f, 1.0f, 0.3f));
        break;
    }

    // Common settings
    m_iSoundComponent = SOUND_KEY;
    StretchItem(FLOAT3D(1, 1, 1));

    GetModelObject()->StretchModel(FLOAT3D(m_fSize, m_fSize, m_fSize));

    // [Cecil] Rev: Bigger TFE keys
    if (m_kitType == KIT_SPHINX1 || m_kitType == KIT_SPHINX2 || m_kitType == KIT_AMONGOLD) {
      StretchItem(FLOAT3D(2, 2, 2) * m_fSize);
    }
  };

procedures:
  ItemCollected(EPass epass) : CItem::ItemCollected {
    ASSERT(epass.penOther!=NULL);

    // send key to entity
    EKey eKey;
    eKey.kitType = m_kitType;
    eKey.strCustomText = m_strCustomText; // [Cecil] Rev
    // if health is received
    if (epass.penOther->ReceiveItem(eKey)) {
      if(_pNetwork->IsPlayerLocal(epass.penOther)) {IFeel_PlayEffect("PU_Key");}
      // play the pickup sound
      m_soPick.Set3DParameters(50.0f, 1.0f, 1.0f, 1.0f);
      PlaySound(m_soPick, m_iSoundComponent, SOF_3D);
      m_fPickSoundLen = GetSoundLength(m_iSoundComponent);
      jump CItem::ItemReceived();
    }
    return;
  };

  Main() {
    Initialize();     // initialize base class
    StartModelAnim(ITEMHOLDER_ANIM_SMALLOSCILATION, AOF_LOOPING|AOF_NORESTART);
    ForceCollisionBoxIndexChange(ITEMHOLDER_COLLISION_BOX_BIG);
    SetProperties();  // set properties

    jump CItem::ItemLoop();
  };
};
