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
    GLsizei glrt_iWidth;
    GLsizei glrt_iHeight;

    ULONG glrt_ulFields1[3]; // [Cecil] Rev: Unknown fields

    GLuint glrt_aTextures[2];

    ULONG glrt_ulField2; // [Cecil] Rev: Unknown field

  public:
    CGLRenderTarget(GLsizei iWidth, GLsizei iHeight);
    CGLRenderTarget(CDrawPort *pdp);

    ~CGLRenderTarget();

    CGLRenderTarget &operator=(const CGLRenderTarget &);

    void Init(GLsizei iWidth, GLsizei iHeight);
    void Reload(GLsizei iWidth, GLsizei iHeight);

    void Clear(void);
    void Create(void);

    void RenderToScreen(void);

    void Use(void);
    void Release(void);
};

class ENGINE_API CGLShader {
  public:
    CTFileName gl_fnmVertex; // Path to the vertex shader
    CTFileName gl_fnmFragment; // Path to the fragment shader

    ULONG gl_ulFields[5]; // [Cecil] Rev: Unknown fields

    GLint gl_iProjMatrixUniform;
    GLint gl_iViewMatrixUniform;

  public:
    CGLShader();
    CGLShader(const CGLShader &glOther);

    ~CGLShader();

    CGLShader &operator=(const CGLShader &glOther);

    // Load shader scripts
    void Load(const CTFileName &fnmVertexShader, const CTFileName &fnmFragmentShader);

    void Reload(void);
    void Unload(void);

    // Get uniform location by name
    GLint GetUniform(const char *strName);

    void SetUniformSampler(GLint iUnknown1, GLint iBindTexture, GLint iUnknown2);

    void SetUniform1i(GLint iLocation, GLint v0);
    void SetUniform1f(GLint iLocation, GLfloat v0);
    void SetUniform2f(GLint iLocation, GLfloat v0, GLfloat v1);
    void SetUniform3f(GLint iLocation, GLfloat v0, GLfloat v1, GLfloat v2);

    void SetUniformMat4(GLint iLocation, GLfloat *pfMatrix);
    void SetUniformProjectionMatrix(GLfloat *pfProjMatrix);
    void SetUniformViewMatrix(GLfloat *pfViewMatrix);

    void Use(void);
    void Release(void);
};

#endif
