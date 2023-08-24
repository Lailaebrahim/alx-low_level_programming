#include "lists.h"

/**
 * print_list - a function to print value in list
 * @h: pointer to head of list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{

size_t nodes_n = 0;
char *temp;
unsigned int i = 0;

if (h == NULL)
return (0);
while (h)
{
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
 _putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
}
else
{
_putchar('[');
_putchar('0' + h->len);
_putchar(']');
_putchar(' ');
temp = h->str;
while (temp[i])
{
_putchar(temp[i]);
i++;
}
}
_putchar('\n');
nodes_n++;
h = h->next;
i = 0;
}
return (nodes_n);
}
