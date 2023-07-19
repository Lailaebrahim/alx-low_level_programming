#include "main.h"
/**
 * print_last_digit - is  function that return last digit of a number
 * @n: int n takes the number to git it's last digit
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
int x = (n % 10);
_putchar (x + '0');
return (x);
}
