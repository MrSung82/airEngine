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
 Purpose: allocator traits & other memory relative utils like in STL.

 Changes (for serious modifications only): 
 --------
 09-15-2023: mrsung
 Description: file h.b. created
 -----------
 Changes end
*/


#ifndef AIR_MEMORY_H_INCL
#define AIR_MEMORY_H_INCL

#include <memory>

#include "platform/airBaseTypes.h"

namespace air
{
	template <typename T>
	class DefaultMemoryAllocator
	{
	public:
		using VoidPointer = void*;
		using ConstVoidPointer = const void*;
		using SizeType = Size;
		using DifferenceType = std::ptrdiff_t;

		DefaultAllocator() = default;

		VoidPointer allocate(SizeType nBytes, Int32* pErrorCode = nullptr)
		{
			return VoidPointer();
		}

		void deallocate(VoidPointer p, Int32* pErrorCode = nullptr)
		{

		}

		VoidPointer reallocate(VoidPointer pOld, SizeType nBytes, Int32* pErrorCode = nullptr)
		{
			return VoidPointer();
		}
	};

	template<typename TMemoryAllocator>
	struct MemoryAllocatorTraits
	{
	private:
		template<typename TMemoryAllocator>
		using GetVoidPointerType = typename TMemoryAllocator::VoidPointer;

		template<typename TMemoryAllocator>
		using GetSizeType = typename TMemoryAllocator::SizeType;
	public:


		using VoidPointer = DoTypeFunctionResult<void*, GetVoidPointerType, TMemoryAllocator>;
		using SizeType = DoTypeFunctionResult<Size, GetSizeType, TMemoryAllocator>;

		VoidPointer allocate(TMemoryAllocator& alcr, SizeType nBytes, Int32* pErrorCode = nullptr)
		{
			return VoidPointer();
		}

		void deallocate(TMemoryAllocator& alcr, VoidPointer p, Int32* pErrorCode = nullptr)
		{

		}

		VoidPointer reallocate(TMemoryAllocator& alcr, VoidPointer pOld, SizeType nBytes, Int32* pErrorCode = nullptr)
		{
			return VoidPointer();
		}
	};

} // end of air

#endif // AIR_MEMORY_H_INCL

