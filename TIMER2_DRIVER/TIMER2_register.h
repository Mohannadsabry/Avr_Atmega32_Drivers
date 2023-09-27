/*
 * TIMER2_register.h
 *
 *  Created on: Sep 11, 2023
 *      Author: user
 */

#ifndef TIMER2_REGISTER_H_
#define TIMER2_REGISTER_H_

#define TCCR2 *(volatile u8 *)(0x45)
#define TCNT2 *(volatile u8 *)(0x44)
#define OCR2  *(volatile u8 *)(0x43)
#define ASSR  *(volatile u8 *)(0x42)
#define TIMSK *(volatile u8 *)(0x59)
#define TIFR  *(volatile u8 *)(0x58)

#endif /* TIMER2_REGISTER_H_ */
