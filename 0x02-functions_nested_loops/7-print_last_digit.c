#include "main.h"
/**
 * print_last_digit - is  function that return last digit of a number
 * @n: int n takes the number to git it's last digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
int x;
if (n < 0)
{
n = -n;
}
x = (n % 10);
if (x < 0)
{
x = -x;
}
_putchar (x + '0');
return (x);
}
