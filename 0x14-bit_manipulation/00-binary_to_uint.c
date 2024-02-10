#include "main.h"

/**
 * _strlen - Find string length
 * @s: String pointer
 *
 * Return: len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while (*(s++))
	{
		len++;
	}
    	return (len);
}
/**
 * _strcpy - Function that copies a string
 * @dest: Destination
 * @src: Source
 *
 * Return: tmp_dest
 */
const char *_strcpy(const char *dest, const char *src)
{
	int i;
	char *tmp_dest, *tmp_src;

	tmp_dest = (char *)dest;
	tmp_src = (char *)src;
	i = 0;
	while (tmp_src[i])
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	tmp_dest[i] = '\0';
	return ((const char *)tmp_dest);
}

/**
 * _strdup - Function that duplicates a string from the head
 * @s: String to duplicate
 *
 * Return: new
 */
const char *_strdup(const char *s)
{
	const char *new;

	new = malloc(_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	return (_strcpy(new, s));
}

/**
 * _pow_recursion - Calculate the power value of a number
 * @a: Whole number
 * @b: power
 *
 * Return: n
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);

	if (b == 0)
	{
		return (1);
	}

	return (a * _pow_recursion(a, b - 1));
}

/**
 * string_rev - Reverse a string
 * @s: String to reverse
 *
 * Return: Nothing
 */
void string_rev(const char *s)
{
	int i, len;
	char *tmp, c;

	tmp = (char *)s;
	len = _strlen(s);
	i = 0;
	while (i < (len / 2))
	{
		c = *(tmp + i);
		tmp[i] = tmp[len];
		tmp[len] = c;
		i++;
	}
}

/**
 * check_binary_num - Check binary number
 * @b: A bit string
 *
 * Return: 0 if a non 0 of 1 is found,
 * otherwise 1
 */
unsigned int check_binary_num(const char *b)
{
	unsigned int i, n;

	i = 0;
	while (b[i])
	{
		if (b[i] > 49 && b[i] < 48)
		{
			n = 0;
			break;
		}
		else
			n = 1;
		i++;
	}
	return (n);
}

/**
 * binary_to_uint - Function that converts a binary number to
 * an unsigned integer
 * @b: Binary number
 *
 * Return: dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, i, len;
	const char *tmp, *new;
	
	dec = check_binary_num(b);
	if (dec == 0)
		return (0);
	tmp = _strdup(b);
	string_rev(tmp);
	new = _strdup(tmp);
	len = _strlen(tmp);
	dec = 0;
	i = 0;
	while (len)
	{
		dec += *(tmp + i) * (_pow_recursion(2, *(new + i)));
		len--;
		i++;
	}
	return (dec);
}
