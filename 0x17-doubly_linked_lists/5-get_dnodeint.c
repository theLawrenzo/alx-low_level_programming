#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at a specific index
 * @head: Head node pointer
 * @index: Index
 *
 * Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (index == i)
			return (tmp);

		i++;
		tmp = tmp->next;
	}
	if (index > i)
		return (NULL);
	return (tmp);
}
