

#include "STD_type.h"
#include "BIT_math.h"
#include "DIO_interface.h" 
#include "SEVEN_SEGMENT_interface.h" 
#include "SEVEN_SEGMENT_privite.h" 
#include "SEVEN_SEGMENT_config.h"



void SSD_Init(SSD_t *ssd) {
    DIO_u8SetPortDirection(ssd->anode_port, DIO_u8PORT_OUTPUT);
    DIO_u8SetPortDirection(ssd->cathode_port, DIO_u8PORT_OUTPUT);
    DIO_u8SetPinDirection(ssd->enable_port, ssd->enable_pin, DIO_u8PIN_OUTPUT);
    DIO_u8SetPinValue(ssd->enable_port, ssd->enable_pin, DIO_u8PIN_LOW);
}

void SSD_DisplayNumber(SSD_t *ssd, u8 number) {
    if (number < 10) {
        if (ssd->comm_type == SEVEN_SEGMENT_Anode) {
			
			
            // Implement the logic to set the Anode segments
            DIO_u8SetPortValue(ssd->anode_port, /* Anode segment pattern for the number */);
        } else if (ssd->comm_type == SEVEN_SEGMENT_Cathode) {
            // Implement the logic to set the Cathode segments
            DIO_u8SetPortValue(ssd->cathode_port, /* Cathode segment pattern for the number */);
        }
        DIO_u8SetPinValue(ssd->enable_port, ssd->enable_pin, DIO_u8PIN_LOW);
    }
}
