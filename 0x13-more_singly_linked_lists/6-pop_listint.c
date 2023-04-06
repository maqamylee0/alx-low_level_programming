#include "lists.h"

/**
 * pop_listint- removes first element
 * @head: double pointer to start
 * Return: 0 if empty and data of node otherwise
 */

int pop_listint(listint_t **head)
{
	int n;

	if ((*head) == NULL)
		return (0);
	else
	{
		if (*head)->next->next != NULL)
		{
			n = (*head)->n;
			(*head)->next = (*head)->next->next;
			return (n);
		}
		else
		{
			n = (*head)->n;
			(*head)->next = NULL);
			return (n);
		}
	}
}	
