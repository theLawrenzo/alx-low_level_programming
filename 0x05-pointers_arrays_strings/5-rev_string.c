#include "main.h"
#include <string.h>

/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = strlen(s);
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
