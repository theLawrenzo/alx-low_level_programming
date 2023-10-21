#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: A string value
 * @s2: Another string value
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	int i;

	result = 0;
	i = 0;

	if ((*(s1 + i) != '\0') &&  (*(s2 + i) != '\0') && (*(s1 + i) == *(s2 + i)))
	{
		while (*(s1 + i) == *(s2 + i))
		{
			result = *(s1 + i) - *(s2 + i);
			i++;
		}
		return (result);
	}
	else if ((*(s1 + i) < *(s2 + i)) && (*(s1 + i) && *(s2 + i)))
	{
		result = *(s1 + i) - *(s2 + i);
		return (result);
	}
	else if ((*(s1 + i) > *(s2 + i)) && (*(s1 + i) && *(s2 + i)))
	{
		result = *(s1 + i) - *(s2 + i);
		return (result);
	}

	return (result);
}
