#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head
 * Return: n
*/

int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;

if (*head == NULL)
{
return (0);
}
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
return (n);
}
