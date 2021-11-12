#include "lists.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: length of a string.
*/
int _strlen(const char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	continue;
	return (i);
}
/**
 * add_node - function that adds a new node at the beginning of list
 *@head: head of linked list
 *@str: pointer
 *Return: head
*/
list_t *add_node(list_t **head, const char *str)
{
char *p;
int size;
list_t *l;

	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);
	if (str != NULL)
{
	p = strdup(str);
	size = _strlen(str);
}
	l->len = size;
	l->str = p;
	l->next = *head;
	*head = l;
return (*head);
}
