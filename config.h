#ifndef HD44780_CONFIG_H_
#define HD44780_CONFIG_H_

#include <avr/io.h>

#define LCD_CONTROL_PORT PORTB
#define LCD_CONTROL_PORT_DDR DDRB
#define LCD_RS PB4
#define LCD_RW PB7
#define LCD_E PB6

#define LCD_DATA_PORT PORTD  
#define LCD_DATA_PORT_PINS PIND
#define LCD_DATA_PORT_DDR DDRD
#define LCD_DB0 PD0
#define LCD_DB1 PD1
#define LCD_DB2 PD2
#define LCD_DB3 PD3
#define LCD_DB4 PD4
#define LCD_DB5 PD5
#define LCD_DB6 PD6
#define LCD_DB7 PD7

#endif
