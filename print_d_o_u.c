#include "main.h"

/**
 * print_d - function prints format specifier d
 * @d: parameter
 *
 * Return: void
 */
void print_d(int d)
{
	if (d < 0)
	{
		_putchar('-');
		p = -p;
	}
	if (d == 0)
	{
		_putchar('0');
	}
	if (d >= 10)
	{
		printint(d / 10);
	}
	_putchar(d % 10 + '0');
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
		print_u((u / 10);
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
