#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: Pointer to the head element of the linked list
 *
 * Return: sum
 */
size_t listint_len(const listint_t *h)
{
	size_t sum;

	sum = 0;
	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}
