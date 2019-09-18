#include "debugMode.h"
using namespace std;

bool debugMode = false;

int main(int argc, char* argv[])
{
	debugMode = checkDebugMode(argc, argv);
	
	debugPrintf("\nThe debug mode has been turned on. -debugPrintf");
	debugStdErr("\nThe debug mode has been turned on. -debugStdErr");
	
	return 0;
}
