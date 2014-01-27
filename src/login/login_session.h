/*
===========================================================================

  Copyright (c) 2010-2012 Darkstar Dev Teams

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/

  This file is part of DarkStar-server source code.

===========================================================================
*/

#ifndef _LOGIN_SESSION_H
#define _LOGIN_SESSION_H

#include "../common/cbasetypes.h"

#include <list>

struct login_session_data_t{
    // User's account name
    char login[17];

    // User's account id
	uint32 accid;

    // Something to do with multi-boxing
	uint32 serviced;

    // User's IP address
	uint32 client_addr;

    // User's port? Is this local or remote?
	uint16 client_port;

    // Zone server's IP
	uint32 servip;

    // User's logged in character's name
	char charname[17];

    // Associated file descriptor for authentication socket
	int32 login_fd;

    // Associated file descriptor for data socket
	int32 login_lobbydata_fd;

    // Associated file descriptor for view socket
	int32 login_lobbyview_fd;
};


typedef std::list<login_session_data_t*> login_sd_list_t;

// std::list of login_session_data_t
extern login_sd_list_t login_sd_list;

login_session_data_t* find_loginsd_byaccid(int32 accid);
login_session_data_t* find_loginsd_byip(uint32 ip);
void				  erase_loginsd_byaccid(uint32 accid);
void				  erase_loginsd(int32 loginfd);


#endif
