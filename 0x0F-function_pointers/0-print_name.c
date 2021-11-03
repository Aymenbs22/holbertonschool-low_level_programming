#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @f: name
 * @name: name
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	(*f)(name);
}
