#include "hash_tables.h"

/**
 * key_index - Function that returns the index of a key
 * @key: The key ['string'] to search for its index
 * @size: Size of the array of the hash table
 *
 * Return: idx
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	return (idx % size);
}
