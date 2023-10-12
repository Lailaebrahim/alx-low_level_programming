#include "lists.h"

/**
 * sum_dnodeint - calculate sum of values stored in doubly linked list.
 * @head: pointer to head of the list
 * Return: the summation
 **/
int sum_dnodeint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = NULL;
if (head == NULL)
return (0);

temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
