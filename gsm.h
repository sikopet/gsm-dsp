/*
 * gsm.h
 *
 * TI C64x+ GSM signal processing
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

#ifndef _GSM_H_
#define _GSM_H_

int handle_msg(char *in_buf, int in_len, char *out_buf, int out_len);

#endif /*_GSM_H_ */
