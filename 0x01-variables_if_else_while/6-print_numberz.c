#include <stdio.h>

/**
 * main - Program that prints all single numbers of the base 10
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
	}
	putchar('\n');

	return (0);
}
