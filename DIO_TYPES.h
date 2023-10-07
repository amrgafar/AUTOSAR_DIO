/*
 * DIO_TYPES.h
 *
 *      Author: Amr
 */

#ifndef MCAL_DIO_DIO_TYPES_H_
#define MCAL_DIO_DIO_TYPES_H_

#include <stdint.h>

#define STD_HIGH    0x01
#define STD_LOW     0x00
#define STD_ACTIVE  0x01
#define STD_IDLE    0x00
#define STD_ON      0x01
#define STD_OFF     0x00
#define E_OK        0x00
#define E_NOT_OK    0x01

#define NULL_PTR    ((void*)0)

typedef uint8_t  Dio_ChannelType;
typedef uint8_t  Dio_PortType;
typedef uint8_t  Dio_LevelType;
typedef uint8_t  Dio_PortLevelType;


typedef unsigned char         uint8;
typedef unsigned short        uint16;
typedef unsigned long         uint32;

#endif /* MCAL_DIO_DIO_TYPES_H_ */
