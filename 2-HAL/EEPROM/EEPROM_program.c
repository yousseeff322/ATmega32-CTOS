

#include "STD_type.h"
#include "EEPROM_config.h"
#include "EEPROM_interface.h"
#include "EEPROM_private.h"
#include "TWI_interface.h"
#include <util/delay.h>


void EEPROM_VidWrite(u8 Copy_u8DataByte, u16 Copy_u8Address)
{
    // Send start condition
    TWI_SendStartCondition();

    // Send slave address with write command
    TWI_SendSlaveAddressWithWrite(0b1010 | (A2_CONFIG << 2) | (u8)(Copy_u8Address >> 8));

    // Send memory address (high byte)
    TWI_MasterWriteDataByte((u8)(Copy_u8Address));

    // Send memory address (low byte)
    TWI_MasterWriteDataByte((u8)(Copy_u8Address));

    // Write data byte to the specified address
    TWI_MasterWriteDataByte(Copy_u8DataByte);

    // Send stop condition
    TWI_SendStopCondition();
}

u8 EEPROM_u8Read(u16 Copy_u8Address)
{
    u8 Local_u8ReadData = 0;

    // Send start condition
    TWI_SendStartCondition();

    // Send slave address with write command
    TWI_SendSlaveAddressWithWrite(0b1010 | (A2_CONFIG << 2) | (u8)(Copy_u8Address >> 8));

    // Send memory address (high byte)
    TWI_MasterWriteDataByte((u8)(Copy_u8Address));

    // Send memory address (low byte)
    TWI_MasterWriteDataByte((u8)(Copy_u8Address));

    // Send repeated start condition
    TWI_SendRepeatedStart();

    // Send slave address with read command
    TWI_SendSlaveAddressWithRead(0b1010 | (A2_CONFIG << 2) | (u8)(Copy_u8Address >> 8));

    // Read data byte from the specified address
    Local_u8ReadData = TWI_MasterReadDataByte();

    // Send stop condition
    TWI_SendStopCondition();

    return Local_u8ReadData;
}




