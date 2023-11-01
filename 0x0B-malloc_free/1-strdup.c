#include "main.h"

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

	
	new_str = (char *)malloc(sizeof(str) + 1);
	if (new_str == NULL)
		return (NULL);


	i = 0;
	while (*(str + i))
	{
		*(new_str + i) = *(str + i);
		i++;
	}
	*(new_str + i) = '\0';

	return (new_str);
}
