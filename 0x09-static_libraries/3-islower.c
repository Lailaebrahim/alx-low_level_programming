#include "main.h"
/**
 * _islower - is  function that checks lowercase letter
 * @c : int c takes the letter to check
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
