#include "lists.h"
/**
 * get_dnodeint_at_index[ get node at index
 * @head: pointer to hrad
 * @index: index for element to remove
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;
	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
