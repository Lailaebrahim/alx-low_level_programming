#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * followed by a new line.
 * @n : int n number from which count will begin
 * Return: No return
 */
void print_to_98(int n)
{
int i = n;
while (i <= 98)
{
if ((i / 10) == 0)
{
_putchar(i + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar (',');
_putchar (' ');
i++;
}
_putchar('\n');
}
