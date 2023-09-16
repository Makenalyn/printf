#include "main.h"
#include <stdarg.h>

/**
 * task1 - function checks for integer specifier
 * @format: the string containing the values
 *
 * Return: count
 */
int task1(const char *format, ...)
{
	int i, count;
	va_list args;

	va_start(args, format);

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
			{
				int x = va_arg(args, int);

				_putchar(x);
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		count++;
	}
	va_end(args);

	return (count);
}
