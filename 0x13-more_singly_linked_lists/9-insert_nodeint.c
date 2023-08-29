#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp, *new_node;
new_node = malloc(sizeof(listint_t));
if (head == NULL || new_node == NULL)
return (NULL);
if (idx != 0)
{
temp = (*head);
for (i = 0 ; i <= idx ; i++)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}
new_node->next = temp->next;
temp->next = new_node;
new_node->n = n;
}
else
{
new_node->next = *head;
new_node->n = n;
}
return (new_node);
}
