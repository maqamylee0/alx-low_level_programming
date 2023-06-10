#include "hash_tables.h"

/**
 * hash_table_set- add element to hashtable
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	unsigned long int index;
	hash_node_t *hashnode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	hashnode = malloc(sizeof(hash_node_t));
	if (hashnode == NULL)
		return (NULL);
	hash = hash_djb2((unsigned char *)key);
	index = hash % ht->size;
	hashnode->key = strdup(key);
	if (hashnode->key == NULL)
	{
		free(hashnode);
		return (0);
	}
	hashnode->value = strdup(value);
	if (hashnode->value == NULL)
	{
		free(hashnode);
		return (0);
	}
	hashnode->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = hashnode;
	}
	hashnode->next = ht->array[index];
	ht->array[index] = hashnode;
	return (1);
}
