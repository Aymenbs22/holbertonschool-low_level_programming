#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key
 * @size: size is the size of the array of the hash table
 * Return: index at which the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0 || key == NULL)
{
	return (0);
}
	else
{
	idx = hash_djb2(key);
	return (idx % size);
}
}
