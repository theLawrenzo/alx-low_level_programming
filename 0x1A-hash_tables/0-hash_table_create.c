#include "hash_tables.h"

/**
 * hash_table_create - Create an empty hash table
 * @size: Size of the hash table
 *
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t *) * size);
	if (ht == NULL)
		return (NULL);

	return (ht);
}
