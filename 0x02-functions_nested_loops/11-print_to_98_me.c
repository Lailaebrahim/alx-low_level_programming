#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * followed by a new line.
 * @n : int n number from which count will begin
 * Return: No return
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else if (i < 100)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar((i / 100) + '0');
_putchar(((i / 10) % 10) + '0');
_putchar((i % 10) + '0');
}
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
else
{
for (int i = n; i >= 98; i--)
{
if (i < 10)
{
_putchar(i + '0');
}
else if (i < 100)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
{
_putchar((i / 100) + '0');
_putchar(((i / 10) % 10) + '0');
_putchar((i % 10) + '0');
}
if (i > 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
