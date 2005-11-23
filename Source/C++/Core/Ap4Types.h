/*****************************************************************
|
|    AP4 - Shared Types
|
|    Copyright 2002-2005 Gilles Boccon-Gibod
|
|
|    This file is part of Bento4/AP4 (MP4 Atom Processing Library).
|
|    Unless you have obtained Bento4 under a difference license,
|    this version of Bento4 is Bento4|GPL.
|    Bento4|GPL is free software; you can redistribute it and/or modify
|    it under the terms of the GNU General Public License as published by
|    the Free Software Foundation; either version 2, or (at your option)
|    any later version.
|
|    Bento4|GPL is distributed in the hope that it will be useful,
|    but WITHOUT ANY WARRANTY; without even the implied warranty of
|    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|    GNU General Public License for more details.
|
|    You should have received a copy of the GNU General Public License
|    along with Bento4|GPL; see the file COPYING.  If not, write to the
|    Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
|    02111-1307, USA.
|
 ****************************************************************/

#ifndef _AP4_TYPES_H_
#define _AP4_TYPES_H_

/*----------------------------------------------------------------------
|       includes
+---------------------------------------------------------------------*/
#include "Ap4Config.h"

/*----------------------------------------------------------------------
|       types
+---------------------------------------------------------------------*/
typedef int            AP4_Result;
typedef unsigned long  AP4_Flags;
typedef unsigned long  AP4_Mask;
typedef unsigned long  AP4_Cardinal;
typedef unsigned long  AP4_Ordinal;
typedef unsigned long  AP4_TimeStamp;
typedef unsigned long  AP4_Duration;
typedef int            AP4_Coordinate;
typedef int            AP4_Distance;
typedef int            AP4_Integer;
typedef unsigned int   AP4_UI32;
typedef unsigned short AP4_UI16;
typedef unsigned char  AP4_UI08;
typedef float          AP4_Float;
//typedef std::string    AP4_String;
typedef unsigned char  AP4_Byte;

// the rest depends on whether the platform supports 64-bit integers
#if defined(AP4_CONFIG_HAVE_INT64)
    // we have 64-bit integers
    typedef unsigned long  AP4_Size;
    typedef unsigned long  AP4_Offset;
#else
    // use only 32-bit integers
    typedef unsigned long  AP4_Size;
    typedef unsigned long  AP4_Offset;
#endif

#ifndef NULL
#define NULL 0
#endif

#endif // _AP4_TYPES_H_
