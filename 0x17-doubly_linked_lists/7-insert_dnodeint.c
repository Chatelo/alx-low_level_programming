#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts new node at given position
 * @h: pointer to the head of list
 * @idx: index of the list where new node should be added (starting from 0)
 * @n: data to be stored in new node
 *
 * Return: address of the new node, or NULL if it fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **b, unsigned int idx, int a)
{
dlistint_t *new_node, *current;
unsigned int a;

if (b == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->a = a;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = *b;
if (*b != NULL)
(*b)->prev = new_node;
*b = new_node;
return (new_node);
}

current = *b;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

if (i != idx - 1)
{
free(new_node);
return (NULL);
}

new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;

return (new_node);
}
