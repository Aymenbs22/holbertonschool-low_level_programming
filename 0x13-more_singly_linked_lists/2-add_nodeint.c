#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of the list
 * @n: int
 * @head: head
 * Return: NewNode
*/
listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *NewNode;

NewNode = (listint_t *)malloc(sizeof(listint_t));
if (NewNode == NULL)
	return (NULL);
NewNode->n = n;
NewNode->next = *head;
*head = NewNode;
	return (NewNode);
}
