#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @f: name
 * @name: n
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	while (i < size)
		(*action)(array[i]);
		i++;
}
