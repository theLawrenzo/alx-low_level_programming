#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked lists
 * @head: Head node pointer
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	if (tmp == NULL)
	{
		return;
	}
	else
	{
		tmp = tmp->next;
		free(tmp->prev);
		free_dlistint(tmp);
	}
}
