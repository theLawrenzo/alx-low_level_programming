#include "lists.h"

/**
 * print_dlistint - Prints all elements in a double linked list
 * @h: Head node
 *
 * Return: num_nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num_nodes++;
	}
	return (num_nodes);
}
