/*
 * DIO.c
 *      Author: Amr
 */

#include "DIO.h"
#include"../../LIBRARY/tm4c123gh6pm.h"

void DIO_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
    uint8 port_ID = ChannelId / PINS_NUMBER;
    uint8 pin_ID = ChannelId % PINS_NUMBER;

    uint32* DATA_REG = NULL_PTR;

    /* Determine the GPIO data register based on the port index */
    switch (port_ID)
    {
    case 0:
        DATA_REG = &(GPIO_PORTA_DATA_R);
        break;

    case 1:
        DATA_REG = &(GPIO_PORTB_DATA_R);
        break;

    case 2:
        DATA_REG = &(GPIO_PORTC_DATA_R);
        break;

    case 3:
        DATA_REG = &(GPIO_PORTD_DATA_R);
        break;

    case 4:
        DATA_REG = &(GPIO_PORTE_DATA_R);
        break;

    case 5:
        DATA_REG = &(GPIO_PORTF_DATA_R);
        break;

    default:
        break;

    }

    /* Write the Level to the specified pin */
    if (Level == STD_LOW)
    {
        /* Clear the bit */
        *DATA_REG &= ~(1U << pin_ID);
    }

    else if (Level == STD_HIGH)
    {
        /* Set the bit */
        *DATA_REG |= (1U << pin_ID);
    }

}

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    uint8 port_ID = ChannelId / PINS_NUMBER;
    uint8 pin_ID = ChannelId % PINS_NUMBER;

    uint32* DATA_REG = NULL_PTR;
    switch (port_ID)
    {
    case 0:
        DATA_REG = &(GPIO_PORTA_DATA_R);
        break;

    case 1:
        DATA_REG = &(GPIO_PORTB_DATA_R);
        break;

    case 2:
        DATA_REG = &(GPIO_PORTC_DATA_R);
        break;

    case 3:
        DATA_REG = &(GPIO_PORTD_DATA_R);
        break;

    case 4:
        DATA_REG = &(GPIO_PORTE_DATA_R);
        break;

    case 5:
        DATA_REG = &(GPIO_PORTF_DATA_R);
        break;

    default:
        break;
    }
    uint32 ReadValue = (*DATA_REG >> pin_ID) & 0x01;
    return (uint8)ReadValue;

}

void DIO_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{

}

Dio_PortLevelType DIO_ReadPort(Dio_PortType PortId)
{

}


