#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: head
 * @n: content of node
 * Return: Node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *Node;
dlistint_t *tmp;

Node = malloc(sizeof(dlistint_t));
if (Node == NULL)
return (NULL);
	Node->n = n;
	Node->next = NULL;
if (*head == NULL)
{
	*head = Node;
return (Node);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = Node;
return (Node);
}
