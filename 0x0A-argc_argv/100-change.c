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

	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num == 10)
			num -= 10;
		else if (num == 5)
			num -= 5;
		else if (num == 2)
			num -= 2;
		else if (num == 1)
			num -= 1;
	}

	printf("%d\n", num);



	return (0);
}
