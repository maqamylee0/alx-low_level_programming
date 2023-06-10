#include "hash_tables.h"

/**
 * hash_table_create- function to crearte hashtable
 * @size: size of aray
 * Return: pointer to created hastable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtab = malloc(sizeof(hash_table_t));

	if (hashtab == NULL)
	{
		free(hashtab);
		return (NULL);
	}
	hashtab->size = size;
	return (hashtab);
}
