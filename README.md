# ATmega32-CTOS
## AVR Atmega32 Drivers Repository

Welcome to the AVR Atmega32 Drivers Repository! This repository contains a collection of drivers specifically designed for the Atmega32 AVR microcontroller, with a layered architecture applied. These drivers can be highly beneficial for individuals learning embedded systems and working with AVR microcontrollers.

## List of Existing Drivers (Most Recent)

### MCAL Layer
- DIO (Digital Input/Output)
- PORT Initialization 
- GIE (Global Interrupt Enable)
- EXTI/Interrupt (External Interrupt)
- ADC (Analog-to-Digital Converter)
- TMR (Timer)
- WDT (Watchdog Timer)
- USART (Universal Synchronous/Asynchronous Receiver/Transmitter)
- SPI (Serial Peripheral Interface)
- TWI (Two-Wire Interface/I2C)

### HAL Layer
- CLCD (Character LCD)
- KPD (Keypad)
- EEPROM (Electrically Erasable Programmable Read-Only Memory)
- SSD (Seven-Segment Display)

## How to Use

Each driver is encapsulated in its own folder. To utilize any of the drivers, follow these steps:

1. Navigate to the desired driver's folder.
2. Read the `interface.h` file, which is fully commented and provides details on each function's purpose and usage.
3. Include the `interface.h` file in your project.
4. Compile the driver implementation files along with your object file using the compiler.

## Contributing

We welcome contributions to this repository! If you would like to contribute by building more drivers for the AVR Atmega32, feel free to fork this repository and submit your additions via pull requests.

Thank you for considering contributing to this project! Your contributions will help enrich the embedded systems community and support fellow learners and developers.
