#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes node at given index
 * @head: Pointer to the linked list
 * @index: Index location
 *
 * Return: 1 if successful
 * -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	i = 1;
	tmp = *head;
	while (tmp->next)
	{
		prev = tmp;
		if (i == index)
		{
			tmp = tmp->next;
			free(prev);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
