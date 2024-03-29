#include "lists.h"

/**
 * delete_nodeint_at_index- deletes node at index
 * @head: double pointer to head
 * @index: position to delete
 * Return: 1 if successful -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *mover;
	listint_t *prev;
	listint_t *next;

	mover = (*head);
	if (mover == NULL)
		return (NULL);
	while (mover != NULL)
	{
		next = mover->next;
		if (count == index)
		{
			prev->next = next;
			free(mover);
			return (1);
		}
		prev = mover;i
		count++;
		mover = mover->next;
	}
	return (-1);
}
