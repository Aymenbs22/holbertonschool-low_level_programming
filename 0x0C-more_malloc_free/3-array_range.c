#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - function that creates an array of integers
 * @min: min
 * @max: max
 * Return: ptr
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;
	int cn;

	if (min > max)
		return (NULL);
	cn = ((max - min) + 1);
	ptr = malloc(cn * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < cn; i++)
	{
		ptr[i] = j++;
	}
	return (ptr);
}
