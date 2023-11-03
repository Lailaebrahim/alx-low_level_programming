#include "hash_tables.h"
/**
 * hash_djb2 - function that hashes keys using dgb2 algorithim
 * @str: key to be hashed
 * Return: hash code "index" of key given as a paramter
 * Description: djb2 algorithim takes an input (usually a string)
 * and processes it to generate a fixed-size output where that the same
 * input will always produce the same hash value
 * steps :
 * 1- Choose an initial value = 5381
 * 2- iterate on each char by string
 * 3- Shift accumulated hash code by 5 "equal to multiply by 33"
 * and add it to hash code
 * 4- add the char ascii value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
int c;
unsigned long int hash_code = 5381;
while ((c = *str++))
{
hash_code = ((hash_code << 5) + hash_code) +c;
}
return (hash_code);
}
