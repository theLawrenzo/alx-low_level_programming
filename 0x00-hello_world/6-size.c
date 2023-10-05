#include <stdio.h>

/**
 * main - Program that prints the size of various types
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	char c;
	long int ln;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return(0);
}
