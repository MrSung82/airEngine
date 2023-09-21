/*************************************************************************
 *                                                                       *
 * Air Game Engine                                                       *
 * Copyright (C) 2023 Air Engine Team:									 *
 * - Marat Sungatullin (aka mrsung, aka graveman);						 *
 * - ssamjoel;                                                           *
 * - CCleanerShot;														 *
 * - CeNIEi.                                                             *
 * All rights reserved.  Email:                                          *
 *                                                                       *
 * This project is free software; you can redistribute it and/or         *
 * modify it under the terms of EITHER:                                  *
 *   (1) The GNU Lesser General Public License as published by the Free  *
 *       Software Foundation; either version 2.1 of the License, or (at  *
 *       your option) any later version. The text of the GNU Lesser      *
 *       General Public License is included with this library in the     *
 *       file LICENSE.TXT.                                               *
 *   (2) The MIT license that is included with this library in           *
 *       the file LICENSE-MIT.TXT.                                       *
 *                                                                       *
 * This library is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the files    *
 * LICENSE.TXT and LICENSE-MIT.TXT for more details.                     *
 *                                                                       *
 *************************************************************************/

/*
 Purpose: dynamic array definition.
*/

#ifndef AIR_PLATFORM_BASETYPES_H_INCL
#define AIR_PLATFORM_BASETYPES_H_INCL

#ifdef __GNUC__
#include <cstdint>
#endif

namespace air
{
#ifdef __GNUC__
typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

typedef uint8_t Int8u;
typedef uint16_t Int16u;
typedef uint32_t Int32u;

#elif _MSC_VER
typedef __int8 Int8;
typedef __int16 Int16;
typedef __int32 Int32;

typedef unsigned __int8 Int8u;
typedef unsigned __int16 Int16u;
typedef unsigned __int32 Int32u;
#else
#   error "Unsupported compiler"
#endif // compilers detect end

// Size independent types
//----------------------------

typedef Int32u Size;
typedef Int32u Index;

constexpr Index kInvalidIndex = 0xffffffff; /// @todo use math.h or limits from CPP support library lated

} // end of air
#endif // AIR_PLATFORM_BASETYPES_H_INCL

