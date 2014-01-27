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

#ifndef _LOGIN_H
#define _LOGIN_H

#include "../common/cbasetypes.h"

#include <list>

#include "../common/kernel.h"
#include "../common/socket.h"
#include "../common/sql.h"
#include "../common/mmo.h"

#include "login_session.h"

extern lan_config_t lan_config;

struct login_config_t               // configuration structure for lobby server
{
	uint16 LoginAuthPort;           // authentification port of login server      ->  54231
	uint32 LoginAuthIp;             // authentification ip of login server	      -> INADDR_ANY
	
	uint16 LobbyDataPort;           // data port of login server    -> 54230
	uint32 LobbyDataIp;             // data ip of login server      -> INADDR_ANY
	
	uint16 LobbyViewPort;           // view port of login server    -> 54001
	uint32 LobbyViewIp;             // view ip of login server      -> INADDR_ANY

    uint16 expansions;              // server's supported game expansions

    const char* servername;         // server's name
	
	const char* mysql_host;			// mysql addr     -> localhost:3306
	uint16      mysql_port;			// mysql port     -> 3306
	const char* mysql_login;        // mysql login    -> default root
	const char* mysql_password;     // mysql pass     -> default NULL
	const char* mysql_database;		// mysql database -> default dspdb
};

extern login_config_t login_config;

extern Sql_t *SqlHandle;
//////////////////////////////////////////////////////////

void login_helpscreen(int32 flag);              // print commandline usage help to screen [venom]
void login_versionscreen(int32 flag);           // print login server's version to screen [venom]

int32 login_config_read(const char *cfgName);   // load configuration file cfgName into login_config [venom]
int32 login_config_default();                   // load a default configuration into login_config

#endif
