#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 algorithm
 * @str: Key ['string'] used to generate hash code
 *
 * Return: hash
 */
unsigned long int djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;  /* hash * 33 + c */
	}
	return (hash);
}
