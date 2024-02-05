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

#include <Engine/Base/Memory.h>

// Invalid character index
const size_t CTStringEx::npos = size_t(-1);

// Assignment
inline CTStringEx &CTStringEx::operator=(const char *strCharString) {
  ASSERT(IsValid());
  ASSERT(strCharString!=NULL);

  // Make a copy of character string
  char *strCopy = StringDuplicate(strCharString);

  FreeMemory(str_String);
  str_String = strCopy;

  return *this;
};

// Replace specific character in the entire string
inline void CTStringEx::ReplaceChar(char chOld, char chNew) {
  char *str = str_String;

  while (*str != '\0') {
    if (*str == chOld) {
      *str = chNew;
    }
    ++str;
  }
};

// Assign a new string consisting of a specific character
inline void CTStringEx::Fill(size_t ct, char ch) {
  ASSERT(IsValid());

  // Recreate the string array
  FreeMemory(str_String);
  str_String = (char *)AllocMemory(ct + 1);

  // Set every character and add a null terminator
  memset(str_String, ch, ct);
  str_String[ct] = '\0';
};

// Convert all characters to lowercase
inline CTStringEx CTStringEx::ToLower(void) const {
  CTStringEx strCopy(*this);
  INDEX i = Length();

  while (--i >= 0) {
    strCopy.Data()[i] = tolower(strCopy[i]);
  }

  return strCopy;
};

// Convert all characters to uppercase
inline CTStringEx CTStringEx::ToUpper(void) const {
  CTStringEx strCopy(*this);
  INDEX i = Length();

  while (--i >= 0) {
    strCopy.Data()[i] = toupper(strCopy[i]);
  }

  return strCopy;
};

// Read normal string or a filename
inline void CTStringEx::ReadFromText_t(CTStream &strmStream, const CTString &strKeyword, BOOL bFileName) {
  ASSERT(IsValid());

  // Keyword must be present
  strmStream.ExpectKeyword_t(strKeyword);

  // Expect dependency keyword before the filename
  if (bFileName) {
    char strTag[] = "_FNM "; strTag[0] = 'T';
    strmStream.ExpectKeyword_t(strTag);
  }

  // Read the string from the file
  char str[1024];
  strmStream.GetLine_t(str, sizeof(str));

  *this = str;
};

// Erase a portion of characters from the middle of the string
inline CTStringEx &CTStringEx::Erase(size_t iFrom, size_t ct) {
  // Nothing to erase
  if (ct == 0) return *this;

  // Erase past the length
  const size_t iLen = Length();
  if (iFrom >= iLen) return *this;

  // Simple cutoff if past the end
  if (ct > iLen - iFrom) {
    str_String[iFrom] = '\0';
    return *this;
  }

  // Move the rest of the string to the current position, including null terminator
  char *pchStart = str_String + iFrom;
  size_t ctRest = (iLen - ct - iFrom) + 1;

  memmove(pchStart, pchStart + ct, ctRest);
  return *this;
};

// Find substring in a string
inline const char *CTStringEx::GetSubstr(const char *strSub, size_t iFrom) const {
  ASSERT(iFrom < Length());

  // Inline implementation of strstr()
  const size_t ct = strlen(strSub);
  if (ct == 0) return NULL; // Empty substring

  const char *pch = str_String + iFrom;

  while (*pch != '\0') {
    if (!memcmp(pch, strSub, ct)) {
      return pch;
    }
    ++pch;
  }

  return NULL;
};

// Find character in a string
inline char *CTStringEx::GetChar(char ch, size_t iFrom) const {
  ASSERT(iFrom < Length());

  // Inline implementation of strchr()
  char *pch = str_String + iFrom;

  while (*pch != '\0') {
    if (*pch == ch) {
      return pch;
    }
    ++pch;
  }

  return NULL;
};

// Find substring position in a string
inline size_t CTStringEx::Find(const char *strSub, size_t iFrom) const {
  const char *str = GetSubstr(strSub, iFrom);
  if (str == NULL) return npos;

  return str - str_String;
};

// Find character position in a string
inline size_t CTStringEx::Find(char ch, size_t iFrom) const {
  const char *pch = GetChar(ch, iFrom);
  if (pch == NULL) return npos;

  return pch - str_String;
};

// Find last substring position in a string
inline size_t CTStringEx::RFind(const char *strSub, size_t iFrom) const {
  const size_t ct = strlen(strSub);
  if (ct == 0) return npos; // Empty substring

  const size_t iLen = Length();
  if (iLen < ct) return npos; // Substring wouldn't fit

  iFrom = ClampUp(iFrom, iLen - ct);

  do {
    if (!memcmp(str_String + iFrom, strSub, ct)) {
      return iFrom;
    }
  } while (iFrom-- != 0);

  return npos;
};

// Find last character position in a string
inline size_t CTStringEx::RFind(char ch, size_t iFrom) const {
  const size_t iLen = Length();
  if (iLen == 0) return npos;

  iFrom = ClampUp(iFrom, iLen - 1);

  do {
    if (str_String[iFrom] == ch) {
      return iFrom;
    }
  } while (iFrom-- != 0);

  return npos;
};

// Find first character equal to one of the characters
inline size_t CTStringEx::FindFirstOf(const char *str, size_t iFrom) const {
  // No characters in either string
  if (*str == '\0') return npos;

  const size_t iLen = Length();
  if (iLen == 0) return npos;

  char *pch = str_String + ClampUp(iFrom, iLen);

  while (*pch != '\0') {
    // Check every character
    const char *pchCheck = str;

    while (*pchCheck != '\0') {
      if (*pch == *pchCheck) {
        return pch - str_String;
      }
      ++pchCheck;
    }
    ++pch;
  }

  return npos;
};

// Find first character equal to none of the characters
inline size_t CTStringEx::FindFirstNotOf(const char *str, size_t iFrom) const {
  // No characters in either string
  if (*str == '\0') return npos;

  const size_t iLen = Length();
  if (iLen == 0) return npos;

  char *pch = str_String + ClampUp(iFrom, iLen);

  while (*pch != '\0') {
    // Check every character
    BOOL bFound = FALSE;
    const char *pchCheck = str;

    while (*pchCheck != '\0') {
      if (*pch == *pchCheck) {
        bFound = TRUE;
        break;
      }
      ++pchCheck;
    }

    // None found
    if (!bFound) return pch - str_String;

    ++pch;
  }

  return npos;
};

// Find last character equal to one of the characters
inline size_t CTStringEx::FindLastOf(const char *str, size_t iFrom) const {
  const size_t iLen = Length();
  if (iLen == 0) return npos;

  iFrom = ClampUp(iFrom, iLen - 1);

  do {
    // Check every character
    const char *pchCheck = str;

    while (*pchCheck != '\0') {
      if (str_String[iFrom] == *pchCheck) {
        return iFrom;
      }
      ++pchCheck;
    }
  } while (iFrom-- != 0);

  return npos;
};

// Find last character equal to none of the characters
inline size_t CTStringEx::FindLastNotOf(const char *str, size_t iFrom) const {
  const size_t iLen = Length();
  if (iLen == 0) return npos;

  iFrom = ClampUp(iFrom, iLen - 1);

  do {
    BOOL bFound = FALSE;

    // Check every character
    const char *pchCheck = str;

    while (*pchCheck != '\0') {
      if (str_String[iFrom] == *pchCheck) {
        bFound = TRUE;
        break;
      }

      ++pchCheck;
    }

    // None found
    if (!bFound) return iFrom;

  } while (iFrom-- != 0);

  return npos;
};

// Set path to the absolute path, taking \.. and /.. into account
inline void CTStringEx::SetAbsolutePath(void) {
  // Collect path parts
  CTStringEx strRemaining(*this);
  CStaticStackArray<CTString> astrParts;

  INDEX iSlashPos = strRemaining.FindFirstOf("/\\");
  if (iSlashPos == npos) return; // Invalid path

  while (TRUE) {
    CTString &strBeforeSlash = astrParts.Push();
    CTString strAfterSlash;
    strRemaining.Split(iSlashPos, strBeforeSlash, strAfterSlash);
    strAfterSlash.TrimLeft(strAfterSlash.Length() - 1);
    strRemaining = strAfterSlash;

    iSlashPos = strRemaining.FindFirstOf("/\\");

    if (iSlashPos == npos) {
      astrParts.Push() = strRemaining;
      break;
    }
  }

  // Remove certain path parts
  INDEX iPart;

  for (iPart = 0; iPart < astrParts.Count(); ++iPart) {
    if (CTString("..") != astrParts[iPart]) {
      continue;
    }

    if (iPart == 0) return; // Invalid path

    // Remove ordered
    CStaticStackArray<CTString> astrShrinked;
    astrShrinked.Push(astrParts.Count() - 2);
    astrShrinked.PopAll();

    for (INDEX iCopiedPart = 0; iCopiedPart < astrParts.Count(); ++iCopiedPart) {
      if ((iCopiedPart != iPart - 1) && (iCopiedPart != iPart)) {
        astrShrinked.Push() = astrParts[iCopiedPart];
      }
    }

    astrParts.MoveArray(astrShrinked);
    iPart -= 2;
  }

  // Set new content
  strRemaining.Clear();

  for (iPart = 0; iPart < astrParts.Count(); ++iPart) {
    strRemaining += astrParts[iPart];

    if (iPart < astrParts.Count() - 1) {
      strRemaining += "\\";
    }
  }

  *this = strRemaining;
};

// Remove application path from a file name
inline BOOL CTStringEx::RemoveApplicationPath_t(void) {
  CTStringEx fnmApp = _fnmApplicationPath;
  fnmApp.SetAbsolutePath();

  // Remove the path string from beginning of the string
  BOOL bIsRelative = RemovePrefix(fnmApp);

  if (_fnmMod != "") {
    RemovePrefix(_fnmApplicationPath + _fnmMod);
  }

  return bIsRelative;
};
