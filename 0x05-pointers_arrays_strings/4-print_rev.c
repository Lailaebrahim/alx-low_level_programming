#include "main.h"
/**
 * print_rev - a function that  prints a string, in reverse,
 * followed by a new line.
 * @s : pointer to a string
 */
void print_rev(char *s)
{
int len = 0, i = 0;
while (s[i] != '\0')
{
len++;
i++;
}
while (len > 0)
{
_putchar (s[i]);
i--;
len--;
}
_putchar ('\n');
return;
}
