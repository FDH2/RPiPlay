/**
 *  This code originates from the Shairplay project
 *  https://github.con/juvoh/shairplay by Juho Vähä-Herttua and
 *  contributors (2011-2019), and is used under permission of that project's
 *  GNU Lesser General Public License (as described below) in the project:
 *
 *  RPiPlay - An open-source AirPlay mirroring server for Raspberry Pi
 *  Modifications (C) Florian Draschbacher and contributors (2019-2021)
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 */

#ifndef DNSSDINT_H
#define DNSSDINT_H

#define RAOP_TXTVERS "1"
#define RAOP_CH "2"             /* Audio channels: 2 */
#define RAOP_CN "0,1,2,3"           /* Audio codec: PCM, ALAC, AAC, AAC ELD */
#define RAOP_ET "0,3,5"           /* Encryption type: None, FairPlay, FairPlay SAPv2.5 */
#define RAOP_VV "2"
#define RAOP_FT "0x5A7FFEE6"
#define RAOP_RHD "5.6.0.0"
#define RAOP_SF "0x4"
#define RAOP_SV "false"
#define RAOP_DA "true"
#define RAOP_SR "44100"         /* Sample rate: 44100 */
#define RAOP_SS "16"            /* Sample size: 16 */
#define RAOP_VS "220.68"
#define RAOP_TP "UDP"           /* Transport protocol. Possible values: UDP or TCP or TCP,UDP */
#define RAOP_MD "0,1,2"         /* Metadata: text, artwork, progress */
#define RAOP_VN "65537"
#define RAOP_PK "b07727d6f6cd6e08b58ede525ec3cdeaa252ad9f683feb212ef8a205246554e7"

#define AIRPLAY_FEATURES "0x5A7FFEE6"
#define AIRPLAY_SRCVERS "220.68"
#define AIRPLAY_FLAGS "0x4"
#define AIRPLAY_VV "2"
#define AIRPLAY_PK "b07727d6f6cd6e08b58ede525ec3cdeaa252ad9f683feb212ef8a205246554e7"
#define AIRPLAY_PI "2e388006-13ba-4041-9a67-25dd4a43d536"

#endif
