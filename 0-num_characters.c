#include "main.h"
/**
 * printf - a variadic function that takes in variable arguments
 *
 * Return:returns the number of characters
 */
int _printf(const char *format, ...)
{
	int my_chars,k, length_of_string;
	va_list num_of_args;
	if (format == NULL)
		return (-1);
	va_start(num_of_args,format);
	for(k = 0; format[k] != '\0'; k++)
	{
		if (format[k] != '%')
		{
			_putchar(format[k]);
			my_chars++;
		}
		else
		{
			k++;
			if (format[k] == '\0')
				break;
			if (format[k] == '%')
			{
				_putchar(format[k]);
				my_chars++;
			}
			else if (format[k] == 'c')
			{
				_putchar(va_arg(num_of_args, int));
				my_chars++;
			}
			else if (format[k] == 's')
			{
				char *my_string = va_arg(num_of_args, char *);

				length_of_string = 0;

				while (my_string[length_of_string] != '\0')
				{
					_putchar(my_string[length_of_string]);
					length_of_string++;
				}
				my_chars += length_of_string;
			}
			else
			{
				_putchar('%');
				_putchar(format[k]);
				my_chars += 2;
			}
		}
	}
	va_end(num_of_args);
	return (my_chars);
}
