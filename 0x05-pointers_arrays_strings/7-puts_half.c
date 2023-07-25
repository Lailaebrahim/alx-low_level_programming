
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int i, half_len, len;
len = 0;
for (i = 0; str[i] != '\0'; i++)
len++;
half_len = (longi / 2);
if ((len % 2) == 1)
half_len = ((len + 1) / 2);
for (i = half_len; str[i] != '\0'; i++)
_putchar(str[a]);
_putchar('\n');
}
