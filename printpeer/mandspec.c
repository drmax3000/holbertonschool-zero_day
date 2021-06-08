#include "holberton.h"

/*This will serve as a place for mandatory specifier functions to be held*/
/*Contains the functions for specifiers c s % d i*/

/**
 *sFunct - will print a string
 *@string: string to be printed
 *@pre: will check for invalid input
 *
 *Return: how many characters were printed, -1 if error
 */
int sFunct(char *string, int pre)
{
	int i = 0;
	int c = 0;

	if (!string || pre != 0)
		return (-1);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		c++;
		i++;
	}
	return (c);
}

/**
 *cFunct - will print a character
 *@character: the character to be printed
 *@pre: will check for invalid input
 *
 *Return: how many characters were printed, -1 if error
 */
int cFunct(char character, int pre)
{
	if (!character || pre != 0)
		return (-1);

	_putchar(character);
	return (1);
}

/**
 *modFunct - will print %, nothing else
 *@pre: will check for invalid input
 *@place: prevents problems in other programs, MUST BE %, temporary
 *
 *Return: how many characters were printed, -1 if error
 */
int modFunct(char place, int pre)
{
	if (pre != 0 && place == '%')
		return (-1);

	_putchar('%');
	return (1);
}
