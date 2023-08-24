#include "lists.h"

/**
 * print_list - a function to print value in list
 * @h: pointer to head of list
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{

size_t nodes_n = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
nodes_n++;
h = h->next;
}
return (nodes_n);
}
