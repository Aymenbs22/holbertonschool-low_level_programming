#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0;
	hash_node_t *node;
	char *c = "";

	if (!ht || !ht->array)
		return;
	putchar('{');

	while (idx < ht->size)
{
		node = ((ht->array)[idx]);
		while (node)
{
			printf("%s'%s': '%s'", c, node->key, node->value);
			c = ", ";
			node = node->next;
}
		idx++;
}
	puts("}");
}
