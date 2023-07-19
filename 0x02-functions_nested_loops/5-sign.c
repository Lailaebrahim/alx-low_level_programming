#include "main.h"
/**
 * print_sign - is  function that checks sign of a number
 * @n: int c takes the letter to check
 * Return: 1 if n is positive
 * 0 if n is zero and -1 if n is negative
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (0);
}
}
