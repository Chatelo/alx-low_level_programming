#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to head of the linked list
 *
 * Return:  size of the linked list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current)
{
next = current->next;
size++;
free(current);
if (current <= next)
{
*h = NULL;
return (size);
}
current = next;
}
*h = NULL;
return (size);
}
