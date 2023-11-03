#include "hash_tables.h"
/**
 * key_index - Function return index for which key will be stored at hash table
 * @key: Key to be indexed
 * @size: Size of the hash table array to define range of genertaed index
 * Return: index to store key
 * Descritption: Hashing with division
 * index = (hash code produces by dgb2 algo % size of hash table array)
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
