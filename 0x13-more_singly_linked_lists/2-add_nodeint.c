#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t
 * list
 * @head: A Pointe to the pointer to the head element
 * @n: The value at the head element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;

	new->next = tmp;
	*head = new;

	return (new);
}
