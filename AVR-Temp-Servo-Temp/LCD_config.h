/*
 * LCD_config.h
 *
 *  Created on: 20 Jul 2025
 *      Author: elsab
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

//#define LCD_MODE  FOUR_BIT

/*
 * choose control pins
 */
#define RS_PIN   PIN_6
#define RS_PORT  PORTC_ID


#define EN_PIN   PIN_7
#define EN_PORT  PORTC_ID


/*
 * data pins
 */
#define D7_PIN    PIN_5
#define D7_PORT   PORTC_ID

#define D6_PIN    PIN_4
#define D6_PORT   PORTC_ID

#define D5_PIN    PIN_3
#define D5_PORT   PORTC_ID

#define D4_PIN    PIN_2
#define D4_PORT   PORTC_ID


#endif /* LCD_CONFIG_H_ */
