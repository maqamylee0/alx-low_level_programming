#include "lists.h"

/**
 * free_listint- free up list
 * @head: pointer to head
 * Return:nothing
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
