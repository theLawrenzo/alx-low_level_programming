#include "lists.h"

/**
 * add_node - Function that adds node at the beginning of a
 * list_t list
 * @head: A pointer to a pointer to head
 * @str: String to duplicate
 *
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (*head)
	{
		while (*head)
		{
			new_node = (list_t *)malloc(sizeof(list_t));
			if (new_node == NULL)
				return (NULL);

			tmp = head;
			head = new_node;
			new_node = tmp;
		}
	}
	else
	{
		new_node = (list_t *)malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		head = new_node;
	}

	return (new_node);
}
