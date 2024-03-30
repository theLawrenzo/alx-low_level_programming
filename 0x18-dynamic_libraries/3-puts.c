#include "main.h"

/**
 * _puts - Prints a string to standard output
 * @s: String to print
 *
 * Return: Nothing
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
		putchar(s[i++]);
}
