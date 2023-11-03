# How to run
1. Go to terminal and "make".
2. Then run shell as "./shell"
3. Use ctrl+c or write exit to close programme.

A custom shell made in C where some of the functions of shell are implemented. The functions implemented by using a main function which is always in a while loop and calls the respective functions based on the command. All the errors are showed in red and there are other custom colors also. It also has a makefile for it. 
# Files 
1. main.c -- the main file which takes the input and call the required functions
2. cd.c -- file containing the cd() function
3. echo.c -- file containing the echo() function
4. print_prompt.c -- file containing the print_prompt() function
5. pwd.c -- file containing pwd() function
6. headers.h -- header file containg all the libraries, definitions and other variables needed across multiple files.