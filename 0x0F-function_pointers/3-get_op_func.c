#include "3-calc.h"

/**
 * get_op_func - Function that selects the right function to perform
 * an operation
 * @s: Pointer to the character for the evaluation
 * @a: First integer value
 * @b: Second integer value
 *
 * Return: A function that corresponds to the character passed
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (ops[i].f);
}
