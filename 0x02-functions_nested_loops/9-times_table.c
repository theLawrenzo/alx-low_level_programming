#include "main.h"

/**
 * times_table - Function that prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(i * j);
			if (j && j <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}

}
