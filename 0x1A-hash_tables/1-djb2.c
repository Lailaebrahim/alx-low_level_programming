#include "hash_tables.h"
/**
 * hash_djb2 - function that hashes keys using dgb2 algorithim
 * @str: key to be hashed
 * Return: hash code "index" of key given as a paramter
*/
unsigned long int hash_djb2(const unsigned char *str)
{
int c;
unsigned long int hash_code = 5831;
while ((c = *str++))
{
hash_code = ((hash_code << 5) + hash_code)+c;
}
return (hash_code);
}
