#ifndef REDHOUSE
#define REDHOUSE

/*libraries*/
#include <stdlib.h>

/**
*struct spec -structure to hold function pointers
*@specify: is the character which represents the function
*@type: the type of data the function accepts
*@f: a pointer to the function
*/
typedef struct spec
{
	char *specify;
	int type;
	int (*f)();
} t_fo;

/*putchar function*/
int _putchar(char c);

/*printf function*/
int _printf(const char *format, ...);

/*Specifier functions*/
	/*mandspec.c*/
/*%s function*/
int sFunct(char *string, int pre);
/*%c function*/
int cFunct(char character, int pre);
/*%% function*/
int modFunct(char place, int pre);
#endif
