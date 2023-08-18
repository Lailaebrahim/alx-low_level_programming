#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
int i, x = 0, sum = 0;
va_list args;
va_start(args, n);
if (n == 0)
return (0);
else
{
for (i = 0 ; i < count ; i++)
{
x = va_arg(args, int);
s += x;
}
}
return (s);
}
