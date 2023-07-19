#include "main.h"
/**
 * times_table - a function that prints times table
 */
void times_table(void)
{
int i, j;
i = 0, j = 0;
while (i <= 9)
{
while (j <= 9)
{
if (((i *j) / 10) == 0)
{
_putchar((i *j) + '0');
}
else
{
_putchar(((i *j) / 10) + '0');
_putchar(((i *j) % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
if (((i *j) / 10) == 0)
{
_putchar(' ');
}
}
j++;
}
j = 0;
_putchar('\n');
i++;
}
}
