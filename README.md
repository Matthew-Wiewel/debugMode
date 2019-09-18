# debugMode
A library with functions to help with debugging C++ libraries.

This libary is expansion on the #define debugPrintf macro found in https://www.cs.uic.edu/pub/CS211/ProjectF18/debugmacro.c
and geared for C++ programs as opposed to C programs.

# the .h file contains

extern bool debugMode;
A global variable used in macro if statements.

debugPrintf(...)
Expands to a macro that uses printf(...) and is inside an if statement dependant on debugMode's value.

debugStdErr(...)
Expands to a macro using printf(stderr, ...) that is also inside an if statement dependant on debugMode's value.

bool checkDebugMode(int argc, char* argv[])
Takes in the command line arguments and will return true of -d or -D is fine within them. It is defined in the .cpp file.

I was initially introduced to this style of debug statements in CS 211 at UIC. I found it to be a useful tool to be able to quickly switch
between normal and debug execution of a program as an alternative to gdb for finding simple issues. I hope by sharing it that it may benefit
someone else.
