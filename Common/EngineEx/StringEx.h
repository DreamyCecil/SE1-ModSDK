/* Copyright (c) 2024 Dreamy Cecil
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

#ifndef CECIL_INCL_ENGINEEX_STRINGEX_H
#define CECIL_INCL_ENGINEEX_STRINGEX_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Base/CTString.h>
#include <Engine/Base/FileName.h>

// Vanilla string with extended functionality that replaces both CTString and CTFileName
class CTStringEx : public CTString {
  public:
    static const size_t npos; // Invalid character index

  public:
    // Default constructor
    inline CTStringEx(void) {
      str_String = StringDuplicate("");
    };

    // Copy constructor
    inline CTStringEx(const CTString &strOriginal) {
      ASSERT(strOriginal.IsValid());
      str_String = StringDuplicate(strOriginal.str_String);
    };

    // Constructor from character string with optional offset and amount of characters
    inline CTStringEx(const char *strCharString, size_t iFrom = 0, size_t ct = npos) {
      ASSERT(strCharString != NULL);
      str_String = StringDuplicate(strCharString + iFrom);

      if (ct < Length()) {
        str_String[ct] = '\0';
      }
    };

    // Constructor with formatting
    inline CTStringEx(INDEX iDummy, const char *strFormat, ...) {
      str_String = StringDuplicate("");
      va_list arg;
      va_start(arg, strFormat);
      VPrintF(strFormat, arg);
    };

    // Destructor
    inline ~CTStringEx() {
      ASSERT(IsValid());
      FreeMemory(str_String);
    };

    // Conversion into character string
    inline operator const char *() const {
      ASSERT(IsValid());
      return str_String;
    };

    // Conversion into filename
    inline operator CTFileName() const {
      return CTString(*this);
    };

    // Assignment
    inline CTStringEx &operator=(const char *strCharString);

    inline CTStringEx &operator=(const CTString &strOther) {
      return operator=(strOther.str_String);
    };

    // Replace specific character in the entire string
    void ReplaceChar(char chOld, char chNew);

    // Read normal string or a filename
    void ReadFromText_t(CTStream &strmStream, const CTString &strKeyword, BOOL bFileName = FALSE);

  // Extra methods
  public:

    // Retrieve string data
    inline char *Data(void) {
      return str_String;
    };

    // Retrieve constant string data
    inline const char *ConstData(void) const {
      return str_String;
    };

    // Assign a new string consisting of a specific character
    inline void Fill(size_t ct, char ch);

    // Convert all characters to lowercase
    CTStringEx ToLower(void) const;

    // Convert all characters to uppercase
    CTStringEx ToUpper(void) const;

    // Erase a portion of characters from the middle of the string
    CTStringEx &Erase(size_t iFrom, size_t ct = npos);

    // Extract substring from the string
    __forceinline CTStringEx Substr(size_t iFrom, size_t ct = npos) const {
      return CTStringEx(str_String, iFrom, ct);
    };

  // New methods for searching
  public:

    // Find substring within the string
    inline const char *GetSubstr(const char *strSub, size_t iFrom = 0) const;

    // Find character within the string
    inline char *GetChar(char ch, size_t iFrom = 0) const;

    // Find substring position in a string
    inline size_t Find(const char *strSub, size_t iFrom = 0) const;

    // Find character position in a string
    inline size_t Find(char ch, size_t iFrom = 0) const;

    // Find last substring position in a string
    inline size_t RFind(const char *strSub, size_t iFrom = npos) const;

    // Find last character position in a string
    inline size_t RFind(char ch, size_t iFrom = npos) const;

    // Find first occurrence of any of the characters
    inline size_t FindFirstOf(const char *str, size_t iFrom = 0) const;

    // Find first absence of any of the characters
    inline size_t FindFirstNotOf(const char *str, size_t iFrom = 0) const;

    // Find last occurrence of any of the characters
    inline size_t FindLastOf(const char *str, size_t iFrom = npos) const;

    // Find last absence of any of the characters
    inline size_t FindLastNotOf(const char *str, size_t iFrom = npos) const;

  // Alternatives to methods from CTFileName
  public:

    // Remove directory from the filename
    __forceinline CTStringEx RemoveDir(void) const {
      return Substr(FindLastOf("/\\") + 1);
    };

    // Remove extension from the filename (like CTFileName::NoExt)
    inline CTStringEx RemoveExt(void) const {
      const size_t iPeriodPos = RFind('.'); // Faster than FindLastOf(".")
      const size_t iLastDir = FindLastOf("/\\");

      // No period found or it's before the last directory
      if (iPeriodPos == npos || (iLastDir != npos && iPeriodPos < iLastDir)) {
        return *this;
      }

      return Substr(0, iPeriodPos);
    };

    // Get name of the file (like CTFileName::FileName)
    __forceinline CTStringEx GetFileName(void) const {
      return RemoveDir().RemoveExt();
    };

    // Get path to the file (like CTFileName::FileDir)
    __forceinline CTStringEx GetFileDir(void) const {
      return Substr(0, FindLastOf("/\\") + 1);
    };

    // Get file extension with the period (like CTFileName::FileExt)
    inline CTStringEx GetFileExt(void) const {
      const size_t iPeriodPos = RFind('.'); // Faster than FindLastOf(".")
      const size_t iLastDir = FindLastOf("/\\");

      // No period found or it's before the last directory
      if (iPeriodPos == npos || (iLastDir != npos && iPeriodPos < iLastDir)) {
        return "";
      }

      return Substr(iPeriodPos);
    };

    // Go up the path until a certain directory
    size_t GoUpUntilDir(const CTStringEx &strDirName) const {
      // Convert every string in the same case
      CTStringEx strPath = ToLower();
      CTStringEx strDir = strDirName.ToLower();

      // Make consistent slashes
      strPath.ReplaceChar('\\', '/');

      // Absolute path, e.g. "abc/strDir/qwe"
      size_t iDir = strPath.RFind("/" + strDir + "/");
      if (iDir != npos) return iDir + 1;

      // Relative down to the desired directory, e.g. "abc/qwe/strDir"
      iDir = strPath.RFind("/" + strDir) + 1;
      if (iDir == strPath.Length() - strDir.Length()) return iDir;

      // Relative up to the desired directory, e.g. "strDir/abc/qwe"
      iDir = strPath.Find(strDir + "/");
      if (iDir == 0) return 0;

      // No extra directories up or down the path, must be the same
      if (strPath == strDir) return 0;

      return npos;
    };

  // Migrated methods from CTFileName
  public:

    // Set path to the absolute path, taking \.. and /.. into account
    inline void SetAbsolutePath(void);

    // Remove application path from a file name
    inline BOOL RemoveApplicationPath_t(void);

    // Filename is its own name (used for storing in nametable)
    inline const CTStringEx &GetName(void) const {
      return *this;
    };
};

#include "StringEx.inl"

#endif
