#include "main.h"
#include <stdarg.h>
/**
 * _printf - a vadriac function that takes a variable number of arguments
 * @format: pointer to a constant character
 *
 * Return: returns the number of characters
 */
int _printf(const char *format, ...)
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
			if (format[i] == 'c')
			{
				char p = va_arg(args, int);

				_putchar(p);
				count++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					count++;
				}
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
