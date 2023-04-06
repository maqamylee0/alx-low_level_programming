#include "lists.h"

/**
 * get_nodeint_at_index- get node at index
 * @head: pointer to head
 * @index: position of node
 * Return: node at nth position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;
	listint_t *now;

	now = head;

	while (now != NULL)
	{
		count++;
		if (count == index)
			return (now);
		now = now->next;
	}
}
