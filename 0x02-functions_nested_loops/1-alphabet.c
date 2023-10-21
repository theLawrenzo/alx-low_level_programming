#include "main.h"

/**
 * print_alphabet - Function that prints all the alphabets in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
