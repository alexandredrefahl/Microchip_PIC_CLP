/* 
 * Arquivo:   main.c
 * Autor: Alexandre
 *
 * Criado em 23 de Junho de 2015, 15:31
 *
 * Modificado em 23 de Junho de 2015
 */

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "hardware.h"
#include "PIC_16.h"

/*
 * FUNÇÃO PRINCIPAL
 */
int main(void) {

    //BITS    76543210
    TRISA = 0x00000011;     // 2 3 5 Output // 0 1 Input
    TRISB = 0x11111111;     // Todos Input
    //TRISC = 0x00000011;
    TRISD = 0x11111100;     // 7 6 5 4 3 2 Input
    TRISE = 0x00000000;     // Todos são saídas
    
    while(1) {
        RELE1 = 1;
        __delay_ms(1000);
        RELE1 = 0;
        __delay_ms(1000);
    }

    return;
}

