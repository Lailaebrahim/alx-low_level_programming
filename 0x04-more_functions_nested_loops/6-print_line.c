#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * followed by a new line.
 * @n : number of _ to be printed
 */
void print_line(int n)
{
while (n > 0)
{
_putchar ('_');
n--;
}
_putchar ('\n');
}
