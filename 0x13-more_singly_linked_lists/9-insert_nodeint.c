#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new, *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}

if (!temp)
return (NULL);

new->next = temp->next;
temp->next = new;
return (new);
}
