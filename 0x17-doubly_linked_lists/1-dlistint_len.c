#include "lists.h"
/**
 * dlistint_len- print number
 * @h: pointer to list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	count = 0;
	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
