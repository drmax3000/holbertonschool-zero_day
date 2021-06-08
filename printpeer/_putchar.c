#include <unistd.h>

/**
*_putchar - will print a singular character
*@c: the character to be printed
*
*Return: 1 with success, -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
