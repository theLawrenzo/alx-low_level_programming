#include "main.h"

/**
 * _strcpy - Function that copies a string to another buffer
 * @dest: Buffer to copy string to
 * @src: Buffer to copy string from
 *
 * Return: dest
 */
void _strcpy(int *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
}

/**
 * _realloc - Function that reallocates a memory block using malloc
 * @ptr: Pointer to old memory block
 * @old_size: Size of old memory block
 * @new_size: Size to be allocated for new block
 *
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_ptr;

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size * sizeof(int));
		if (new_ptr == NULL)
			return (NULL);

		_strcpy(new_ptr, ptr);
		free(ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	return ((void *)new_ptr);
}
