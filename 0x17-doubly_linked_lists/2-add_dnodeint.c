#include "lists.h"

/**
 * add_dnodeint - Adds node at the beginning of a doubly linked list
 * @head: Head node pointer
 * @n: Data at node
 *
 * Return: new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (tmp == NULL)
	{
		*head = new;
		tmp = *head;
	}
	else
	{
		new->next = tmp;
		tmp->prev = new;
		*head = new;
	}
	return (new);
}
