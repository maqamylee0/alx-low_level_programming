#include "lists.h"
/**
 * delete_dnodeint_at_index- deletes node at index
 * @head: double pointer to head
 * @index: index to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *hold;
	unsigned int count;

	if (index == 0)
	{
		hold = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(hold);
		return (1);
	}
	count = 0;
	current = *head;
	while (current != NULL)
	{
		if ((index - 1) == count)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
