/*
 * ap.c
 *
 *  Created on: 2021. 8. 4.
 *      Author: Marshall
 */

#include "ap.h"

void apInit(void)
{

}

void apMain(void)
{
  while(1)
  {
    if( buttonGetPressed(0) == true )
    {
      ledOn(0);
    }
    else
    {
      ledOff(0);
    }
#if 0
    ledToggle(0);
    delay(500);
#endif
  }
}
