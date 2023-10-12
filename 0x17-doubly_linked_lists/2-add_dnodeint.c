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
newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

(newnode)->n = n;
(newnode)->prev = NULL;
if (*head == NULL)
{
newnode->next = NULL;
*head = newnode;
return (newnode);
}

if (*head != NULL)
{
while ((*head)->prev != NULL)
*head = (*head)->prev;
(newnode)->next = *head;
*head = newnode;
return (newnode);
}
return (newnode);
}
