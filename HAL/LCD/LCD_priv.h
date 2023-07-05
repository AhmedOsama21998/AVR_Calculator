/*
 * LCD_priv.h
 *
 *  Created on: May 9, 2023
 *      Author: Ahmed Osama
 */
#ifndef LCD_PRIV_H_
#define LCD_PRIV_H_

#define EIGHT_BIT	5
#define FOUR_BIT	9

static inline void LCD_invidSendCommand(u8 Copy_u8Command);

static void LCD_vidLatch(u8 Copy_u8Data);

#endif /* LCD_PRIV_H_ */
