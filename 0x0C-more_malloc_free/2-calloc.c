#include "main.h"

/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: Array size
 * @size: Data-type size
 *
 * Return: new_ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *new_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_ptr = malloc(nmemb * size);
	if (new_ptr == NULL)
		return (NULL);

	*new_ptr = 0;

	return ((void *)new_ptr);
}
