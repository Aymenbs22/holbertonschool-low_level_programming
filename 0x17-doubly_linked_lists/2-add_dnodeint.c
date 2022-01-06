#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: head
 * @n:content of node
 * Return: Node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *Node;
Node = malloc(sizeof(dlistint_t));
if (Node == NULL)
	return (NULL);
Node->n = n;
Node->prev = NULL;
Node->next = *head;
if (*head != NULL)
	(*head)->prev = Node;
*head = Node;
return (Node);
}
