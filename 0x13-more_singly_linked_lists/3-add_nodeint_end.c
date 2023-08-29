#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at end of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL || head == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_node;
(*head)->next = NULL;
(*head)->n = n;
}
else
{
while (temp->next)
{
temp = temp->next;
}
temp->next = new_node;
new_node->next = NULL;
temp->n = n;
}
return (new_node);
}
