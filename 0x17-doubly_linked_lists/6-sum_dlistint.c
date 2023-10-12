#include "lists.h"

/**
 * sum_dlistint - calculate sum of values stored in doubly linked list.
 * @head: pointer to head of the list
 * Return: the summation
 **/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = NULL;
if (head == NULL)
return (0);

temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
