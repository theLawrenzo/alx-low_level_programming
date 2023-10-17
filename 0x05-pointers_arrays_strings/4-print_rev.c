#include "main.h"
#include <string.h>

/**
 * print_rev - Function that prints a string in reverse
 * @s: String to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(s[len]);
	_putchar('\n');
}
