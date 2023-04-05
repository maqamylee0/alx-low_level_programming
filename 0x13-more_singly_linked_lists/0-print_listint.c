#include "lists.h"

/**
 * print_listint- print node data
 * @h: pointer to struct
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
