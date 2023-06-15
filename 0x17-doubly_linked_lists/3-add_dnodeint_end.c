#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head: double pointer to head node.
 * @n: integer value for new node.
 * Return: address of new element, or NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *tmp;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}

tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;

tmp->next = new;
new->prev = tmp;

return (new);
}
