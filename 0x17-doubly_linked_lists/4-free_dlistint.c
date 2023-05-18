#include "lists.h"
/**
 * free_dlistint- frees a list
 * @head: ponter to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *holder = NULL;

	current = head;
	while (current != NULL)
	{
		holder = current->next;
		free(current);
		current = holder;
	}
}
