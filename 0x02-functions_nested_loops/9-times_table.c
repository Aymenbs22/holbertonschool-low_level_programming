#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
{
	_putchar(48);
	for (b = 1; b <= 9; b++)
{
	p = a * b;
	_putchar(44);
	_putchar(32);
	if (p <= 9)
{
	_putchar(32);
	_putchar(p + 48);
}
	else
{
	_putchar((p / 10) + 48);
	_putchar((p % 10) + 48);
}
}
	_putchar('\n');
}
}
