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

#ifndef SE1_REV_INCL_GLSHADER_H
#define SE1_REV_INCL_GLSHADER_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

class ENGINE_API CGLRenderTarget {
  public:
    CGLRenderTarget(BOOL, BOOL);
    CGLRenderTarget(CDrawPort *pdp);

    ~CGLRenderTarget();

    CGLRenderTarget &operator=(const CGLRenderTarget &);

    void Init(BOOL, BOOL);
    void Reload(BOOL, BOOL);

    void Clear(void);
    void Create(void);

    void RenderToScreen(void);

    void Use(void);
    void Release(void);
};

class ENGINE_API CGLShader {
  public:
    CGLShader();
    CGLShader(const CGLShader &glOther);

    ~CGLShader();

    CGLShader &operator=(const CGLShader &glOther);

    void Load(const CTFileName &fnmPath1, const CTFileName &fnmPath2);

    void Reload(void);
    void Unload(void);

    int GetUniform(const char *str);

    void SetUniformSampler(int iExtra1, int iExtra2, int iExtra3);

    void SetUniform1i(int i, int iExtra);
    void SetUniform1f(int i, float fExtra);
    void SetUniform2f(int i, float fExtra1, float fExtra2);
    void SetUniform3f(int i, float fExtra1, float fExtra2, float fExtra3);

    void SetUniformMat4(int i, float *pfExtra);
    void SetUniformProjectionMatrix(float *pfExtra);
    void SetUniformViewMatrix(float *pfExtra);

    void Use(void);
    void Release(void);
};

#endif
