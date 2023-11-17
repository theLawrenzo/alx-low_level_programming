#include "lists.h"

/**
 * list_len - Function that returns the numbers of elements in a
 * linked list
 * @h: Pointer to the head element
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);

}
