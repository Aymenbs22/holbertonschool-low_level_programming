#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int n, p;
	int l, m;
	int k;
for (n = 0; n <= 9; n++)
	{
for (p = 0; p <= 9; p++)
	{
	l = n * p;

	if (l < 10)
	{
	if (l != 0)
	{
	_putchar(' ');
	}
	_putchar(l + '0');
	}
	else
	{
	m = l / 10;
	k = l % 10;
	_putchar(m + '0');
	_putchar(k + '0');
	}
	if (p != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
