#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void);
{
	int n, p, l;

	for (n = 0; n <= 9; n++)
{
	for (p = 0; p < 9; p++)
	{
	l = n * p;

	printf("%d", l);

	putchar(',');
	if (l < 10)
	{
	putchar(' ');

	}
	}
	l = 9 * n;
	printf("%d", l);
	putchar('\n');
	}

	return (0);
}
