#include "main.h"
#include "lists.h"

/**
 * print_list - a function to print value in list
 * @h: pointer to head of list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int i = 0;
size_t nodes_n = 0;
char *temp = h->str;
list_t *temp_h = h; 
if (h == NULL)
return (0);
while (temp_h)
{
if (temp->str == NULL)
{
temp->str = "(nil)";
temp->len = 0;
}
_putchar('[');
_putchar(h->len);
_putchar('[');
_putchar(' ');
while (temp[i])
{
_putchar(temp[i]);
i++;
}
nodes_n++;
temp_h = temp_h->next;
}
