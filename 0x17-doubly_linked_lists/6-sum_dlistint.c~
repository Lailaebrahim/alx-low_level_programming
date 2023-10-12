#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = NULL;
if (head == NULL)
return (NULL);

temp = head;
while (temp)
{
if (index == i)
return (temp);
i++;
temp = temp->next;
}
return (NULL);
}
