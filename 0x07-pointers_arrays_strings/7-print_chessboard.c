#include "main.h"

/**
 * print_chessboard - Function that prints a chessboard
 * @a: Pointer to 8 character string
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(*(*(a + i)));
			j++;
		}
		_putchar('\n');
		i++;
	}

}
