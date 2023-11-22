#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of a listint_t
 * list
 * @head: A pointer to the pointer to the head object
 * @n: Value to add to a member of the head object
 *
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp;
	*head = new;

	return (new);
}
