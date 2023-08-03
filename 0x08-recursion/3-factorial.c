#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
int fact = 1;
if (n <= 0)
return (1);
fact = fact *factorial(n - 1);
}
