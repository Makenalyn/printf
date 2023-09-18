#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * num_chars -  a vadriac function that takes a variable number of arguments
 * @format: pointer to a constant character
 *
 * Return: returns the number of characters
 */
int _printf(const char *format, ...)
{
	int i, my_chars, length_of_string;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	my_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			my_chars++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				break;
			}
			if (format[i] == '%')
			{
				_putchar(format[i]);
				my_chars++;
			}
			else if (format[i] == 'c')
			{
				char p = va_arg(args, int);

				_putchar(p);
				my_chars++;
			}
			else if (format[i] == 's')
			{
				char *my_string = va_arg(args, char *);

				length_of_string = 0;

				while (my_string[length_of_string] != '\0')
				{
					_putchar(my_string[length_of_string]);
					length_of_string++;
				}
				my_chars += length_of_string;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int p = va_arg(args, int);

				printint(p);
				my_chars++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				my_chars += 2;
			}
		}
	}
	va_end(args);
	return (my_chars);
}
void printint(int p)
{
	if (p < 0)
	{
		_putchar('-');
		p = -p;
	}
	if (p == '0')
	{
		_putchar('0');
	}
	if (p >= 10)
	{
		printint(p / 10);
	}
	_putchar(p % 10 + '0');
}
