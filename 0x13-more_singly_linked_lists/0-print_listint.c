#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t
 * list
 * @h: A pointer to a pointer to a structure
 *
 * Return: sum
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t sum;

	tmp = h;
	sum = 0;
	if (tmp == NULL)
		return (0);

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		sum++;
	}
	return (sum);
}
