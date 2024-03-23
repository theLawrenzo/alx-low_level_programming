#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a double linked list
 * @h: Head node
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	while (tmp != NULL)
		len++;

	return (len);
}
