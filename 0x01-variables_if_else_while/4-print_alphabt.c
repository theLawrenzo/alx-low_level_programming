#include <stdio.h>

/**
 * main - Program that prints all alphabets excluding q and e
 *
 * Return: Nothing
 */
int main(void)
{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
		{
			i++;
			continue;
		}
		putchar(i++);
	}

	putchar('\n');

	return (0);
}
