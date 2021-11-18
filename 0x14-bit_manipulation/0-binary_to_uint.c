#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: char
 * Return: i
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
unsigned int puis = 1;
unsigned int length;
int l;

length = strlen(b);
	if (b == NULL)
		return (0);
	for (l = length - 1; l >= 0; l--)
{
	if (b[l] != '0' && b[l] != '1')
		return (0);
	if (b[l] == '1')
{
		i += puis;
}
		puis *= 2;
}
		return (i);
}
