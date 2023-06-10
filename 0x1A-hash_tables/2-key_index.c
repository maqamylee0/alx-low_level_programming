#include "hash_tables.h"

/**
 * key_index- index to store value
 * @key: key value
 * @size: size of array
 * Return: index to store value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed = hash_djb2(key);
	unsigned long int index = hashed % size;

	return (index);
}
