#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair
 * should be stored in the array of the hash table
 * @key: The key to be hashed
 * @size: The size of the hash table array
 *
 * Return: The index of the key/value pair in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
