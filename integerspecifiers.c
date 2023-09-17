#include "main.h"
#include <stdarg.h>

/**
 * _printf - function checks for integer specifier
 * intprint - print integer
 * @p: argument to intprint
 * Return: count
 */
void intprint(int);
int conv_d(const char *format, ...)
{
	int i, count;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
				else if (format[i] == '%')
				{
					_putchar(format[i]);
					count++;
				}
				else if (format[i] == 'd')
				{
					int p = va_arg(args, int);

					intprint(p);
					count++;
				}
				else
				{
					_putchar(format[i]);
					count += 2;
				}
		}
	}
	va_end(args);

	return (count);
}

/**
 * intprint - print integer using recursion
 * @p: argument
 *
 * Return: void
 */
void intprint(int p)
{
	if (p < 0)
	{
		_putchar('-');
		p = -p;
	}
	if (p == 0)
	{
		_putchar('0');
	}
	if (p >= 10)
	{
		intprint(p / 10);
	}
	_putchar(p % 10 + '0');
}
