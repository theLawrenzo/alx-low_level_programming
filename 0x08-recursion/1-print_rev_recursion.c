#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: String to print
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int i, len;

	i = 0;
	len = (int)strlen(s);

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	i++;
	_putchar(s[len]);
	len--;
	_print_rev_recursion(&s[len]);


}
