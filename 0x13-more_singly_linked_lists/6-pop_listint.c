#include "lists.h"

/**
 * pop_listint- removes first element
 * @head: double pointer to start
 * Return: 0 if empty and data of node otherwise
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if ((*head) == NULL)
		return (0);
	if ((*head)->next != NULL)
	{
		n = (*head)->n;
		first = (*head);
		(*head) = (*head)->next;
		free(first);
		return (n);
	}
	else
	{
		n = (*head)->n;
		first = (*head);
		(*head) = (*head)->next;
		free(first);
		return (n);
	}
}
