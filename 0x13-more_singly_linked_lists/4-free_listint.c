#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: A pointer to the head element
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
	{
		free(head);
	}
	else
	{

		while (tmp->next)
		{
			free(tmp);
			tmp = tmp->next;
		}
	}

	free(tmp);
}
