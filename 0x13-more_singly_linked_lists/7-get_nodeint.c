#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node at a given index in a linked list
 * @head: pointer to the head of the linked list
 * @index: the index to retrieve
 *
 * Return: the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i;

for (i = 0; i < index && current; i++)
current = current->next;

return (current);
}
