#include "lists.h"

/**
 * list_len - function that returns the number of element
 * @h: pointer
 * Return: number of elements.
*/

size_t list_len(const list_t *h)
{
unsigned int i;
i = 0;
	while (h != NULL)
{
		i = i + 1;
		h = h->next;
}
	return (i);
}
