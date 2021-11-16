#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: Head
 * Return: number of elements in a linked listint_t list (nodes)
*/
size_t listint_len(const listint_t *h)
{
unsigned int nodes = 0;

	while (h)
{
	nodes++;
	h = h->next;
}
	return (nodes);
}
