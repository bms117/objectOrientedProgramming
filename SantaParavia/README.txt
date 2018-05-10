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
+Made some include guards, but didn't get rid of the warnings and errors.
+Tried maybe seeing if I could just change the .c file to a .cpp file to see what it would do
+So, literally renaming the file into "test.cpp" and copying all the code straight into that .cpp file from the .c file gave no warnings or errors and ran correctly. 
+Getting error:
	Brians-MacBook-Pro:SantaParavia brian$ g++ *.cpp -o a.out 
	duplicate symbol _CityList in:
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/main-bff3a0.o
   		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/paravia-58cc46.o
	duplicate symbol _FemaleTitles in:
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/main-bff3a0.o
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/paravia-58cc46.o
	duplicate symbol _MaleTitles in:
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/main-bff3a0.o
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/paravia-58cc46.o
	duplicate symbol _Player in:
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/main-bff3a0.o
    		/var/folders/sl/n4_h7mv151x183b28w8t3cmc0000gn/T/paravia-58cc46.o
	ld: 4 duplicate symbols for architecture x86_64

Meaning, which this is a guess, that there are duplicate definitions 

+Error ./paravia.h:7:24: error: redeclaration of C++ built-in type 'bool'
		typedef enum TrueFalse bool;
+Removing the repeated declaration fixed this issue
+Still experiencing the issue with the duplicate symbols 
+tried making the declaration of char MyCity , etc., into a vector of strings instead like we learned in class, but this gave me so many errors elsewhere.
+Got rid of one of the duplicates, player, by removing 'Player' after the struct declaration.
+After moving the declaration of those three other 'symbols' to .cpp and adding it one more time to the main function, the entire code runs together now.
+Tried to start putting items into classes, but started having a lot of trouble getting errors everywhere.
+Was able to start putting functions into classes to organize them. Put the buy functions into a 'Buy' class.




