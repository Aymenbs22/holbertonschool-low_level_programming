#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head
 * @index: index of the node, starting from 0
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
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
