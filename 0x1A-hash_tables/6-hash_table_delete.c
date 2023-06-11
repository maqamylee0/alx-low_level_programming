#include "hash_tables.h"

/**
 * hash_table_delete- delete hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hashnode_pointer, *holder;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hashnode_pointer = ht->array[i];
		while (hashnode_pointer != NULL)
		{
			holder = hashnode_pointer;
			hashnode_pointer = hashnode_pointer->next;
			free(holder->key);
			free(holder->value);
			free(holder);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
