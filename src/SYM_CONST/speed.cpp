#include "speed.h"

int speedWatchdog(SpeedType speed) {
	int i = 0;
	int ret_val = -1;

#if defined(OEM2)

	if(speed > MAX_SPEED) {
		setWarningState(GOVERNOR_ACTIVATED);
		ret_val = 1;
	} else if(speed > WARN_ABOVE_SPEED) {
		setWarningState(SPEED_THRESHOLD_REACHED);
		ret_val = 1;
		calledFromOEM2(i);
	} else if(speed <= WARN_ABOVE_SPEED) {
		setWarningState(NO_WARNING);
		ret_val = 0;
		
#elif defined(OEM1)

	if(speed >= MAX_SPEED) {
		setWarningState(GOVERNOR_ACTIVATED);
		ret_val = 1;
	} else if(speed >= WARN_ABOVE_SPEED) {
		setWarningState(SPEED_THRESHOLD_REACHED);
		ret_val = 1;
		calledFromOEM1(i);
	} else if(speed < WARN_ABOVE_SPEED) {
		setWarningState(NO_WARNING);
		ret_val = 0;
#else

#error MAKE VARIANT NOT SPECIFIED

#endif

	} else {
		ret_val = -1;
	}
	return(ret_val);
}
