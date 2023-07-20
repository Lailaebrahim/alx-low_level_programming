#include "main.h"
/**
 * print_numbers - a function that  prints the numbers, from 0 to 9
 * followed by a new line.
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar (i + '0');
i++;
}
_putchar ('\n');
}
