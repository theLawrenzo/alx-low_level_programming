#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: Pointer to a listint linked list
 *
 * Return: first
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *tmp;

	prev = NULL;
	current = *head;
	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		current->next = prev;
		prev = current;
		current = tmp;
	}

	return (tmp);
}
