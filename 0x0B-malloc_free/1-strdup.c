#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @str: String to return its length
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * in memory.
 * @str: String to copy its value to the next memory location
 *
 * Return: NULL if str is not a string
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);


	new_str = (char *)malloc(_strlen(str));
	if (new_str == NULL)
		return (NULL);


	i = 0;
	while (*(str + i))
	{
		*(new_str + i) = *(str + i);
		i++;
	}

	return (new_str);
}
