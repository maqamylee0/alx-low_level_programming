#include "lists.h"
#include <stdio.h>

/**
 * print_list- prints elements in list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	unsigned int nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h != NULL)
	{
		unsigned int j = h->str == NULL ? 0 : h->len;

		printf("[%u] %s\n", j, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
