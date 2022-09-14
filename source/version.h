// ===========================================================================
// version.h
// - collection of version numbers
//
// Author:  Falei LUO <falei.luo@gmail.com>
//
// ===========================================================================

#ifndef DAVS2_VERSION_H
#define DAVS2_VERSION_H

// version number
#define VER_MAJOR         1     // major version number
#define VER_MINOR         6     // minor version number
#define VER_BUILD         0    // build number
#define VER_SHA_STR       "experimental"  // commit id

// stringify
#define _TOSTR(x)       #x            // stringify x
#define TOSTR(x)        _TOSTR(x)     // stringify x, perform macro expansion

// define XVERSION string
#define XVERSION        VER_MAJOR, VER_MINOR, VER_BUILD
#define XVERSION_STR    TOSTR(VER_MAJOR) "." TOSTR(VER_MINOR) "." TOSTR(VER_BUILD) " " VER_SHA_STR
#define XBUILD_TIME     "2020-09-23 10:10:51"

#endif // DAVS2_VERSION_H
