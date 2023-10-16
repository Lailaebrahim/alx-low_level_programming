#include "main.h"
/**
 * _isalpha - is  function that checks if character is an alphabet
 * @c : int c takes the letter to check
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
