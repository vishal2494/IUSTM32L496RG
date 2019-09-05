/*
Header file for Arduino compactability @stm32l496rg.

Date : 29-july-2019
Optipace Technologies

*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus


//DIGITL PINS
#define PC5 0   //RX
#define PC4 1   //TX
#define PD12 2
#define PB13 3
#define PB14 4
#define PB15 5
#define PC9 6
#define PC8 7
#define PA3 8
#define PA2 9
#define PD2 10
#define PC12 11
#define PC11 12
#define PC10 13 //LED

//ANALOG PINS
#define PA4 14  // A0	
#define PA5 15  // A1	
#define PC3 16  // A2	
#define PC2 17  // A3	
#define PC1 18  // A4	
#define PC0 19  // A5  	

//I2C
#define PB9 20  //SDA // SWD
#define PB8 21  //SCL

//SPI
#define PB4 22  //MISO
#define PB5 23  //MOSI
#define PB3 24  //SCK

//RX/TX LEDS
#define PB2 25  //RX OUTPUT LED
#define PA10 26 //TX OUTPUT LED

//USB
#define PA9 27  //VBUS
#define PA11 28 //DM
#define PA12 29 //DP

//UART
#define PA0 30  //TX
#define PA1 31  //RX

//QSPI
#define PB11 32 //NCS
#define PB10 33 //CK
#define PB1 34  //IO0
#define PB0 35  //IO1
#define PA7 36  //IO2
#define PA6 37  //IO3

//DIGITL PINS
#define PA8 38  //ATN
#define PC7 39
#define PC6 40

//PAD PINS
#define PA15 41 //INT
#define PB7 42  //SDA
#define PB6 43  //SCL

//BUTTON
#define PC13 44 //BUTTON


// This must be a literal
#define NUM_DIGITAL_PINS        58
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       12
#define NUM_ANALOG_FIRST        46

// On-board LED pin number
#define LED_BUILTIN             13
#define LED_GREEN               26 //PA10
#define LED_RED                 25 //PB2
#define LED_BLUE                38 //PA8

// On-board user button
#define USER_BTN                PC13

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM6

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    2 //Connected to ST-Link

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           0
#define PIN_SERIAL_TX           1

#ifdef __cplusplus
} // extern "C"
#endif


#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR   Serial
#define SERIAL_PORT_HARDWARE  Serial
#endif

#endif // _VARIANT_ARDUINO_STM32_

