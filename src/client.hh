#ifndef CLIENT_H
#define CLIENT_H

/*
 * Copyright (C) 2022 m4sc
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <pulse/pulseaudio.h>
#include <pulse/ext-stream-restore.h>
#include <string>


/**
 * Class to store client information
 *
 * @see pa_client_info
 */
class Client{
public:
	u_int32_t index;
    std::string name;
    u_int32_t owner_module;
    std::string driver;

    Client(const pa_client_info* i);
};

#endif
