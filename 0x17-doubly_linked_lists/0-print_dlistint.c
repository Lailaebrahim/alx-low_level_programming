#include "lists.h"
/**
 * print_dlistint - function to forward print doubly linked list
 * @h: pointer to head node
 * Return: Number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count_nodes = 0;
dlistint_t temp = h;
if (h == NULL)
return (count_nodes);

while (h->prev != NULL)
h = h->prev;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count_nodes);
}
