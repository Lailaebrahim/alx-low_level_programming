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
new_node->next = NULL;
new_node->n = n;
if (*head == NULL)
*head = new_node;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
