#include "lists.h"

/**
 * list_len- lenth of a list
 * @h:pointer to head of list
 *
 * Return:number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
