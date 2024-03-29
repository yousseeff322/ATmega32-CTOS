/***************************************************************************************/
/***************************************************************************************/
/***************************  YOUSSEF **************************************************/
/*************************** LAYER : HAL **********************************************/
/*************************** SWC : KEYPAD *************************************************/
/*************************** VERSION : 1.00 ********************************************/


#ifndef KEYPAD_CONFIG_H_ 
#define KEYPAD_CONFIG_H_


#define KEY_PORT    DIO_u8PORTD

#define KEYPAD_COLUME0_PIN  DIO_u8PIN0
#define KEYPAD_COLUME1_PIN  DIO_u8PIN1
#define KEYPAD_COLUME2_PIN  DIO_u8PIN2
#define KEYPAD_COLUME3_PIN  DIO_u8PIN3

#define KEYPAD_ROW0_PIN     DIO_u8PIN4
#define KEYPAD_ROW1_PIN     DIO_u8PIN5
#define KEYPAD_ROW2_PIN     DIO_u8PIN6
#define KEYPAD_ROW3_PIN     DIO_u8PIN7




#define KEYPAD_NO_PRESSED_KEY   0xff 

#define KPD_ARR_VAL {{'7', '8', '9', '/'}, {'4', '5', '6', '*'}, {'1', '2', '3', '-'}, {'c', '0', '=', '+'}}







#endif