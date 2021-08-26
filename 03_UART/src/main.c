/*
 * main.c
 *
 *  Created on: 2021. 8. 4.
 *      Author: Marshall
 */

//#include "main.h"
#include "ap.h"

int main(void)
{
  //__disable_irq();
  //__enable_irq();
  hwInit();
  apInit();

  apMain();

}
