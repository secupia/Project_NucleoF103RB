/*
 * hw.h
 *
 *  Created on: 2021. 8. 4.
 *      Author: Marshall
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_

#include "hw_def.h"
#include "core/led.h"

void hwInit(void);

void delay(uint32_t time_ms);
uint32_t millis(void);

#endif /* SRC_HW_HW_H_ */
