#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a double linked list
 * @head: Head Pointer
 * @n: Data at new node
 *
 * Return: new
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		tmp = *head;
	}
	else
	{
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				new->prev = tmp;
				tmp->next = new;
				break;
			}
			tmp = tmp->next;
		}
	}
	return (new);
}
