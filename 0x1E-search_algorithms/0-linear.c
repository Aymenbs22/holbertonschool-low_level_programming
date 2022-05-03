#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * i: int
 * @array: array is a pointer to the first element of the array to search in
 * @value: value is the value to search for
 * @size: size of array
 * Return: -1 or 1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
}
	return (-1);
}
