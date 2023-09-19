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
 * @octal: parameter
 * @k: counter
 *
 * Return: void
 */
unsigned long print_o(unsigned long octal, unsigned long k)
{
	int oct_holder[100];

	int p, m;

	p = 0;

	while (octal != 0)
	{
		oct_holder[p] = octal % 8;

		octal = octal / 8;

		p++;
	}
	for (m = p - 1; m >= 0; m--)
	{
		char reversed_octal_n = oct_holder[m] + '0';

		_putchar(reversed_octal_n);
	}

	return (k + 1);
}

