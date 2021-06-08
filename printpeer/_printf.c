#include "holberton.h"
#include <stdarg.h>

/**
 *_printf - will perform formatted printing
 *@format: the string which indicates format
 *
 *Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int pre = 0;
	int s = 0;
	int c = 0;
	va_list arg;

	t_fo speclib[] = {
		{"s", 0, sFunct},
		{"c", 1, cFunct},
		{"%", 1, modFunct},
		{NULL, NULL, NULL}
	};

	if (!format)
		return (0);

	va_start(arg, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			s = 0;
			while (format[i + 1] != *speclib[s].specify)
			{
				s++;
			}

			switch (speclib[s].type)
			{
				case 0:
					c += speclib[s].f(va_arg(arg, char *), pre);
					i += 2;
					break;
				case 1:
					c += speclib[s].f(va_arg(arg, int), pre);
					i += 2;
					break;
			}
		}
		else
		{
			c += _putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (c);
}
