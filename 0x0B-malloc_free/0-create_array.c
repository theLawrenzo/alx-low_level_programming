#include "main.h"

/**
 * create_array - Function that creates an array of chars and
 * initializesit with a specific char
 * @size: Size of the array
 * @c: Character value
 *
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		*(str + i) = c;
		i++;
	}

	return (str);
}
