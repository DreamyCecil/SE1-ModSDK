#pragma once

// amp11lib types
typedef signed char ALsint8;
typedef unsigned char ALuint8;
typedef signed short ALsint16;
typedef unsigned short ALuint16;
typedef signed int ALsint32;
typedef unsigned int ALuint32;
typedef signed int ALsize;
typedef int ALbool;
typedef float ALfloat;
#define ALtrue  1
#define ALfalse 0
typedef ALsint32 ALhandle;

// declare amp11lib function pointers
#define DLLFUNCTION(dll, output, name, inputs, params, required) \
  extern output (__stdcall *p##name) inputs
#include "al_functions.h"
#undef DLLFUNCTION
            
extern BOOL _bMPEGEnabled;

class CMPEGDecoder {
public:
  ALhandle mpd_hMainFile; // mainfile handle if using subfile
  ALhandle mpd_hFile;     // file handle
  ALhandle mpd_hDecoder;  // the decoder handle
  FLOAT mpd_fSecondsLen;  // length of sound in seconds
  WAVEFORMATEX mpd_wfeFormat; // format of sound

  // decoder that streams from file
  CMPEGDecoder(const CTFileName &fnmStream);
  ~CMPEGDecoder(void);
  void Clear(void);
  inline BOOL IsOpen(void) {
    return mpd_hDecoder!=0;
  }

  // decode a block of bytes
  inline INDEX Decode(void *pvDestBuffer, INDEX ctBytesToDecode)
  {
    // if decoder is invalid
    if (mpd_hDecoder==0) {
      // play all zeroes
      memset(pvDestBuffer, 0, ctBytesToDecode);
      return ctBytesToDecode;
    // if decoder is valid
    } else {
      // decode
      return palRead(mpd_hDecoder, pvDestBuffer, ctBytesToDecode);
    }
  }
  // reset decoder to start of sample
  void Reset(void);
};