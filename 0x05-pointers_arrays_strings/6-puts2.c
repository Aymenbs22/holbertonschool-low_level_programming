#include "main.h"
/**
 * puts2 - function that prints a string, in reverse
 *@str: char
 * i - 0
*/
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i += 2)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
