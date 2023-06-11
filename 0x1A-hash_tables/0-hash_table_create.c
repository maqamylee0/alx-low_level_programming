#include "hash_tables.h"

/**
 * hash_table_create- function to crearte hashtable
 * @size: size of aray
 * Return: pointer to created hastable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtab;

	hashtab	= malloc(sizeof(hash_table_t));
	if (hashtab == NULL)
	{
		return (NULL);
	}
	hashtab->array = malloc(sizeof(hash_node_t *) * size);
	if ((hashtab->array) == NULL)
	{
		free(hashtab);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashtab->array[i] = NULL;
	hashtab->size = size;
	return (hashtab);
}
