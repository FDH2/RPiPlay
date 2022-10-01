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

#ifndef FAIRPLAY_H
#define FAIRPLAY_H

#include "logger.h"

typedef struct fairplay_s fairplay_t;

fairplay_t *fairplay_init(logger_t *logger);
int fairplay_setup(fairplay_t *fp, const unsigned char req[16], unsigned char res[142]);
int fairplay_handshake(fairplay_t *fp, const unsigned char req[164], unsigned char res[32]);
int fairplay_decrypt(fairplay_t *fp, const unsigned char input[72], unsigned char output[16]);
void fairplay_destroy(fairplay_t *fp);

#endif
