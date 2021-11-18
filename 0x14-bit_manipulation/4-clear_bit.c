#include"main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: unsigned int
 * @index: index
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
	return (-1);
if (*n >> index == 0)
	return (1);
else
*n &= ~(1 << index);
	return (1);
}
