#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: A pointer to the head element
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *prev;

	tmp = head;
	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while (tmp->next)
		{
			prev = tmp;
			tmp = tmp->next;
			free(prev);
		}
	}

	free(tmp);
}
