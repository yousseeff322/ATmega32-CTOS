
#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_



/*
 * EEPROM Interface Header File
 * Driver for 24C08N EEPROM
 */



void EEPROM_VidWrite(u8 Copy_u8DataByte, u16 Copy_u8Adress) ;


u8 EEPROM_u8Read(u8 Copy_u8Adress) ;




#endif
