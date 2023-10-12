#include "lists.h"
/**
 * dlistint_len - function to get len doubly linked list
 * @h: pointer to head node
 * Return: Number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count_nodes = 0;
const dlistint_t *temp = h;
if (h == NULL)
return (count_nodes);

while (h->prev != NULL)
h = h->prev;
while (temp != NULL)
{
count_nodes++;
temp = temp->next;
}
return (count_nodes);
}
