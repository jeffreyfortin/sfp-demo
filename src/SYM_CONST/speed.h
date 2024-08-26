#ifndef __SPEED_H__
#define __SPEED_H__

#include "variant.h"

//enum WarningType    { NO_WARNING, SPEED_THRESHOLD_REACHED, GOVERNOR_ACTIVATED };

#if defined(OEM2)

#define NO_WARNING 1
#define SPEED_THRESHOLD_REACHED 2
#define GOVERNOR_ACTIVATED 3
inline int calledFromOEM2(int i)
{
  return i;
}

#elif defined(OEM1)

#define NO_WARNING 1
#define SPEED_THRESHOLD_REACHED 2
#define GOVERNOR_ACTIVATED 35
inline int calledFromOEM1(int i)
{
  return i;
}

#else
	
#error MAKE VARIANT NOT SPECIFIED

#endif

typedef int WarningType;
typedef unsigned int SpeedType;

int aboveWarningThreshold(SpeedType speed);

void setWarningState(WarningType warning);

#endif
