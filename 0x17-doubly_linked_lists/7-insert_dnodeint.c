#include "lists.h"

/**
 * dll_len - Returns the length of a dll
 * @h: Pointer to the starting node
 *
 * Return: len
 */
size_t dll_len(dlistint_t *h)
{
	dlistint_t *tmp;
	size_t len = 0;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	return (len);
}

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
	dlistint_t *new_node, *tmp = *h;
	size_t len, i;

	len = dll_len(*h);
	if (idx >= len)
		return (NULL);
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else if (idx == (len - 1))
		new_node = add_dnodeint_end(h, n);
	else
	{
		for (i = 0; i < idx; i++)
			tmp = tmp->next;
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->next = tmp;
		new_node->prev = tmp->prev;
		new_node->n = n;
		tmp->prev->next = new_node;
		tmp->prev = new_node;
	}
	return (new_node);
}
