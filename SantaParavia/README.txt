+Accidentally deleted project, so here goes nothing
+Attempted to run with g++ compiler, but get this warning:
	clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is 		deprecated [-Wdeprecated]
	paravia.c:713:42: warning: conversion from string literal to 'char *' is 		deprecated [-Wc++11-compat-deprecated-writable-strings]
    		InitializePlayer(&Baron, 1400, 6, 4, "Peppone", True);
                                         ^
+Put (char *) before "Peppone" string literal, and it seems to run properly now
+Runs, but receiving this warning:
	clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is 		deprecated [-Wdeprecated]. Still compiles and runs
+Made a hello world .cpp file to put all the code into to try to cover the code into c++
+Attempted to refractor code into main.cpp, paravia.h, paranoia.cpp but now running into multiple errors, but keeping the original .c file for a reference

