#include <stdio.h>

/**
 * main - Program that prints all possible combination of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (k <= 57)
					{
						putchar(',');
						putchar(' ');
					}
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
