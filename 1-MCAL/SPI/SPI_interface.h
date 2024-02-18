#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_


void SPI_voidMaster(void);


void SPI_voidSlave(void);


u8 SPI_u8Transceive(u8 Copy_u8Data) ;




void SPI_VidInit();


u8 SPI_u8TranceiveByte(u8 Copy_u8Data);

u8 SPI_u8TranceiveStringAsynch(u8 *Copy_Pu8SentBuffer, u8 *Copy_Pu8RecBuffer, void (*CallBack)(void));



#endif
