﻿#include "packets/lobby_a2_reserve.h"

// небольшой комментарий к пакетам ниже, определенным в виде констант
// 1-й байт - размер пакета
// через 4-ре байта начинается заголовк 0x49, 0x58, 0x46, 0x46 - IXFF
// после заголовка идет предположительно тип сообщения:
// 0x03 - положительный результат
// 0x04 - ошибка (в случае ошибки начиная с 33 байта идет код ошибки uint16) 
//Google:
// Small comment to the packages below defined as constants
// 1st byte - packet size
// Through 4 bytes headers begin at 0x49, 0x58, 0x46, 0x46 - IXFF
// After the title is presumably the type of message :
// 0x03 - positive
// 0x04 - error(in the case of an error since 33 bytes is the error code uint16)

#define LOBBY_A1_RESERVEPACKET(a)\
    unsigned char a[] = { \
    0xc4, 0x01, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x20, 0x00, 0x00, 0x00, 0x2a, 0x72, 0x4a, 0x94, \
    0x4f, 0x60, 0x27, 0xc4, 0x45, 0x4b, 0x7d, 0xcf, 0x27, 0x8e, 0x6d, 0xcd, 0x03, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x61, 0x6c, 0x65, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05, 0x00, \
    0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x02, 0x00, 0x10, 0x00, 0x20, 0x00, 0x30, \
    0x00, 0x40, 0x00, 0x50, 0x00, 0x60, 0x00, 0x70, 0x00, 0x01, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, \
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xfa, 0x01, 0x00, \
    0x7e, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, \
    0x01, 0x01, 0x01, 0x01, 0x46, 0x6e, 0xcf, 0x09, 0xde, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x0a, 0x52, 0x03, 0x00, 0x0e, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00							\
    }

// character information
#define CHARLIST_ENTRY(a)\
    unsigned char a[] = { \
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x61, 0x6c, 0x65, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x05, 0x00, \
    0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x02, 0x00, 0x10, 0x00, 0x20, 0x00, 0x30, \
    0x00, 0x40, 0x00, 0x50, 0x00, 0x60, 0x00, 0x70, 0x00, 0x01, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, \
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xfa, 0x01, 0x00, \
    0x7e, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, \
    0x01, 0x01, 0x01, 0x01, 0x46, 0x6e, 0xcf, 0x09, 0xde, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x0a, 0x52, 0x03, 0x00, 0x0e, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00							\
    }

#define LOBBY_A2_RESERVEPACKET(a)\
    unsigned char a[] = { \
    0x48, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x0b, 0x00, 0x00, 0x00, 0x30, 0xD0, 0x10, 0xDC, \
    0x87, 0x64, 0x4B, 0x34, 0x72, 0x9A, 0x51, 0x23, 0x54, 0x14, 0x67, 0xF0, 0x82, 0xB2, 0xc0, 0x00, \
    0xC3, 0x57, 0x00, 0x00, 0x52, 0x65, 0x67, 0x69, 0x75, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x01, 0xd6, 0xd3, 0x00, 0x00, \
    0x7F, 0x00, 0x00, 0x01, 0xf2, 0xd2, 0x00, 0x00\
    }

#define LOBBY_026_RESERVEPACKET(a) \
    unsigned char a[] = { \
    0x28, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4f, 0xe0, 0x5d, 0xad, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00\
    }

#define LOBBY_024_RESERVEPACKET(a) \
    unsigned char a[] = { \
    0x40, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, \
    0x64, 0x00, 0x00, 0x00, 0x70, 0x58, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 \
    }

#define LOBBY_ACTION_DONE(a)\
    unsigned char a[] = { \
    0x20, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00\
    }

#define LOBBBY_ERROR_MESSAGE(a)\
    unsigned char a[] = { \
    0x24, 0x00, 0x00, 0x00, 0x49, 0x58, 0x46, 0x46, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
    0x00, 0x00, 0x00, 0x00\
    }