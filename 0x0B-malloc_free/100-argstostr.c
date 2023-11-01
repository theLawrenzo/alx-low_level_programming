#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @str: String to find its length
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
		str++;
	}
	return (len);
}

/**
 * argstostr - Function that concatenates all its arguments
 * @ac: Arguments count
 * @av: Argument vector
 *
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	len = 0;
	while (ac)
	{
		len += _strlen(*(av + i));
		len++;
		i++;
	}

	str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		while (*(av + j))
		{
			*(str + i) = *(*(av + i) + j);
			*(str + i) = '\n';
			j++;
		}
		i++;
	}
}
