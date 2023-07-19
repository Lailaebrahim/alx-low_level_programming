#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int i, step;
if (n <= 98)
{
i = n;
step = 1;
}
else
{
i = n;
step = -1;
}
while (i != 99)
{
if (i != n)
{
_putchar(',');
_putchar(' ');
}
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i += step;
}
_putchar('\n');
}
