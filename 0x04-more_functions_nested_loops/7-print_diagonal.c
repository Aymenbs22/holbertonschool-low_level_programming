#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
if (n > 0)
{
int j, k;
for (k = 0; k < n; k++)
{
for (j = 0; j < k; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
	_putchar('\n');
}
}
