#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * followed by a new line.
 * @n : number of \ to be printed
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}
