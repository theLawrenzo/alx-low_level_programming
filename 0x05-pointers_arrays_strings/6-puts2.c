#include "main.h"

/**
 * puts2 - Function that prints every other character of the string
 * @str: String to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 != 0)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(str[i++]);
		}
	}

	_putchar('\n');
}
