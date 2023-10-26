#include "main.h"

/**
 * calc_prime - Function that calculates a prime number
 * @n: Number to calculate its prime
 * @i: Integer value
 *
 * Return: i
 */
int calc_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (calc_prime(n, i - 1));
}

/**
 * is_prime_number - Function that checks for prime number
 * @n: Number to be checked
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (calc_prime(n, n - 1));
}
