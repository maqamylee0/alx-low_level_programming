#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtab = malloc(sizeof(hash_table_t));

	if (size <= 0)
	{
		free(hashtab);
		return NULL;
	}
	hashtab->size = size;
	return (hashtab);
}
