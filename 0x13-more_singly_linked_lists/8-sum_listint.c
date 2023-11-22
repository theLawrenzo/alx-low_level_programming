#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data(n) of a
 * listint singly linked list
 * @head: A pointer to the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	tmp = head;
	sum = 0;

	if (tmp == NULL)
		return (sum);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
