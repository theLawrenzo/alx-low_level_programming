#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a
 * listint_t linked list
 * @head: A pointer to a pointer to the head element
 * @index: Index of the node
 *
 * Return: node_index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	tmp = head;
	if (tmp == NULL)
		return (NULL);

	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}

	if (index > count)
		return (NULL);

	count = 0;
	while (tmp)
	{
		if (index == count)
		{
			break;
		}
		count++;
		tmp = tmp->next;
	}

	return (tmp);
}
