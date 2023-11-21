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
	size_t sum;

	sum = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
