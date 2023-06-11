#include "hash_tables.h"

/**
 * hash_table_print- print hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hashnode_pointer;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hashnode_pointer = ht->array[i];
		while (hashnode_pointer != NULL)
		{
			printf("'%s' : '%s', ", hashnode_pointer->key, hashnode_pointer->value);
			hashnode_pointer = hashnode_pointer->next;
		}
	}
	printf("}");
}
