/* 
 * Arquivo:   hardware.h
 * Autor: Alexandre
 *
 * Criado em 23 de Junho de 2015, 15:33
 *
 * Todas as definições de hardware e pinos são feitas neste arquivo
 */

#ifndef HARDWARE_H
#define	HARDWARE_H

//#include <xc.h>

// Cristal de 20 MHz
#define _XTAL_FREQ 20000000

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

/*
 * FAZ AS DEFINIÇÕES DE PINOS DE HARDWARE
 */

// Define o endereço de todos os RELES da placa
#define RELE1 PORTAbits.RA2
#define RELE2 PORTAbits.RA3
#define RELE3 PORTAbits.RA5
#define RELE4 PORTEbits.RE0
#define RELE5 PORTEbits.RE1
#define RELE6 PORTEbits.RE2
#define RELE7 PORTDbits.RD0
#define RELE8 PORTDbits.RD1

// Define o endereço de todas as ENTRADAS Digitais
#define ENT01 PORTBbits.RB7
#define ENT02 PORTBbits.RB6
#define ENT03 PORTBbits.RB5
#define ENT04 PORTBbits.RB4
#define ENT05 PORTBbits.RB3
#define ENT06 PORTBbits.RB2
#define ENT07 PORTBbits.RB1
#define ENT08 PORTBbits.RB0
#define ENT09 PORTDbits.RD7
#define ENT10 PORTDbits.RD6
#define ENT11 PORTDbits.RD5
#define ENT12 PORTDbits.RD4
#define ENT13 PORTDbits.RD3
#define ENT14 PORTDbits.RD2

//Define os pinos do bus I2C
#define sda          pin_d0
#define scl          pin_d1
#define EEPROM_SDA   pin_d0
#define EEPROM_SCL   pin_d1

// Define o pino do Led piscante
#define led          pin_b7

// Define onde estão os botões de acionamento
#define tecla1       !input(pin_c2)
#define tecla2       !input(pin_c3)

// Define os pinos do LCD Serial (Apenas TX)
#define TX_LCD      PORTCbits.RC0

// Define os pinos da Comunicação Serial (DB9 - RX TX)



#endif	/* HARDWARE_H */

