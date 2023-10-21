#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabets,
 * in lowercase followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 97;
		while (j <= 122 && j >= 97)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
