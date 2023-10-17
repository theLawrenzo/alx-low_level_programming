#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * remove_non_num - Function that removes non numberes from a string
 * @s: String value
 *
 * Return: Nothing
 */
void remove_non_num(char *s)
{
	int i, j, len;
	char *tmp;

	i = 0;
	j = 0;
	len = strlen(s);
	while (i < len)
	{
		if ((s[i] >= 48) || (s[i] <= 57))
		{
			tmp[j] = s[i];
		}
		i++;
		j++;
	}

	i = 0;
	j = 0;
	len = strlen(tmp);
	while (i < len)
	{
		s[i] = tmp[i];
		i++;
	}
}


/**
 * _atoi - Function that converts a string to an integer
 * @s: String to be converted
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int *i;

	i = 0;
	remove_non_num(s);

	i = (int*)s;
	return (*i);
}
