#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: value of a bit
 * @n: int
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{

int bit;

	if (index > 32)
		return (-1);

bit = (n >> index) & 1;
	return (bit);
}
