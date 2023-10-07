/*
 * DIO.h
 *
 *      Author: Amr
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include"DIO_TYPES.h"

#define PINS_NUMBER          8
#define PORTS_NUMBER         6
#define CHANNELS_NUMBERS     48


void DIO_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

void DIO_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);

Dio_PortLevelType DIO_ReadPort(Dio_PortType PortId);



#endif /* MCAL_DIO_H_ */
