#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head
 * @index: index of the node, starting at 0
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node = 0;

while (node < index)
node++;
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
