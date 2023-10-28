#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 1 if s1 is less than s2
 * -1 if s1 is less than s2
 *  0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	i = 0;
	val = 0;
	while (*(s1 + i))
	{
		if (*(s1 + i) > *(s2 + i))
		{
			val++;
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			val--;
		}
		else
		{
			val = 0;
		}

		i++;
	}

	return (val);
}
