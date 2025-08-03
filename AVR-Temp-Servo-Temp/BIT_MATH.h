/*
 * BIT_MATH.h
 *
 *  Created on: 17 Jul 2025
 *      Author: elsab
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SET_BIT(VAR,BITNO)  ( (VAR) |=  ( 1 <<(BITNO) ) )
#define CLR_BIT(VAR,BITNO)  ( (VAR) &= ~( 1 <<(BITNO) ) )


#define TOG_BIT(VAR,BITNO)  ( (VAR) ^=  (1 <<(BITNO)  ) )
#define GET_BIT(VAR,BITNO)  ( ( (VAR) >> BITNO) & 0x01  )

#define SET_PORT(VAR,PORT)  ( (VAR) =  (PORT)  )


#define ZERO     (u8)0
#define	ONE      (u8)1
#define	TWO      (u8)2
#define	THREE    (u8)3
#define	FOUR     (u8)4
#define	FIVE     (u8)5
#define	SIX      (u8)6
#define	SEVEN    (u8)7
#define	EIGHT    (u8)8
#define	NINE     (u8)9

/*
enum
{
	ZERO,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE

};

*/




#endif /* BIT_MATH_H_ */
