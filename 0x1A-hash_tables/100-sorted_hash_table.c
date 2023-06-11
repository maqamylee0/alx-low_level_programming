#include "hash_tables.h"

/**
 * shash_table_create- sorted hashtable
 * @size: size of hashtable
 * Return: pointer to sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(sizeof(shash_table_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
	{
		ht->shead = ht->array[i];
		ht->stail = ht->array[i];
	}
	return (ht);
}
/**
 * shash_table_set- set key/value
 * @key: key
 * @value: value
 * @ht: hashtable
 * Rewturn: 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *previous, *new_node;
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return(1);
	}
	current = ht->shead;
	previous = NULL;
	while (current != NULL && strcmp(key, current->key) > 0)
	{
		previous = current;
		current = current->snext;
	}
	if (previous == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		new_node->sprev = previous;
		new_node->snext = current;
		new_node->snext = current;
		if (current != NULL)
			current->sprev = new_node;
		else
			ht->stail = new_node;
	}
	return (1);
}
/**
 * shash_table_get- get value from key
 * @ht: sorted hastable
 * @key: key
 * Return: pointer to value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ht2;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ht2 = ht->array[index];
	while (ht2 != NULL)
	{
		if (strcmp(ht2->key, key) == 0)
		{
			return ht2->value;
		}
		ht2 = ht2->snext;
	}
	return (NULL);
}

/**
 * shash_table_print- print key value pairs
 * ht: hashtble
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long i, j;
	shash_node_t *holder;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		holder = ht->array[i];
		while (holder != NULL)
		{
			if (j == 0)
				printf("'%s': '%s'", holder->key, holder->value);
			else
			{
				printf(", ");
				printf("'%s': '%s'", holder->key, holder->value);
			}
			j++;
			holder = holder->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev- print hastaable using reverse order
 * @ht: hashtable
 * Return:nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	
	if (ht == NULL)
		return;
	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete- deletes hashtable
 * @ht: hashtable
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (ht == NULL)
		return;
	current = ht->shead;
	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
	free(ht);
}
