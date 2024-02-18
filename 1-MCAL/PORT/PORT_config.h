/***************************************************************************************/
/***************************************************************************************/
/***************************  YOUSSEF **************************************************/
/*************************** LAYER : MCAL **********************************************/
/*************************** SWC : PORT *************************************************/
/*************************** VERSION : 1.00 ********************************************/





#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_
/* choose 0 for input  OR  1 for output */


  #define PORTA_PIN0_DIR   1
  #define PORTA_PIN1_DIR   1
  #define PORTA_PIN2_DIR   1
  #define PORTA_PIN3_DIR   0
  #define PORTA_PIN4_DIR   0
  #define PORTA_PIN5_DIR   0
  #define PORTA_PIN6_DIR   0
  #define PORTA_PIN7_DIR   0

  #define PORTB_PIN0_DIR   1
  #define PORTB_PIN1_DIR   1
  #define PORTB_PIN2_DIR   1
  #define PORTB_PIN3_DIR   1
  #define PORTB_PIN4_DIR   0
  #define PORTB_PIN5_DIR   1
  #define PORTB_PIN6_DIR   0
  #define PORTB_PIN7_DIR   1
  
  #define PORTC_PIN0_DIR   1
  #define PORTC_PIN1_DIR   1
  #define PORTC_PIN2_DIR   1
  #define PORTC_PIN3_DIR   1
  #define PORTC_PIN4_DIR   1
  #define PORTC_PIN5_DIR   1
  #define PORTC_PIN6_DIR   1
  #define PORTC_PIN7_DIR   1
	
  #define PORTD_PIN0_DIR   1
  #define PORTD_PIN1_DIR   1
  #define PORTD_PIN2_DIR   1
  #define PORTD_PIN3_DIR   1
  #define PORTD_PIN4_DIR   0
  #define PORTD_PIN5_DIR   0
  #define PORTD_PIN6_DIR   0
  #define PORTD_PIN7_DIR   0
	
	
	/*
	if PIN is input      0: for floating  1 : pull_up 
	else PIN is output   0: LOW 1: HIGH  
	*/ 
	
	
	#define PORTA_PIN0_INT   0
	#define PORTA_PIN1_INT   0
	#define PORTA_PIN2_INT   0
	#define PORTA_PIN3_INT   0
	#define PORTA_PIN4_INT   0
	#define PORTA_PIN5_INT   0
	#define PORTA_PIN6_INT   0
	#define PORTA_PIN7_INT   0

	#define PORTB_PIN0_INT   0
	#define PORTB_PIN1_INT   0
	#define PORTB_PIN2_INT   0
	#define PORTB_PIN3_INT   0
	#define PORTB_PIN4_INT   1
	#define PORTB_PIN5_INT   0
	#define PORTB_PIN6_INT   0
	#define PORTB_PIN7_INT   0
	
	#define PORTC_PIN0_INT   0
	#define PORTC_PIN1_INT   0
	#define PORTC_PIN2_INT   0
	#define PORTC_PIN3_INT   0
	#define PORTC_PIN4_INT   0
	#define PORTC_PIN5_INT   0
	#define PORTC_PIN6_INT   0
	#define PORTC_PIN7_INT   0
	
	#define PORTD_PIN0_INT   1
	#define PORTD_PIN1_INT   1
	#define PORTD_PIN2_INT   1
	#define PORTD_PIN3_INT   1
	#define PORTD_PIN4_INT   1
	#define PORTD_PIN5_INT   1
	#define PORTD_PIN6_INT   1
	#define PORTD_PIN7_INT   1
	
	
  
  
#endif
