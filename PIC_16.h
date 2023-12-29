/* 
 * File:   PIC_16.h
 * Author: Alexandre
 *
 * Created on 23 de Junho de 2015, 15:47
 */

#ifndef PIC_16_H
#define	PIC_16_H

//Definições para uso dos Delays em PICs 10, 12 e 16
#pragma intrinsic(_delay)
//extern void _delay(unsigned long);
#pragma intrinsic(_delaywdt)
extern void _delaywdt(unsigned long);
#pragma intrinsic(_delay3)
extern void _delay3(unsigned char);

// NOTA: Para utilização das macros a seguir necessariamente a variável _XTAL_FREQ deve estar definida
#define __delay_us(x) _delay((unsigned long) ((x)*(_XTAL_FREQ/4000000.0)))
#define __delay_ms(x) _delay((unsigned long) ((x)*(_XTAL_FREQ/4000.0)))
#define __delaywdt_us(x) _delaywdt((unsigned long) ((x)*(_XTAL_FREQ/4000000.0)))
#define __delaywdt_ms(x) _delaywdt((unsigned long) ((x)*(_XTAL_FREQ/4000.0)))

#endif	/* PIC_16_H */

