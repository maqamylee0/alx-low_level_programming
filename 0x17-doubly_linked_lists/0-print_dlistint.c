#include "lists.h"
/**
 * print_dlistint- print number
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	const dlistint_t *current;

	count = 0;
	current = h;

	while (current != NULL)
	{
		count++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (count);
}
