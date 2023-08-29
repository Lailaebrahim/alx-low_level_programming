
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head node
 * Return: sum all the data and zero if head == null
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
}
return (sum);
}
