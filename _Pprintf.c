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
	{
		return (-1);
	}
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
			if (format[i] == 'c' || format[i] == 'd')
			{
				args_count += sortfunc(format[i])(args);
			}
			else if (format[i] == '%')
			{
				_putchar(format[i]);
				args_count++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				args_count += 2;
			}
		}
	}
	return (args_count);
	va_end(args);
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
	else if (fmtspecifier == 'd')
	{
		return (&formatD);
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
