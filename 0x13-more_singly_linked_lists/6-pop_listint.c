#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t
 * @head: A pointer to the pointer to the head node
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!(*head))
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
