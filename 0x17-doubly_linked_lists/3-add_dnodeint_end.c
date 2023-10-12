#include "lists.h"
/**
 * add_dnodeint_end - function to add node at end of doubly linked list
 * @head:pointer to the pointer to head node
 * @n: value to be added
 * Return: Pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp;
newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

(newnode)->n = n;
(newnode)->next = NULL;
temp = *head;

if (temp != NULL)
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newnode;
}
else
*head = newnode;

newnode->prev = temp;

return (newnode);
}
