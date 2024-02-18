#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_


typedef enum //type is intger
{
	TWI_NO_ERROR ,
	TWI_START_CONDITION_ERROR ,
	TWI_REP_START_CONDITION_ERROR ,
	TWI_SLAVE_ADDRESS_WRITE_ERROR ,
	TWI_SLAVE_ADDRESS_READ_ERROR ,
	TWI_MASTER_WRITE_BYTE_ERROR ,
	TWI_MASTER_READ_BYTE_ERROR ,
}TWI_ErrStatus;

void TWI_voidSlaveInit(u8 Copy_u8SlaveAddress);

void TWI_voidMasterInit(u8 Copy_u8MasterAddress);


TWI_ErrStatus TWI_SendStartCondition(void) ;

TWI_ErrStatus TWI_SendRepeatedStart(void) ;

TWI_ErrStatus TWI_SendSlaveAddressWithWrite(u8 Copy_u8SlaveAddress) ;

TWI_ErrStatus TWI_SendSlaveAddressWithRead(u8 Copy_u8MasterAddress) ;

TWI_ErrStatus TWI_MasterWriteDataByte(u8 Copy_u8DataByte) ;

TWI_ErrStatus TWI_MasterReadDataByte(u8 *Copy_u8DataByte) ;

void TWI_SendStopCondition(void) ;





#endif
