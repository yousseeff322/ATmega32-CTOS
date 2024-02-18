

/* Include guard */
#ifndef TMR_PRIVATE_H
#define TMR_PRIVATE_H

/* Private macro for the number of the available timers in AVR ATmega32*/
#define TMR_NO_OF_TIMERS 3

/* Private macros for the available timers in AVR ATmega32*/
#define TMR_TIMER0 0
#define TMR_TIMER1 1
#define TMR_TIMER2 2

/* Private macros for the maximum registers value for the timers in AVR ATmega32 */
#define TMR_MAXVAL_TIMER02_REG 256
#define TMR_MAXVAL_TIMER1_REG 65536

/* Private macros for the initial state of the timers */
#define TMR_DISABLE 0
#define TMR_ENABLE 1

/* Private macros for the available mode for the timer peripheral in AVR ATmega32 */
#define TMR_NORMAL 0
#define TMR_PWM_PHASE_CORRECT 1
#define TMR_CTC 2
#define TMR_FASTPWM_8BIT 3
#define TMR_FASTPWM_9BIT 4
#define TMR_FASTPWM_10BIT 5
#define TMR_FASTPWM_ICR1 6
#define TMR_FASTPWM_OCRA1 7

/* Private macros for the available prescalers can be assigned for the timer peripheral */
#define TMR_NO_PRESCALER 0
#define TMR_PRESCALER_8 8
#define TMR_PRESCALER_32 32
#define TMR_PRESCALER_64 64
#define TMR_PRESCALER_128 128
#define TMR_PRESCALER_256 256
#define TMR_PRESCALER_1024 1024

/* Private Macros for enabling or disabling the timer interrupt */
#define TMR_EN_INT 1
#define TMR_DIS_INT 0

/* Private Macros for the possible sense level for the input capture pin D6 */
#define TMR_RISING_EDGE 0
#define TMR_FALLING_EDGE 1

/* Private Macros for available output mode on compare match timer */
#define TMR_NORMAL 0
#define TMR_TOGGLE_OCX 1
#define TMR_CLEAR_OCX 2
#define TMR_SET_OCX 3



#endif /* TMR_PRIVATE_H */

/*** end of file ***/