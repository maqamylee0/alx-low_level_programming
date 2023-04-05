#include "lists.h"

/**
 * add_nodeint- add node at end of list
 * @head: double pointer to start
 * @n: number to add to list
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new = malloc(sizeof(listint_t));
	listint_t *last = (*head);

	if(!new)
		return (NULL);
	
	if (last == NULL)
	{
		last = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}

