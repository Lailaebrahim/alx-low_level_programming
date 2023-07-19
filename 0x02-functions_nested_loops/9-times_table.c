#include "main.h"
/**
 * times_table - a function that prints times table
 */
void times_table(void)
{
int i, j;
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
_putchar((i *j) +'0');
_putchar(',');
_putchar(' ');
j++;
}
_putchar('\n');
i++;
}
}
