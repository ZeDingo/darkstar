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

#ifndef _CLOBBY_A2_RESERVE_H
#define _CLOBBY_A2_RESERVE_H

#include "../../common/cbasetypes.h"

#include "lobby_basic.h"


class CLobbyA2ReservePacket : public CLobbyBasicPacket
{
protected:
    uint32 ZoneIP;
    uint16 ZonePort;
    uint32 SearchIP;
    uint16 SearchPort;
public:
    // Record to packet the IP and port of the map/zone/game server
    void setZoneIP(uint32 ZoneIP);
    void setZonePort(uint16 ZonePort);

    uint32 getZoneIP();
    uint16 getZonePort();

    // Record to packet the IP and port of the search server
    void setSearchIP(uint32 SearchIP);
    void setSearchPort(uint16 SearchPort);

    uint32 getSearchIP();
    uint16 getSearchPort();

    CLobbyA2ReservePacket();
    ~CLobbyA2ReservePacket();
};



#endif