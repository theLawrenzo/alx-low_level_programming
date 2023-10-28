#include "main.h"

/**
 * _puts - Function that prints a string
 * @s: String to print
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
