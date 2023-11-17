#include "lists.h"

/**
 * print_list - Function that prints all elements of a list
 * @h: Pointer to the head node
 *
 * Return: sum
 */
size_t print_list(const list_t *h)
{
	size_t sum;

	sum = 0;
	while (h)
	{
		sum++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (sum);
}
