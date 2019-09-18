#include "debugMode.h"

//function to see if debugMode is activated from command line arguments	
bool checkDebugMode(int argc, char* argv[])
{
	bool result = false; //default value
	for(int i = 0; i < argc; i++)
	{
		if(strcmp(argv[i], "-d") == 0 || strcmp(argv[i], "-D") == 0)
			result = true;
	}
	
	return result;
}
