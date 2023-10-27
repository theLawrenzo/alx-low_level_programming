#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Function that checks for digit
 * @c: character to check
 *
 * Return: 1 if c is digit
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * main - Program that adds positive integers
 * @argc: Number of arguments passed
 * @argv: A pointer to the arguments passsed
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int i, val, sum;

	i = 0;
	val = 0;
	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			val = atoi(*(argv + i));
			if (_isalpha(val))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += val;
			}

			i++;
		}

		printf("%d\n", sum);
	}

	return (0);
}
