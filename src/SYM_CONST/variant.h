#ifndef __VARIANT__
#define __VARIANT__


#if defined(OEM2)

#define VARIANT_TAG 4002
#define MAX_SPEED 160
#define WARN_ABOVE_SPEED 150

#elif defined(OEM1)

#define VARIANT_TAG 8932
#define MAX_SPEED 200
#define WARN_ABOVE_SPEED 195

#else
	
#error MAKE VARIANT NOT SPECIFIED

#endif


#endif
