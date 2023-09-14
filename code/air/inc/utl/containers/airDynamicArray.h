/*************************************************************************
 *                                                                       *
 * Air Game Engine                                                       *
 * Copyright (C) 2023 Marat Sungatullin (aka mrsung, aka graveman)  and  *
 * team: .                                                               *
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
#ifndef AIR_DYNAMICARRAY_H_INCL
#define AIR_DYNAMICARRAY_H_INCL

#include "platform/airBaseTypes.h"

namespace air
{
template<typename T, typename Allocator>
class DynamicArray
{
public:
    using size_type = Size;
private:
    void* m_pMemory{};
    size_type m_size{};
    size_type m_capacity{};
};

} // end of air

#endif // AIR_DYNAMICARRAY_H_INCL

