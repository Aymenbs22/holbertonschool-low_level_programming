#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 *
 *@a:value
 *@b:value
 */
void swap_int(int *a, int *b)
{
	a ^= b;
	b ^= a;
}
