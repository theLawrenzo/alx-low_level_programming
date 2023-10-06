#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in
 * lowercase
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

	i = 'a';
	while (i <= 'f')
	{
		putchar(i++);
	}

	putchar('\n');

	return (0);
}
