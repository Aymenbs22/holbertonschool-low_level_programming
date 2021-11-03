#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: array
 * @action: n
 * @size: size of aray
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

while (i < size)
{
	(*action)(array[i]);
		i++;
}
}
