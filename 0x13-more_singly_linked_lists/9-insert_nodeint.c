#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a node at a given index
 * location
 * @head: A pointer to the linked list
 * @idx: Index to add node
 * @n: Data value of the node
 *
 * Return: new
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;
	if (tmp == NULL)
	{
		new->next = NULL;
		tmp = new;
	}
	else
	{
		i = 0;
		while (tmp->next)
		{
			if (idx == i)
			{
				new->next = tmp->next;
				tmp->next = new;
				break;
			}
			i++;
			tmp = tmp->next;
		}
	}

	return (new);
}
