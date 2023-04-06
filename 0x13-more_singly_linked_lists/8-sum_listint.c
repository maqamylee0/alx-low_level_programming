#include "lists.h"

/**
 * sum_listint-sum of elements in a linked list
 * head: pointer to head of list
 * Return: sum of elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *now;

	if (head == NULL)
		return (0);
	now = head;
	while (now != NULL)
	{
		sum += now->n;
		now = now->next;
	}
	return (sum);
}
