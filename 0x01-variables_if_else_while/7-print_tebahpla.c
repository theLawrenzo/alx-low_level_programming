#include <stdio.h>

/**
 * main - Program that prints all the alphabets in reverse
 *
 * Return: Nothing
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i--);
	}
	putchar('\n');

	return (0);
}
