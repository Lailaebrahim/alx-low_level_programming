#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int i = 0, j = 0, k = 0, l = 0;
while (i <= 2)
{
while (j <= 3)
{
while (k <= 5)
{
while (l <= 59)
{
_putchar (i + '0');
_putchar (j + '0');
_putchar (':');
_putchar (k + '0');
_putchar (l + '0');
_putchar ('\n');
l++;
}
k++;
l = 0;
}
j++;
k = 0;
}
i++;
j = 0;
}
}
