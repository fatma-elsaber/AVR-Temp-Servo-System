/*
 * ADC_Config.h
 *
 *  Created on: 21 Jul 2025
 *      Author: elsab
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

#define TIME_OUT  100000UL

/*_____________________________________________________________________________________*/

/*******************
 * PRSCALLER_2      *
 * PRSCALLER_4      *
 * PRSCALLER_16     *
 * PRSCALLER_64     *
 * PRSCALLER_128    *
 * ******************/
#define PRSCALLER PRSCALLER_64

/*_____________________________________________________________________________________*/

/***************************************
 * AREF_INTERNAL_VREF_TURNED_Off       *
 * AVCC                                *
 * INTERNAL_2_5V                       *
  **************************************/
#define REF_VOLT   AVCC

/*_____________________________________________________________________________________*/

/*******************
 * RIGHT_DATA      *
 * LEFT_DATA       *
 *******************/

#define TYPE_DATA    RIGHT_DATA

/*_____________________________________________________________________________________*/

/*
 * TRIGGER_ENABEL
 * TRIGGER_DIS_ENABEL */

#define TRIGGER_DIS_ENABEL

/*_____________________________________________________________________________________*/


/*
 * FREE_RUNNING_MODE
 * ANALOG_COMPARATOR
 * EXTERNAL_INTERRUPT_RUQUEST0
 * TIMER0_COMPARE_MATCH
 * TIMER0_OVERFLOW
 * TIMER1_COMPARE_MATCHB
 * TIMER1_OVERFLOW
 * TIMER1_CAPTURE_EVENT
 *
 */
#ifdef TRIGGER_ENABEL
#define TRIGGER_SOURCE  EXTERNAL_INTERRUPT_RUQUEST0
#endif

/*_____________________________________________________________________________________*/

/*******************
 * ISR_ENABEL      *
 * BOLING_ENABEL        *
 *******************/

#define BOLING_ENABEL

/*_____________________________________________________________________________________*/


#endif /* ADC_CONFIG_H_ */
