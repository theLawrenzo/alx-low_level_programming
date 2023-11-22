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
	listint_t *new;

	if (*head == NULL)
	{
		free(*head);
	}

	new = malloc(
}
