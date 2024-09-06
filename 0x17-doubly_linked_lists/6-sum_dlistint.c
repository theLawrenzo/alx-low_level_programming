#include "lists.h"

/**
 * sum_dlistint - Returns a sum of all the ints in a linkedlist
 * @head: Head pointer to the linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
