#ifndef SE_INCL_SHADER_H
#define SE_INCL_SHADER_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Base/CTString.h>
#include <Engine/Base/Serial.h>
#include <Engine/Math/Vector.h>
#include <Engine/Graphics/GfxLibrary.h>

struct ShaderDesc
{
  CStaticArray<class CTString> sd_astrTextureNames;
  CStaticArray<class CTString> sd_astrTexCoordNames;
  CStaticArray<class CTString> sd_astrColorNames;
  CStaticArray<class CTString> sd_astrFloatNames;
  CTString sd_strShaderInfo;
};

struct ShaderParams
{
  CStaticArray<INDEX> sp_aiTextureIDs;
  CStaticArray<INDEX> sp_aiTexCoordsIndex;
  CStaticArray<COLOR> sp_acolColors;
  CStaticArray<FLOAT> sp_afFloats;
};

struct ShaderLight
{
  FLOAT3D sl_vDirection;
  GFXColor sl_colAmbient;
  GFXColor sl_colDiffuse;
};

class ENGINE_API CShader : public CSerial
{
public:
  CShader();
  ~CShader();
  
  HINSTANCE hLibrary;
  void (*ShaderFunc)(void);
  void (*GetShaderDesc)(ShaderDesc &shDesc);

  void Read_t( CTStream *istrFile); // throw char *
  void Write_t( CTStream *ostrFile); // throw char *
  void Clear(void);
}; 

ENGINE_API void shaSetVertexArray(GFXVertex4 *paVertices,INDEX ctVertices);
ENGINE_API void shaSetNormalArray(GFXNormal *paNormals);
ENGINE_API void shaSetIndices(INDEX *paIndices,INDEX ctIndices);
ENGINE_API void shaSetTextureArray(CTextureData **paTextureData, INDEX ctTextures);
ENGINE_API void shaSetTexCoordsArray(GFXTexCoord *paTexCoords, INDEX ctTexCoors);
ENGINE_API void shaSetColorArray(COLOR *paColors, INDEX ctColors);
ENGINE_API void shaSetFloatArray(FLOAT *paFloats, INDEX ctFloats);
ENGINE_API void shaSetLightArray(ShaderLight *paLights, INDEX ctLights);

ENGINE_API void shaRender();
ENGINE_API void shaBegin(CShader *pShader);
ENGINE_API void shaEnd();
ENGINE_API void shaClean();

ENGINE_API void shaSetTexCoords(INDEX iTexCoords);
ENGINE_API void shaSetTexture(INDEX iTexture);
ENGINE_API void shaSetColor(INDEX icolIndex);
ENGINE_API void shaCalculateLight(void);
ENGINE_API void shaCullFace(GfxCull eFace);
ENGINE_API void shaBlendMode(GfxBlend eSrc, GfxBlend eDst);
ENGINE_API void shaEnableBlend(BOOL bEnable);
ENGINE_API void shaEnableAlphaTest(BOOL bEnable);
ENGINE_API void shaEnableDepthTest(BOOL bEnable);
ENGINE_API void shaEnableDepthWrite(BOOL bEnable);
ENGINE_API void shaEnableLights(BOOL bEnable);
ENGINE_API void shaDepthFunc(GfxComp eComp);

ENGINE_API FLOAT shaGetFloat(INDEX iFloatIndex);
ENGINE_API ShaderLight &shaGetLight(INDEX iLightIndex);

ENGINE_API BOOL shaGetVertices(GFXVertex4 **paNewVtx,GFXVertex4 **paOldVtx,INDEX &ctVtx,BOOL bNewArray);
ENGINE_API void shaGetTexCoords(GFXTexCoord **paNewTexCoords,GFXTexCoord **paOldTexCoords,INDEX &ctTexCoords);


#endif  /* include-once check. */

