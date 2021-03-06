/* base64.h
 * Base-64 conversion
 *
 * $Id: base64.h 47992 2013-03-01 23:53:11Z rbalint $
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef __BASE64_H__
#define __BASE64_H__

#include <epan/tvbuff.h>
#include "ws_symbol_export.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* In-place decoding of a base64 string. Resulting string is NULL terminated */
WS_DLL_PUBLIC
size_t epan_base64_decode(char *s);

extern tvbuff_t* base64_to_tvb(tvbuff_t *parent, const char *base64);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BASE64_H__ */
