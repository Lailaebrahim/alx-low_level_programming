#include "lists.h"
/**
 * add_dnodeint - function to add node at start of doubly linked list
 * @h: pointer to head node
 * Return: Pointer to the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp;
newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
if (*head == NULL)
{
*head = newnode;
(*head)->n = n;
(*head)->prev = NULL;
(*head)->next = NULL;
return (newnode);
}

(*newnode)->n = n;
(*newnode)->prev = NULL;
(*newnode)->next = *head;
*head = newnode;
return (newnode);
}
