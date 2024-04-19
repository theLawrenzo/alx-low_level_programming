ALX SE:

PROJECT - 0x1A. C - Hash tables

TASKS:

0. >>> ht {} 0
- Write a function that creates a hash table.
  * prototype: hash_table_t *hash_table_create(unsigned long int size);

1. djb2
- Write a hash function inplementing the djb2 algorithm
  * prototype: unsigned long int hash_djb2(constant unsigned char *str);

2. key->index
- Write a function that gives you the index of a key
  * Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);

3. >>>ht['Betty'] = 'cool'
- Write a function that adds an element to the hash table
  * Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);

4. >>>ht['Betty']
- Write a function that retrieves a value associated with a key
  * Prototype: char *hash_table_get(const hash_table_t *ht, const char * key);

5. >>>print['ht']
- Write a function that prints the hash table
  * Prototype: void hash_table_print(const hash_table_t * ht);

6. >>>del ht
- Write a function that deletes a hash table
  * Prototype: void hash_table_delete(hash_table_t * ht);

7. $ht['Betty'] = 'Cool'
- Create a sorted hash table
