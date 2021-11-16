#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head
 * @n: content of node
 * Return: Node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *Node;
listint_t *tmp;

Node = malloc(sizeof(listint_t));
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
