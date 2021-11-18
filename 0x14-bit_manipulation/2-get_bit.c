#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{

int bit;

	if (index > 32)
		return (index);

bit = (n >> index) & 1;
	return (bit);
}
