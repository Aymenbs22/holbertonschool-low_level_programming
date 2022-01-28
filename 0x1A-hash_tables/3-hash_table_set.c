#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @key: key can not be an empty string
 * @value: value is the value associated with the key
 * @ht: is the hash table you want to add or update the key/value
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;
	hash_node_t *new;


	if (!ht || !key || !(*key) || !*value || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
{
		if (!strcmp(key, tmp->key))
{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value)
				return (1);
			return(0);
}
		tmp = tmp->next;
}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
