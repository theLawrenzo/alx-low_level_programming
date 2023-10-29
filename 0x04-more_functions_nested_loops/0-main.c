#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	c = 'A';
	i = _isupper(c);

	if (i)
		printf("%c\n", c);
	else
		printf("\n");

	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
