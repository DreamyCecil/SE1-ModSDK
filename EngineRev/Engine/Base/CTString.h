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

#ifndef SE_INCL_CTSTRING_H
#define SE_INCL_CTSTRING_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif

#include <Engine/Base/Types.h>

/*
 * Main string class
 */
class ENGINE_API CTString {
public:
  char *str_String;         // pointer to memory holding the character string
public:
  /* Default constructor. */
  inline CTString(void);
  /* Copy constructor. */
  inline CTString(const CTString &strOriginal);
  /* Constructor from character string. */
  inline CTString(const char *pString);
  /* Constructor with formatting. */
  inline CTString(INDEX iDummy, const char *strFormat, ...);
  /* Destructor. */
  inline ~CTString();
  /* Clear the object. */
  inline void Clear(void);

  /* Conversion into character string. */
  inline operator const char*() const;

  /* Assignment. */
  inline CTString &operator=(const char *strCharString);
  inline CTString &operator=(const CTString &strOther);

  /* Check if string data is valid. */
  BOOL IsValid(void) const;

  // return length of the string
  inline INDEX Length(void) const { return strlen(str_String); };
  INDEX LengthNaked(void) const;

  // [Cecil] Rev: Length without decorations except for flashing
  INDEX LengthNakedFlash(void) const;

  // strip decorations from the string
  CTString Undecorated(void) const;

  // [Cecil] Rev: Strip decoration except for flashing
  CTString UndecoratedFlash(void) const;

  /* Find index of a substring in a string (returns -1 if not found). */
  INDEX FindSubstr(const CTString &strSub) const; // [Cecil] Rev: Marked as 'const'
  /* Replace a substring in a string. */
  BOOL ReplaceSubstr(const CTString &strSub, const CTString &strNewSub);

  // [Cecil] Rev: Replace specific characters in the string
  void ReplaceChars(char chOld, char chNew);

  /* Check if has given prefix */
  BOOL HasPrefix( const CTString &strPrefix) const;

  // [Cecil] Rev: Check if has given postfix
  BOOL HasPostfix(const CTString &strPostfix) const;

  /* Remove given prefix string from this string */
  BOOL RemovePrefix( const CTString &strPrefix);
  /* Trim the string to contain at most given number of characters. */
  INDEX TrimLeft(  INDEX ctCharacters);
  INDEX TrimRight( INDEX ctCharacters);
  /* Trim the string from spaces. */
  INDEX TrimSpacesLeft(void);
  INDEX TrimSpacesRight(void);
  /* Calcuate hashing value for the string. */
  ULONG GetHash(void) const;
  // retain only first line of the string
  void OnlyFirstLine(void);

  // [Cecil] Rev: Trim spaces from both sides
  INDEX TrimSpaces(void);

  // [Cecil] Rev: Trim slashes from both sides
  INDEX TrimSlashes(void);

  // [Cecil] Rev: Trim slashes from the left side
  INDEX TrimSlashesLeft(void);

  // [Cecil] Rev: Trim slashes from the right side
  INDEX TrimSlashesRight(void);

  // [Cecil] Rev: Remove line breaks
  void StripNewlines(void) const;

  // [Cecil] Rev: Convert to lowercase
  void ToLower(void);

  // [Cecil] Rev: Convert to uppercase
  void ToUpper(void);

  /* Equality comparison. */
  BOOL operator==(const CTString &strOther) const;
  BOOL operator==(const char *strOther) const;
  ENGINE_API friend BOOL operator==(const char *strThis, const CTString &strOther);
  /* Inequality comparison. */
  BOOL operator!=(const CTString &strOther) const;
  BOOL operator!=(const char *strOther) const;
  ENGINE_API friend BOOL operator!=(const char *strThis, const CTString &strOther);
  // wild card comparison (other string may contain wildcards)
  BOOL Matches(const CTString &strOther) const;
  BOOL Matches(const char *strOther) const;

  /* String concatenation. */
  CTString operator+(const CTString &strSecond) const;
  CTString &operator+=(const CTString &strSecond);
  ENGINE_API friend CTString operator+(const char *strFirst, const CTString &strSecond);

  // split string in two strings at specified position (char AT splitting position goes to str2)
  void Split( INDEX iPos, CTString &str1, CTString &str2);
  void InsertChar( INDEX iPos, char cChr); // insert char at position
  void DeleteChar( INDEX iPos); // delete char at position
  
  /* Throw exception */
  void Throw_t(void);

  /* Read from stream. */
  ENGINE_API friend CTStream &operator>>(CTStream &strmStream, CTString &strString);
  void ReadFromText_t(CTStream &strmStream, const CTString &strKeyword); // throw char *
  /* Write to stream. */
  ENGINE_API friend CTStream &operator<<(CTStream &strmStream, const CTString &strString);

  /* Load an entire text file into a string. */
  void Load_t(const class CTFileName &fnmFile);  // throw char *
  void LoadKeepCRLF_t(const class CTFileName &fnmFile);  // throw char *
  void ReadUntilEOF_t(CTStream &strmStream);  // throw char *
  /* Save an entire string into a text file. */
  void Save_t(const class CTFileName &fnmFile);  // throw char *
  void SaveKeepCRLF_t(const class CTFileName &fnmFile);  // throw char *

  // Print formatted to a string
  INDEX PrintF(const char *strFormat, ...);
  INDEX VPrintF(const char *strFormat, va_list arg);
  // Scan formatted from a string
  INDEX ScanF(const char *strFormat, ...);

  // [Cecil] Rev: Print formatted string into console
  void PrintFCon(const char *strFormat, ...);
  void ConVPrintF(const char *strFormat, va_list arg);

  // variable management functions
  void LoadVar(const CTFileName &fnmFile);
  void SaveVar(const CTFileName &fnmFile);
};


// general variable functions
ENGINE_API void LoadStringVar( const CTFileName &fnmVar, CTString &strVar);
ENGINE_API void SaveStringVar( const CTFileName &fnmVar, CTString &strVar);
ENGINE_API void LoadIntVar(    const CTFileName &fnmVar, INDEX &iVar);
ENGINE_API void SaveIntVar(    const CTFileName &fnmVar, INDEX &iVar);

ENGINE_API CTString RemoveSpecialCodes( const CTString &str);

// [Cecil] Rev: SHA-256 digesting algorithm
class ENGINE_API Sha256Digest {
  public:
    Sha256Digest(void);
    Sha256Digest &operator=(const Sha256Digest &);
};

// [Cecil] Rev: Get SHA-256 value from a string
ENGINE_API Sha256Digest GetSha256FromString(const CTString &str);

// [Cecil] Rev: Retrieve string from an URL
ENGINE_API CTString HttpGet(CTString strURL, BOOL, CTString strRequest);

// [Cecil] Rev: Sanitize XML string
ENGINE_API CTString SanitizeXML(CTString strXML);

#include <Engine/Base/CTString.inl>


#endif  /* include-once check. */

