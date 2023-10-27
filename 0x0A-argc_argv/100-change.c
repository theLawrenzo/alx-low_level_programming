#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: Number of arguments passed
 * @argv: A pointer to the arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int num;

	num = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(*(argv + 1));
	if (num < 0)
	{
		printf("0\n");
	}



	return (0);
}
