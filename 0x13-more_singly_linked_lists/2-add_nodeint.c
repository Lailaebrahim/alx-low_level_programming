#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at beginning of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
*head = new_node;
else
{
new_node->next = *head;
*head = new_node;
}
new_node->n = n;
return (head);
}
