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

// [Cecil] NOTE: This file combines code from both TFE 1.05 and TSE 1.07 to enable support for both games at once!
// If you intend on porting some mod to make it compatible with both games, make sure to account for the changes here!

#include "StdAfx.h"
#include "LCDDrawing.h"

// [Cecil] Amount of worlds on the map and map texture index
#if SE1_GAME == SS_TSE
  #define CT_MAP_WORLDS 13
  #define MAP_ICON_INDEX 1 // 0 is the book texture
#else
  #define CT_MAP_WORLDS 15
  #define MAP_ICON_INDEX 0
#endif

static CTextureObject atoIcons[CT_MAP_WORLDS];
static CTextureObject _toPathDot;
static CTextureObject _toMapBcgLD;
static CTextureObject _toMapBcgLU;
static CTextureObject _toMapBcgRD;
static CTextureObject _toMapBcgRU;

#if SE1_GAME == SS_TSE

PIX aIconCoords[CT_MAP_WORLDS][2] = {
  {0, 0},      // 00: Last Episode
  {168, 351},  // 01: Palenque 01
  {42, 345},   // 02: Palenque 02
  {41, 263},   // 03: Teotihuacan 01
  {113, 300},  // 04: Teotihuacan 02
  {334, 328},  // 05: Teotihuacan 03
  {371, 187},  // 06: Ziggurat
  {265, 111},  // 07: Atrium
  {119, 172},  // 08: Gilgamesh
  {0, 145},    // 09: Babel
  {90, 30},    // 10: Citadel
  {171, 11},   // 11: Land of Damned
  {376, 0},    // 12: Cathedral
};

#define LASTEPISODE_BIT 0
#define PALENQUE01_BIT 1
#define PALENQUE02_BIT  2
#define TEOTIHUACAN01_BIT 3
#define TEOTIHUACAN02_BIT 4
#define TEOTIHUACAN03_BIT 5
#define ZIGGURAT_BIT 6
#define ATRIUM_BIT 7
#define GILGAMESH_BIT 8
#define BABEL_BIT 9
#define CITADEL_BIT 10
#define LOD_BIT 11
#define CATHEDRAL_BIT 12

INDEX  aPathPrevNextLevels[][2] = 
{
  {LASTEPISODE_BIT, PALENQUE01_BIT},      // 00
  {PALENQUE01_BIT, PALENQUE02_BIT},       // 01
  {PALENQUE02_BIT, TEOTIHUACAN01_BIT },   // 02
  {TEOTIHUACAN01_BIT, TEOTIHUACAN02_BIT}, // 03
  {TEOTIHUACAN02_BIT, TEOTIHUACAN03_BIT}, // 04
  {TEOTIHUACAN03_BIT, ZIGGURAT_BIT},      // 05
  {ZIGGURAT_BIT, ATRIUM_BIT},             // 06
  {ATRIUM_BIT, GILGAMESH_BIT},            // 07
  {GILGAMESH_BIT, BABEL_BIT},             // 08
  {BABEL_BIT, CITADEL_BIT},               // 09
  {CITADEL_BIT, LOD_BIT},                 // 10
  {LOD_BIT, CATHEDRAL_BIT},               // 11
};

PIX aPathDots[][10][2] = {
  // 00: Palenque01 - Palenque02
  {
    {-1,-1},
  },

  // 01: Palenque01 - Palenque02
  {
    {211,440},
    {193,447},
    {175,444},
    {163,434},
    {152,423},
    {139,418},
    {-1,-1},
  },

  // 02: Palenque02 - Teotihuacan01
  {
    {100,372},
    {102,363},
    {108,354},
    {113,345},
    {106,338},
    {-1,-1},
  },

  // 03: Teotihuacan01 - Teotihuacan02
  {
    {153,337},
    {166,341},
    {180,346},
    {194,342},
    {207,337},
    {-1,-1},
  },

  // 04: Teotihuacan02 - Teotihuacan03
  {
    {279,339},
    {287,347},
    {296,352},
    {307,365},
    {321,367},
    {335,362},
    {-1,-1},
  },

  // 05: Teotihuacan03 - Ziggurat
  {
    {-1,-1},
  },

  // 06: Ziggurat - Atrium
  {
    {412,285},
    {396,282},
    {383,273},
    {368,266},
    {354,264},
    {-1,-1},
  },

  // 07: Atrium - Gilgamesh
  {
    {276,255},
    {262,258},
    {248,253},
    {235,245},
    {222,240},
    {-1,-1},
  },

  // 08: Gilgamesh - Babel
  {
    {152,245},
    {136,248},
    {118,253},
    {100,251},
    {85,246},
    {69,243},
    {-1,-1},
  },

  // 09: Babel - Citadel
  {
    {-1,-1},
  },

  // 10: Citadel - Lod
  {
    {190,130},
    {204,126},
    {215,119},
    {232,116},
    {241,107},
    {-1,-1},
  },

  // 11: Lod - Cathedral
  {
    {330,108},
    {341,117},
    {353,126},
    {364,136},
    {377,146},
    {395,147},
    {-1,-1},
  },
};

#else

PIX aIconCoords[CT_MAP_WORLDS][2] = {
  {175, 404},  // 00: Hatshepsut
  {60, 381},   // 01: Sand Canyon
  {50, 300},   // 02: Ramses
  {171, 304},  // 03: Canyon
  {190, 225},  // 04: Waterfall
  {303, 305},  // 05: Oasis
  {361, 296},  // 06: Dunes
  {362, 222},  // 07: Suburbs
  {321, 211},  // 08: Sewers
  {316, 156},  // 09: Metropolis
  {194, 157},  // 10: Sphynx
  {160, 111},  // 11: Karnak
  {167, 61},   // 12: Luxor
  {50, 53},    // 13: Sacred
  {185, 0},    // 14: Pyramid
};

#define HATSHEPSUT_BIT 0
#define SAND_BIT 1
#define RAMSES_BIT 2
#define CANYON_BIT 3
#define WATERFALL_BIT 4
#define OASIS_BIT 5
#define DUNES_BIT 6
#define SUBURBS_BIT 7
#define SEWERS_BIT 8
#define METROPOLIS_BIT 9
#define SPHYNX_BIT 10
#define KARNAK_BIT 11
#define LUXOR_BIT 12
#define SACRED_BIT 13
#define PYRAMID_BIT 14

INDEX  aPathPrevNextLevels[][2] = {
  {HATSHEPSUT_BIT, SAND_BIT},     // 00
  {SAND_BIT, RAMSES_BIT},         // 01
  {RAMSES_BIT, CANYON_BIT},       // 02
  {CANYON_BIT, WATERFALL_BIT},    // 03
  {CANYON_BIT, OASIS_BIT},        // 04
  {WATERFALL_BIT, OASIS_BIT},     // 05
  {OASIS_BIT, DUNES_BIT},         // 06
  {DUNES_BIT, SUBURBS_BIT},       // 07
  {SUBURBS_BIT, SEWERS_BIT},      // 08
  {SEWERS_BIT, METROPOLIS_BIT},   // 09
  {METROPOLIS_BIT, SPHYNX_BIT},   // 10
  {SPHYNX_BIT, KARNAK_BIT},       // 11
  {KARNAK_BIT, LUXOR_BIT},        // 12
  {LUXOR_BIT, SACRED_BIT},        // 13
  {SACRED_BIT, PYRAMID_BIT},      // 14
  {LUXOR_BIT, PYRAMID_BIT},       // 15
};

PIX aPathDots[][10][2] = {
  // 00: Hatshepsut - Sand
  {
    {207,435},
    {196,440},
    {184,444},
    {172,443},
    {162,439},
    {156,432},
    {-1,-1},
  },

  // 01: Sand - Ramses
  {
    {115,388},
    {121,382},
    {128,377},
    {136,371},
    {-1,-1},
  },

  // 02: Ramses - Canyon
  {
    {148,368},
    {159,370},
    {169,374},
    {177,379},
    {187,381},
    {200,380},
    {211,376},
    {-1,-1},
  },

  // 03: Canyon - Waterfall
  {
    {273,339},
    {276,331},
    {278,322},
    {280,313},
    {279,305},
    {273,298},
    {266,293},
    {260,288},
    {-1,-1},
  },

  // 04: Canyon - Oasis
  {
    {288,360},
    {295,355},
    {302,360},
    {310,364},
    {319,367},
    {328,368},
    {-1,-1},
  },

  // 05: Waterfall - Oasis
  {
    {294,279},
    {302,282},
    {310,287},
    {316,294},
    {320,302},
    {323,310},
    {327,318},
    {332,326},
    {337,333},
    {-1,-1},
  },

  // 06: Oasis - Dunes
  {
    {384,360},
    {394,358},
    {405,353},
    {414,347},
    {421,339},
    {426,329},
    {-1,-1},
  },

  // 07: Dunes - Suburbs
  {
    {439,305},
    {434,300},
    {429,293},
    {-1,-1},
  },

  // 08: Suburbs - Sewers
  {
    {403,250},
    {402,244},
    {401,238},
    {398,232},
    {-1,-1},
  },

  // 09: Sewers - Metropolis
  {
    {372,266},
    {371,221},
    {370,216},
    {-1,-1},
  },

  // 10: Metropolis - Alley
  {
    {317,211},
    {310,215},
    {302,219},
    {293,222},
    {283,222},
    {273,221},
    {265,218},
    {-1,-1},
  },

  // 11: Alley - Karnak
  {
    {260,189},
    {259,181},
    {255,174},
    {249,168},
    {241,165},
    {233,164},
    {-1,-1},
  },

  // 12: Karnak - Luxor
  {
    {228,143},
    {228,136},
    {226,129},
    {221,123},
    {-1,-1},
  },

  // 13: Luxor - Sacred
  {
    {175,101},
    {169,106},
    {162,111},
    {154,113},
    {145,113},
    {136,112},
    {-1,-1},
  },

  // 14: Sacred - Pyramid
  {
    {126,59},
    {134,55},
    {142,52},
    {151,49},
    {160,47},
    {170,47},
    {179,48},
    {188,51},
    {-1,-1},
  },

  // 15: Luxor - Pyramid
  {
    {212,71},
    {217,66},
    {225,63},
    {234,63},
    {244,63},
    {253,62},
    {261,59},
    {-1,-1},
  },
};

#endif

BOOL ObtainMapData(void)
{
  try {
  #if SE1_GAME == SS_TSE
    atoIcons[ 0].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Book.tex"));
    atoIcons[ 1].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level00.tex"));
    atoIcons[ 2].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level01.tex"));
    atoIcons[ 3].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level02.tex"));
    atoIcons[ 4].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level03.tex"));
    atoIcons[ 5].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level04.tex"));
    atoIcons[ 6].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level05.tex"));
    atoIcons[ 7].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level06.tex"));
    atoIcons[ 8].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level07.tex"));
    atoIcons[ 9].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level08.tex"));
    atoIcons[10].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level09.tex"));
    atoIcons[11].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level10.tex"));
    atoIcons[12].SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\Level11.tex"));
    _toPathDot  .SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\PathDot.tex"));
    _toMapBcgLD .SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\MapBcgLD.tex"));
    _toMapBcgLU .SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\MapBcgLU.tex"));
    _toMapBcgRD .SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\MapBcgRD.tex"));
    _toMapBcgRU .SetData_t(CTFILENAME("TexturesMP\\Computer\\Map\\MapBcgRU.tex"));
  #else
    atoIcons[ 0].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level00.tex"));
    atoIcons[ 1].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level01.tex"));
    atoIcons[ 2].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level02.tex"));
    atoIcons[ 3].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level03.tex"));
    atoIcons[ 4].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level04.tex"));
    atoIcons[ 5].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level05.tex"));
    atoIcons[ 6].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level06.tex"));
    atoIcons[ 7].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level07.tex"));
    atoIcons[ 8].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level08.tex"));
    atoIcons[ 9].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level09.tex"));
    atoIcons[10].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level10.tex"));
    atoIcons[11].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level11.tex"));
    atoIcons[12].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level12.tex"));
    atoIcons[13].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level13.tex"));
    atoIcons[14].SetData_t(CTFILENAME("Textures\\Computer\\Map\\Level14.tex"));
    _toPathDot  .SetData_t(CTFILENAME("Textures\\Computer\\Map\\PathDot.tex"));
    _toMapBcgLD .SetData_t(CTFILENAME("Textures\\Computer\\Map\\MapBcgLD.tex"));
    _toMapBcgLU .SetData_t(CTFILENAME("Textures\\Computer\\Map\\MapBcgLU.tex"));
    _toMapBcgRD .SetData_t(CTFILENAME("Textures\\Computer\\Map\\MapBcgRD.tex"));
    _toMapBcgRU .SetData_t(CTFILENAME("Textures\\Computer\\Map\\MapBcgRU.tex"));
  #endif

    // force constant textures
    for (INDEX iIcon = 0; iIcon < CT_MAP_WORLDS; iIcon++) {
      ((CTextureData*)atoIcons[iIcon].GetData())->Force(TEX_CONSTANT);
    }
    ((CTextureData*)_toPathDot  .GetData())->Force(TEX_CONSTANT);
    ((CTextureData*)_toMapBcgLD .GetData())->Force(TEX_CONSTANT);
    ((CTextureData*)_toMapBcgLU .GetData())->Force(TEX_CONSTANT);
    ((CTextureData*)_toMapBcgRD .GetData())->Force(TEX_CONSTANT);
    ((CTextureData*)_toMapBcgRU .GetData())->Force(TEX_CONSTANT);
  } 
  catch (char *strError) {
    CPrintF("%s\n", strError);
    return FALSE;
  }
  return TRUE;
}

void ReleaseMapData(void)
{
  for (INDEX iIcon = 0; iIcon < CT_MAP_WORLDS; iIcon++) {
    atoIcons[iIcon].SetData(NULL);
  }
  _toPathDot.SetData(NULL);
  _toMapBcgLD.SetData(NULL);
  _toMapBcgLU.SetData(NULL);
  _toMapBcgRD.SetData(NULL);
  _toMapBcgRU.SetData(NULL);
}

void RenderMap( CDrawPort *pdp, ULONG ulLevelMask, CProgressHookInfo *pphi)
{
  if( !ObtainMapData())
  {
    ReleaseMapData();
    return;
  }

  PIX pixdpw = pdp->GetWidth();
  PIX pixdph = pdp->GetHeight();
  PIX imgw = 512;
  PIX imgh = 480;
  FLOAT fStretch = 0.25f;
  
  // determine max available picture stretch
  if( pixdpw>=imgw*2 && pixdph>=imgh*2) {
    fStretch = 2.0f;
  } else if(pixdpw>=imgw && pixdph>=imgh) {
    fStretch = 1.0f;
  } else if(pixdpw>=imgw/2 && pixdph>=imgh/2) {
    fStretch = 0.5f;
  } 

  // calculate LU offset so picture would be centerd in dp
  PIX pixSX = (pixdpw-imgw*fStretch)/2;
  PIX pixSY = Max( PIX((pixdph-imgh*fStretch)/2), PIX(0));
  
  PIX pixC1S = pixSX;                  // column 1 start pixel
  PIX pixR1S = pixSY;                  // raw 1 start pixel
  PIX pixC1E = pixSX+256*fStretch;     // column 1 end pixel
  PIX pixR1E = pixSY+256*fStretch;     // raw 1 end pixel
  PIX pixC2S = pixC1E-fStretch;        // column 2 start pixel
  PIX pixR2S = pixR1E-fStretch;        // raw 2 start pixel
  PIX pixC2E = pixC2S+256*fStretch;    // column 2 end pixel
  PIX pixR2E = pixR2S+256*fStretch;    // raw 2 end pixel

#if SE1_GAME == SS_TSE
  if (ulLevelMask == 0x00000001) {
    // render the book
    PIX pixX = aIconCoords[0][0]*fStretch+pixC1S;
    PIX pixY = aIconCoords[0][1]*fStretch+pixR1S;
    CTextureObject *pto = &atoIcons[0];
    pdp->PutTexture( pto, PIXaabbox2D( PIX2D(pixC1S,pixR1S), PIX2D(pixC2E,pixR2E)), C_WHITE|255);

  } else
#endif
  {
    // render pale map bcg
    pdp->PutTexture( &_toMapBcgLU, PIXaabbox2D( PIX2D(pixC1S,pixR1S), PIX2D(pixC1E,pixR1E)), C_WHITE|255);
    pdp->PutTexture( &_toMapBcgRU, PIXaabbox2D( PIX2D(pixC2S,pixR1S), PIX2D(pixC2E,pixR1E)), C_WHITE|255);
    pdp->PutTexture( &_toMapBcgLD, PIXaabbox2D( PIX2D(pixC1S,pixR2S), PIX2D(pixC1E,pixR2E)), C_WHITE|255);
    pdp->PutTexture( &_toMapBcgRD, PIXaabbox2D( PIX2D(pixC2S,pixR2S), PIX2D(pixC2E,pixR2E)), C_WHITE|255);

    // render icons
    for (INDEX iIcon = MAP_ICON_INDEX; iIcon < CT_MAP_WORLDS; iIcon++)
    {
      // if level's icon should be rendered
      if( ulLevelMask & (1UL<<iIcon))
      {
        PIX pixX = aIconCoords[iIcon][0]*fStretch+pixC1S;
        PIX pixY = aIconCoords[iIcon][1]*fStretch+pixR1S;
        CTextureObject *pto = &atoIcons[iIcon];
        PIX pixImgW = ((CTextureData *)pto->GetData())->GetPixWidth()*fStretch;
        PIX pixImgH = ((CTextureData *)pto->GetData())->GetPixHeight()*fStretch;
        pdp->PutTexture( pto, PIXaabbox2D( PIX2D(pixX, pixY), PIX2D(pixX+pixImgW, pixY+pixImgH)), C_WHITE|255);
      }
    }
  }
  
  // render paths
  for( INDEX iPath=0; iPath<ARRAYCOUNT(aPathPrevNextLevels); iPath++)
  {
    INDEX iPrevLevelBit = aPathPrevNextLevels[iPath][0];
    INDEX iNextLevelBit = aPathPrevNextLevels[iPath][1];
    
    // if path dots should be rendered:
    // if path src and dst levels were discovered and secret level isn't inbetween or hasn't been discovered
    if( ulLevelMask&(1UL<<iPrevLevelBit) &&
        ulLevelMask&(1UL<<iNextLevelBit) &&
        ((iNextLevelBit-iPrevLevelBit)==1 || !(ulLevelMask&(1UL<<(iNextLevelBit-1)))))
    {
      for( INDEX iDot=0; iDot<10; iDot++)
      {
        PIX pixDotX=pixC1S+aPathDots[iPath][iDot][0]*fStretch;
        PIX pixDotY=pixR1S+aPathDots[iPath][iDot][1]*fStretch;
        if(aPathDots[iPath][iDot][0]==-1) break;
        pdp->PutTexture( &_toPathDot, PIXaabbox2D( PIX2D(pixDotX, pixDotY), PIX2D(pixDotX+8*fStretch, pixDotY+8*fStretch)),
        #if SE1_GAME == SS_TSE
          C_BLACK|255);
        #else
          C_WHITE|255);
        #endif
      }
    }
  }

  if( pphi != NULL)
  {
    // set font
    pdp->SetFont( _pfdDisplayFont);
    pdp->SetTextScaling( fStretch);
    pdp->SetTextAspect( 1.0f);
    
    INDEX iPosX, iPosY;
    COLOR colText;

    // set coordinates and dot colors
    #if SE1_GAME == SS_TSE
      if (ulLevelMask == 0x00000001) {
        iPosX = 200;
        iPosY = 330;
        colText = 0x5c6a9aff;
      } else {
        iPosX = 395; 
        iPosY = 403;
        colText = 0xc87832ff;
      }

    #else
      iPosX = 116;
      iPosY = 220;
      colText = RGBToColor(200, 128, 56) | CT_OPAQUE;
    #endif

    PIX pixhtcx = pixC1S+iPosX*fStretch;
    PIX pixhtcy = pixR1S+iPosY*fStretch;

    pdp->PutTextC( pphi->phi_strDescription, pixhtcx, pixhtcy, colText);
    for( INDEX iProgresDot=0; iProgresDot<16; iProgresDot+=1)
    {
      #if SE1_GAME == SS_TSE
        PIX pixDotX = pixC1S + ((iPosX - 68) + iProgresDot * 8) * fStretch;
        PIX pixDotY = pixR1S + (iPosY + 19) * fStretch;

        COLOR colDot = colText|255;

        if (iProgresDot > pphi->phi_fCompleted * 16) {
          colDot = C_BLACK|64;
        }

        pdp->PutTexture(&_toPathDot, PIXaabbox2D(PIX2D(pixDotX, pixDotY),
          PIX2D(pixDotX + 2 + 8 * fStretch, pixDotY + 2 + 8 * fStretch)), C_BLACK|255);

        pdp->PutTexture(&_toPathDot, PIXaabbox2D(PIX2D(pixDotX, pixDotY),
          PIX2D(pixDotX + 8 * fStretch, pixDotY + 8 * fStretch)), colDot);

      #else
        PIX pixDotX = pixC1S + (48 + iProgresDot * 8) * fStretch;
        PIX pixDotY = pixR1S + 249 * fStretch;

        COLOR colDot = C_WHITE|255;

        if (iProgresDot > pphi->phi_fCompleted * 16) {
          colDot = C_WHITE|64;
        }

        pdp->PutTexture(&_toPathDot, PIXaabbox2D(PIX2D(pixDotX, pixDotY),
          PIX2D(pixDotX + 8 * fStretch, pixDotY + 8 * fStretch)), colDot);
      #endif
    }
  }

  // free textures used in map rendering
  ReleaseMapData();
}
