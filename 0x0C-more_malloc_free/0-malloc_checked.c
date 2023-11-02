#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: The size of the memory to be allocated
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
