#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	a = a - b;
	b = a + b;
	a = b - a;
	return 0;
}
