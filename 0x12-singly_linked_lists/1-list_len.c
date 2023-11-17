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
	const list_t *tmp;

	tmp = h;
	len = 0;
	while (tmp->next != NULL)
	{
		len++;
		tmp = h->next;
	}

	return (len);

}
