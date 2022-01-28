#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size is the size of the array
 * Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	new_h = malloc(sizeof(hash_table_t));
	if (!new_h)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
{
		free(new_h);
		return (NULL);
}
	while (i < size)
{
		array[i] = NULL;
		i++;
}
	new_h->size = size;
	new_h->array = array;

	return (new_h);
}
