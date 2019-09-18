#include "debugMode.h"
using namespace std;

bool debugMode = false;

int main(int argc, char* argv[])
{
	debugMode = checkDebugMode(argc, argv);
	
	printf("\nWelcome to the debugMode Test.");
	printf("\nThere should be two statements below signed by"
		   " \n-debugPrintf and -debugStdErr if you have activated"
		   " \ndebugMode with the -d or -D flag on the command line.");
	debugPrintf("\nThe debug mode has been turned on. -debugPrintf");
	debugStdErr("\nThe debug mode has been turned on. -debugStdErr");
	
	return 0;
}
