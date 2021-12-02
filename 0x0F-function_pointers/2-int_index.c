#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: pointer
 * @size: int
 * @cmp: pointer
 * Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))

{
int i = 0;
	if (size <= 0)
		return (-1);
	if (array && cmp)
{
	for (; i < size; i++)
{
	cmp(array[i]);
	if (cmp(array[i]) == 1)
{
		return (i);
}
}
}
		return (-1);
}
