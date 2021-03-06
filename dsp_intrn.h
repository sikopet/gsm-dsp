/*
 * dsp_intrn.h
 *
 * TI C64x+ GSM signal processing intrinsics
 *
 * Copyright (C) 2012 Thomas Tsou <ttsou@vt.edu>
 *
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _DSP_INTRN_H_
#define _DSP_INTRN_H_

#define INTRN_CMPYR
#define INTRN_SADD

#ifdef INTRN_DOTP2
#  ifdef INTRN_SADD
#    undef INTRN_SADD
#  endif
#endif

#endif /* _DSP_INTRN_H_ */
