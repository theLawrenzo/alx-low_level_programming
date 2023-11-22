#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: A double pointer to the head element
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *prev;

	if (*head == NULL)
		free(*head);

	tmp = *head;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
		free(prev);
	}

	free(tmp);
	*head = NULL;
}
