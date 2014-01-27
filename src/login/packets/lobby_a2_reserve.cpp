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


#include "../../common/socket.h"

#include "lobby_a2_reserve.h"
#include "../login.h"

//Packet type 0x0B, response to client packet 0xA2
CLobbyA2ReservePacket::CLobbyA2ReservePacket()
{
    this->setType(0x0B);
    this->setSize(0x48);
    /*
        0x48, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x0b, 0x00, 0x00, 0x00, 0x30, 0xD0, 0x10, 0xDC, \
        0x87, 0x64, 0x4B, 0x34, 0x72, 0x9A, 0x51, 0x23, 0x54, 0x14, 0x67, 0xF0, 0x82, 0xB2, 0xc0, 0x00, \
        0xC3, 0x57, 0x00, 0x00, 0x52, 0x65, 0x67, 0x69, 0x75, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
        0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xd6, 0xd3, 0x00, 0x00, \
        0x7F, 0x00, 0x00, 0x01, 0xf2, 0xd2, 0x00, 0x00\*/
    


}

void CLobbyA2ReservePacket::setZoneIP(uint32 ZoneIP)
{
    WBUFL(data, 0x38) = ZoneIP;
}

void CLobbyA2ReservePacket::setZonePort(uint16 ZonePort)
{
    WBUFW(data, 0x3C) = ZonePort;
}

void CLobbyA2ReservePacket::setSearchIP(uint32 SearchIP)
{
    WBUFL(data, 0x40) = SearchIP;
}

void CLobbyA2ReservePacket::setSearchPort(uint16 SearchPort)
{
    WBUFW(data, 0x44) = SearchPort;
}