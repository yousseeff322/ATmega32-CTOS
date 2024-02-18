

/* Include guard */
#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

/* Define the possible state of Serial Transfer Complete interrupt */
#define SPI_ENABLE 0
#define SPI_DISABLE 1

/* Define the possible order by which the byte will be sent */
#define SPI_LSB 0
#define SPI_MSB 1

/* Define the states of an SPI node (Master/Slave) */
#define SPI_MASTER 0
#define SPI_SLAVE 1

/* Define the clock polarity */
#define SPI_RISINGEDGE 0
#define SPI_FALLINGEDGE 1

/* Define the clock phase */
#define SPI_SAMPLE 0
#define SPI_SETUP 1

/* Define the SPI clock rate */
#define SPI_OVER_4 0
#define SPI_OVER_16 1
#define SPI_OVER_64 2
#define SPI_OVER_128 3
#define SPI_OVER_2_HSPD 4
#define SPI_OVER_8_HSPD 5
#define SPI_OVER_32_HSPD 6
#define SPI_OVER_64_HSPD 7





#endif /* SPI_PRIVATE_H */

