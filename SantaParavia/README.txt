+Started project over (5/1/18)
+Project successfully ran and played using a c compiler (5/1/18)
+Using c++ compiler, g++, following error occurs:
	 clang: warning: treating 'c' input as 'c++' when in C++ mode, this behavior is deprecated [-Wdeprecated]
	paravia.c:713:42: warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    		InitializePlayer(&Baron, 1400, 6, 4, "Peppone", True);
+Change code to add (char *) just before the literal string seemed to fix the warning, now runs(5/2/18)
+Made proper indenting(5/2/18)
+

