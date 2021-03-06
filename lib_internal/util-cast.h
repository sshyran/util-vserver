// $Id$    --*- c -*--

// Copyright (C) 2004 Enrico Scholz <enrico.scholz@informatik.tu-chemnitz.de>
//  
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; version 2 of the License.
//  
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//  
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.


#ifndef H_UTILVSERVER_LIB_INTERNAL_UTIL_CAST_H
#define H_UTILVSERVER_LIB_INTERNAL_UTIL_CAST_H

#ifndef __cplusplus
#  define cAsT_(X)              (X))
#  define reinterpret_cast(X)   ((X) cAsT_
#  define static_cast(X)        ((X) cAsT_
#  define const_cast(X)         ((X) cAsT_
#else   /* __cplusplus */
#  define reinterpret_cast(X)   reinterpret_cast<X>
#  define static_cast(X)        static_cast<X>
#  define const_cast(X)         const_cast<X>
#endif

#endif	//  H_UTILVSERVER_LIB_INTERNAL_UTIL_CAST_H
