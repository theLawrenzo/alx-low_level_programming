#include <stdio.h>

/**
 * main - Program that prints all possible combination of two two-digit
 * numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				l = 48;
				while (l <= 57)
				{
					if ((i <= j || j <= k) && (j < k))
					{
						putchar(i);
						putchar(j);
						if (j <= 57)
						{
							putchar(' ');
						}
						putchar(k);
						putchar(l);
						if (l <= 57)
						{
							putchar(',');
							putchar(' ');
						}
					}

					l++;
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
