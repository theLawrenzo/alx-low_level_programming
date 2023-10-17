#include "main.h"
#include <string.h>

/**
 * puts_half - Function that prints half of a string
 * @str: String to print
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len;
	int n;
	int i;

	len = strlen(str);
	n = (len - 1) / 2;
	i = 0;

	while (i < (len / 2))
	{
		if (len % 2 != 0)
		{
			_putchar(n--);
		}
		else
		{
			_putchar(len--);
		}
		i++;
	}
	_putchar('\n');
}
