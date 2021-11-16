#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head
 * @index: index of the node, starting at 0
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i;

	tmp = head;
	i = 0;
while (tmp)
{
if (i == index)
return (tmp);
	i++;
	tmp = tmp->next;
}
return (NULL);
}
