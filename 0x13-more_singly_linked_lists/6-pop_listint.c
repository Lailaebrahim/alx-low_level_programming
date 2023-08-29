#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (*head == NULL || head == NULL)
return (0);
temp = *head;
n = (*head)->n;
*head = (*head)->next;
free(temp);
return (n);
}
