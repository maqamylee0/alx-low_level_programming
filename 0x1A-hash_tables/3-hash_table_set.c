#include "hash_tables.h"

/**
 * checkifexists- check for existing key
 * @hashnode: new node
 * @hashnode2: pointer to iterate nodes
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int checkifexists(hash_node_t *hashnode, hash_node_t *hashnode2,
const char *key, const char *value)
{
	while (hashnode2 != NULL)
	{
		if (strcmp(hashnode2->key, key) == 0)
		{
			free(hashnode2->value);
			hashnode2->value = strdup(value);
			free(hashnode->key);
			free(hashnode->value);
			free(hashnode);
			return (1);
		}
		hashnode2 = hashnode2->next;
	}
	return (0);
}
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
	hash_node_t *hashnode, *hashnode2;
	int result;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	hashnode = malloc(sizeof(hash_node_t));
	if (hashnode == NULL)
		return (0);
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
	hashnode2 = ht->array[index];
	result = checkifexists(hashnode, hashnode2, key, value);
	if (result != 1)
		return (0);
	hashnode->next = ht->array[index];
	ht->array[index] = hashnode;
	return (1);
}
