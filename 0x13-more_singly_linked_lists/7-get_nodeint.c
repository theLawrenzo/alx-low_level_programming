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

	tmp = head;
	if (tmp = NULL)
		return (NULL);

	if (tmp->next && index >= 0)
	{
		return (tmp);
	}
	return (tmp);
}
