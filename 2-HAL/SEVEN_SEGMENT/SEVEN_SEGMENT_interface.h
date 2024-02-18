#ifndef  SEVEN_SEGMENT_interface_H_
#define SEVEN_SEGMENT_interface_H_ 

#define SEVEN_SEGMENT_Anode 0 
#define SEVEN_SEGMENT_Cathode 1 

typedef struct {
    u8 anode_port;
    u8 cathode_port;
    u8 enable_port;
    u8 enable_pin;
    u8 comm_type; // 0 for Anode, 1 for Cathode
} SSD_t;

void SSD_Init(SSD_t *ssd);
void SSD_DisplayNumber(SSD_t *ssd, u8 number);

#endif 




