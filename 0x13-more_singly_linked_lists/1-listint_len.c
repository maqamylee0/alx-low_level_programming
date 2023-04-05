#include "lists.h"

/**
 * listint_len- number of elements in a singlr linked list
 * @h: pointer to head of list
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
		;
	return (count);
}
