#include "main.h"

/**
 * _printf - prints a std output
 * @format: string
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, args_count;
	va_list args;

	va_start(args, format);
	args_count = 0;
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			args_count++;
			_putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' || format[i] == 's')
				args_count += sortfunc(format[i])(args);
			else if (format[i] == 'i')
				args_count += sortfunc(format[i])(args);
			else if (format[i] == '%')
			{
				_putchar(format[i]);
				args_count++;
			}
			else if (format[i] == '\0')
			{
				break;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				args_count += 2;
			}
		}
	}
	va_end(args);
	return (args_count);
}
/**
 * sortfunc - sorts format handlers
 * @fmtspecifier: format in args
 *
 * Return: int
 */
int (*sortfunc(char fmtspecifier))(va_list args)
{
	if (fmtspecifier == 'c')
	{
		return (&formatC);
	}
	else if (fmtspecifier == 'd' || fmtspecifier == 'i')
	{
		return (&formatD);
	}
	else if (fmtspecifier == 's')
	{
		return (&formatS);
	}
	else
	{
		return (0);
	}
}
/**
 * formatC - Handles the c character
 * @args: the parameter arguments
 *
 * Return: Handled value
 */
int formatC(va_list args)
{
	char c = va_arg(args, int);

	c = _putchar(c);

	return (c);
}
/**
 * formatD - handles format d
 * @args: arguments
 *
 * Return: integer
 */
int formatD(va_list args)
{
	int c;

	int d = va_arg(args, int);

	c = print_d(d, 0);

	return (c);
}
/**
 * formatS - a function that handles format d
 * @args: arguments
 *
 * Return: returns an integer
 */
int formatS(va_list args)
{
	char *my_string;
	int my_chars;

	my_chars = 0;
	my_string = va_arg(args, char *);
	if (my_string != NULL)
	{
		while (*my_string != '\0')
		{
			_putchar(*my_string);
			my_chars++;
			my_string++;
		}
	}
	else
	{
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
	}
	return (my_chars);
}
