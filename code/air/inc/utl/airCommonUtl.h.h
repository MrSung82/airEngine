/*************************************************************************
 *                                                                       *
 * Air Game Engine                                                       *
 * Copyright (C) 2023 Marat Sungatullin (aka mrsung, aka graveman)  and  *
 * team: ssamjoel.                                                               *
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
  Purpose: common utils.

  Changes (for serious modifications only):
  --------
  09-15-2023: mrsung
  Description: file h.b. created.
  -----------
  Changes end
 */


#ifndef AIR_UTL_COMMONUTL_H_INCL
#define AIR_UTL_COMMONUTL_H_INCL

#include "utl/airTypeTraits.h"

namespace air
{
    template<typename...> using Void = void;

    template<typename TDefaultResult, 
        typename TSfinaeVoid,
        template<typename...> class TFunction,
        typename... TArgs>
    struct DoTypeFunctionImpl : public FalseType
    {
        using Result = TDefaultResult;
    };

    template<typename TDefaultResult,
        template<typename...> class TFunction,
        typename... TArgs>
    struct DoTypeFunctionImpl<TDefaultResult, Void<TFunction<TArgs...>>, TFunction, TArgs...> : public TrueType
    {
        using Result = TFunction<TArgs...>;
    };

    template<typename TDefaultResult,
        template<typename...> class TFunction,
        typename... TArgs>
    using DoTypeFunction = DoTypeFunctionImpl<TDefaultResult, void, TFunction, TArgs...>;


    template<typename TDefaultResult, 
        template<typename...> class TFunction,
        typename... TArgs>
    using DoTypeFunctionResult = typename DoTypeFunction<TDefaultResult, TFunction, TArgs...>::Result;

} // end of air

#endif // AIR_UTL_COMMONUTL_H_INCL

