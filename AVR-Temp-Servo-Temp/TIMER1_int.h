/*
 * TIMER0_int.h
 *
 *  Created on: 24 Jul 2025
 *      Author: elsab
 */

#ifndef TIMER1_INT_H_
#define TIMER1_INT_H_

void M_TIMER1_voidPwm1Init(void);
void M_TIMER1_voidPwm1SetTop(void);
void M_TIMER1_voidPwm1SetDutyCycle(u16 Copy_u8DutyCycle);
void M_TIMER1_voidPwm1Start(void);
void M_TIMER1_voidPwm1Stop(void);

#endif /* TIMER1_INT_H_ */
