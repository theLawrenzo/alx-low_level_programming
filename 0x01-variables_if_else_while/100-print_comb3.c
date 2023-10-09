#include <stdio.h>

/**
 * main - Program that prints all possible different combination of
 * two digit numbers
 *
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (j <= 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
