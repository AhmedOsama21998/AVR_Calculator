/*
 * Keypad_int.h
 *
 *  Created on: May 30, 2023
 *      Author: Ahmed Osama
 */

#ifndef KEYPAD_INT_H_
#define KEYPAD_INT_H_

ES_t KPD_init(KPD_t * Copy_pstrKPDConfig);
ES_t KPD_enuGetPressedKey(KPD_t* Copy_pstrKPDConfig, u8 * Copy_pu8Value);

#endif /* KEYPAD_INT_H_ */
