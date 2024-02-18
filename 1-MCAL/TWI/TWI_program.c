#include "STD_type.h"
#include "BIT_math.h"
#include "TWI_config.h"
#include "TWI_interface.h"
#include "TWI_privite.h"
#include "TWI_register.h"

void TWI_voidSlaveInit(u8 Copy_u8SlaveAddress)
{
    /* INitilaze the node address */
    TWAR = Copy_u8SlaveAddress << 1 ;
    /* Enable TWI */
    SET_BIT(TWCR,TWCR_TWEN);
}

void TWI_voidMasterInit(u8 Copy_u8MasterAddress)
{
    /* Set Clock frequency */
    TWBR = ((F_CPU / TWI_CLOCK_FREQ) - 16) / 2;
    /* Enable TWI */
    SET_BIT(TWCR,TWCR_TWEN);
    /* Initialize the node address if applicable */
    if (Copy_u8MasterAddress != 0) {
        TWAR = Copy_u8MasterAddress << 1 ;
    }
}





TWI_ErrStatus TWI_SendStartCondition(void)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    /* Send Start Condition */
    SET_BIT(TWCR,TWCR_TWSTA);
    /* Clear interrupt flag */
    SET_BIT(TWCR,TWCR_TWINT);
    /* Wait for flag to be raised again */
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_START) {
        Local_ErrStatus = TWI_START_CONDITION_ERROR;
    }
    return Local_ErrStatus;
}



// Other functions implementations...

TWI_ErrStatus TWI_SendRepeatedStart(void)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    /* Send Repeated Start Condition */
    SET_BIT(TWCR, TWCR_TWSTA);
    /* Clear interrupt flag */
    SET_BIT(TWCR, TWCR_TWINT);
    /* Wait for flag to be raised again */
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_REP_START) {
        Local_ErrStatus = TWI_REP_START_CONDITION_ERROR;
    }
    return Local_ErrStatus;
}

TWI_ErrStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    /* Clear start condition */
    CLR_BIT(TWCR, TWCR_TWSTA);
    /* Set slave address at 7MSB */
    TWDR = Copy_u8SlaveAddress << 1;
    CLR_BIT(TWDR, 0);
    SET_BIT(TWCR, TWCR_TWINT);
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_MT_SLA_ACK) {
        Local_ErrStatus = TWI_SLAVE_ADDRESS_WRITE_ERROR;
    }
    return Local_ErrStatus;
}

TWI_ErrStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8SlaveAddress)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    /* Clear start condition */
    CLR_BIT(TWCR, TWCR_TWSTA);
    /* Set slave address at 7MSB */
    TWDR = (Copy_u8SlaveAddress << 1) | 1;
    SET_BIT(TWCR, TWCR_TWINT);
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_MR_SLA_ACK) {
        Local_ErrStatus = TWI_SLAVE_ADDRESS_READ_ERROR;
    }
    return Local_ErrStatus;
}

TWI_ErrStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    TWDR = Copy_u8DataByte;
    SET_BIT(TWCR, TWCR_TWINT);
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_MT_DATA_ACK) {
        Local_ErrStatus = TWI_MASTER_WRITE_BYTE_ERROR;
    }
    return Local_ErrStatus;
}

TWI_ErrStatus TWI_MasterReadDataByte(u8 *Copy_u8DataByte)
{
    TWI_ErrStatus  Local_ErrStatus = TWI_NO_ERROR;
    /* Enable master generating acknowledge bit after receive data */
    SET_BIT(TWCR, TWCR_TWEA);
    SET_BIT(TWCR, TWCR_TWINT);
    while (GET_BIT(TWCR, TWCR_TWINT) == 0);
    /* Check for errors */
    if ((TWSR & 0xF8) != TW_MR_DATA_ACK) {
        Local_ErrStatus = TWI_MASTER_READ_BYTE_ERROR;
    } else {
        /* Read received data */
        *Copy_u8DataByte = TWDR;
    }
    return Local_ErrStatus;
}

void TWI_SendStopCondition(void)
{
    /* Send stop condition on the bus */
    SET_BIT(TWCR, TWCR_TWSTO);
    SET_BIT(TWCR, TWCR_TWINT);
}


