#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str: string
*/
void puts_half(char *str)
{
int nu = 0, len = 0, n;

	while (str[nu++])
	len++;
	if ((len % 2) == 0)
	n = len / 2;

	else

	n = (len + 1) / 2;
	for (nu = n; nu < len; nu++)
	_putchar(str[nu]);
	_putchar('\n');
}
