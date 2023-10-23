#include "main.h"

/**
 * jack_bauer - Function that prints every minute of Jack Bauer's day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i, j, a, b;

	i = 48;
	while (i <= 50)
	{
		if ((j == 57) && (a == 53 && b == 57))
			break;

		j = 48;
		while (j <= 57)
		{
			a = 48;
			while (a <= 53)
			{
				b = 48;
				while (b <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(a);
					_putchar(b);
					_putchar('\n');

					b++;
				}

				a++;
			}

			j++;
		}

		i++;
	}
}
