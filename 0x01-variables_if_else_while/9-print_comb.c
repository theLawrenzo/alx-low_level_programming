#include <stdio.h>

/**
 * main - Program that prints all possible combination of single
 * digit numbers
 *
 * Return: Nothing
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i++);
		if (i <= 57 && i)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
