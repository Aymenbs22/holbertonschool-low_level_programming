#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: int
 * @index: index
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
	return (-1);
if ((*n >> index) == 1)
	return (1);
else
*n |= 1 << index;
	return (1);
}
