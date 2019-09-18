debug: debugModeTest.o debugMode.o debugMode.h
	g++ -o debug debugModeTest.o debugMode.o
	
debugModeTest.o: debugModeTest.cpp debugMode.h
	g++ -c debugModeTest.cpp debugMode.h

debugMode.o: debugMode.cpp debugMode.h
	g++ -c debugMode.cpp debugMode.h