#include "lists.h"

/**
 * add-nodeint_end - Function that adds a node at the end of a listint_t
 * list
 * @head: A pointer to the pointer to the head object
 * @n: The data value of the new node
 *
 * Return: new
 */
listint_t *add-nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}
