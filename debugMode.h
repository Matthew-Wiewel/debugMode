#ifndef debugMode_WIEWEL_h
#define debugMode_WIEWEL_h
#include <cstdio>
#include <cstring>

//only extern here, declare debugMode = false in file with main()
extern bool debugMode;

//typdef for debugPrintf function
#define debugPrintf(...)    \
	if(debugMode) \
	{ \
		printf(__VA_ARGS__);    \
	}  

//typdef for standard error with debug mode	
#define debugStdErr(...)    \
	if(debugMode) \
	{ \
		fprintf(stderr, __VA_ARGS__);    \
	}  

//function to see if debugMode is activated from command line arguments	
bool checkDebugMode(int argc, char* argv[]);

#endif
