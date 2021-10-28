#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @size: char
 * @nmemb: size
 * Return: j
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *ptr;
void *j;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
for (i = 0; i < (size * nmemb); i++)
ptr[i] = 0;
j = ptr;
return (j);
}

