#include "lists.h"

/**
 * add-nodeint_end - Function that adds a node at the end of a linked listint_t
 * list
 * @head: A pointer to a pointer to the head element
 * @n: The data value of the head element
 *
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
		
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
