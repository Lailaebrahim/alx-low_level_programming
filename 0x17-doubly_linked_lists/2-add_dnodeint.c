#include "lists.h"
/**
 * add_dnodeint - function to add node at start of doubly linked list
 * @head:pointer to the pointer to head node
 * @n: value to be added
 * Return: Pointer to the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp;
newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

(newnode)->n = n;
(newnode)->prev = NULL;
temp = *head;

if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}

newnode->next = temp;
if (temp != NULL)
temp->prev = newnode;

*head = newnode;

return (newnode);
}
