#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a
 * sorted array of integers
 * i: int
 * @array: array is a pointer to the first element of the array to search in
 * @value: value is the value to search for
 * @size: size of array
 * Return: -1 or 1
*/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	size_t left = 0;
	size_t right = size - 1;
	size_t i = left;
	size_t m;

	while (left <= right)
	{
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");
		m = (left + right) / 2;
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
