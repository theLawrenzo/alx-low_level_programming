#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index to insert node
 * @n: Value to insert at idx
 *
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp = *h;
	int i = 0;

	if (tmp == NULL || idx < 0)
		return (NULL);

	while (tmp != NULL)
	{
		if (idx == 0)
		{
			new_node = add_dnodeint(h, n);
			break;
		}
		if (tmp->next == NULL)
		{
			new_node = add_dnodeint_end(h, n);
			break;
		}
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = tmp;
		new_node->prev = tmp->prev;
		tmp->prev = new_node;
	}
}
