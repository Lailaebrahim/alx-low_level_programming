#include "main.h"
/**
 * more_numbers - a function that  prints the numbers, from 0 to 14
 * 10 times then followed by a new line.
 */
void more_numbers(void)
{
int i = 0, j = 0;
while (i <= 10)
{
while (j <= 14)
{
if (j / 10 == 0)
_putchar (j + '0');
else
{
_putchar (j / 10 + '0');
_putchar (j % 10 + '0');
}
j++;
}
i++;
}
_putchar ('\n');
}
