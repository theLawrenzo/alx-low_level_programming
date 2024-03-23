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
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
		if (tmp == NULL)
			break;
	}
}
