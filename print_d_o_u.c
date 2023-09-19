#include "main.h"

/**
 * print_d - function prints format specifier d
 * @d: parameter
 * @c: parameter
 * Return: void
 */
int print_d(long d, int c)
{
	if (d < 0)
	{
		_putchar('-');
		c++;
		d = -d;
	}
	if (d == 0)
	{
		_putchar('0');
	}
	if (d >= 10)
	{
		c = print_d(d / 10, c);
	}
	_putchar(d % 10 + '0');
	return (c + 1);
}
/**
 * print_u - prints unsigned int
 * @u: parameter
 *
 * Return: void
 */
void print_u(unsigned int u)
{
	if (u == 0)
	{
		_putchar('0');
	}
	if (u >= 10)
	{
		print_u(u / 10);
	}
	_putchar(u % 10 + '0');
}
/**
 * print_o - prints octal value
 * @o: parameter
 *
 * Return: void
 */
void print_o(long o)
{
	int oct_holder[100];

	int index, rev;

	index = 0;

	while (o != 0)
	{
		oct_holder[index] = o % 8;

		o = o / 8;

		index++;
	}
	for (rev = index - 1; rev > 0; rev--)
	{
		char rev_octal = oct_holder[index] + '0';

		_putchar(rev_octal);
	}
}
int  my_binary(unsigned int  my_num, int counter)
{
	int n;
	int my_bit_store[32];

	if (my_num == 0)
	{
		_putchar(my_num + '0');
		counter++;
		return (counter);
	}
	for (n = 0; n < 32; n++)
        {
                my_bit_store[n] = my_num % 2;
                my_num /= 2;
        }
        for ( n = 31; n >= 0; n--)
	{
		_putchar(my_bit_store[n] + '0');
		counter++;
	}
	return (counter);
}
