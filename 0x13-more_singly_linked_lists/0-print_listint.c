#include "lists.h"
/**
 * print_listint - function that prints all the elements of a list
 *@h: head
 *Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
unsigned int nodes;
const listint_t *temp = h;

	nodes = 0;
	while (temp != NULL)
{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
}
	return (nodes);
}
