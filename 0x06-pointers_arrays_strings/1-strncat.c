#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: Detinantio string
 * @src: Source string
 * @n: Size of src to concatenate to dest
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strlen(dest);
	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	*(dest + len + i) = '\0';

	return (dest);
}
