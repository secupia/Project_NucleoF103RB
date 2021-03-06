/*
 * ap.c
 *
 *  Created on: 2021. 8. 4.
 *      Author: Marshall
 */

#include "ap.h"

void apInit(void)
{
  uartOpen(_DEF_UART1, 115200);
}

void apMain(void)
{
  while(1)
  {
#if 0
    if( buttonGetPressed(0) == true )
    {
      ledOn(0);
    }
    else
    {
      ledOff(0);
    }
#endif
    if( uartAvailable(_DEF_UART1)>0 )
    {
      uartPrintf(_DEF_UART1, "rx : 0x%X \n", uartRead(_DEF_UART1));
    }
#if 0
    ledToggle(0);
    delay(500);
#endif
  }
}
