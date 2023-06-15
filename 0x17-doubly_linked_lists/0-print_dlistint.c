#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
nodes++;
h = h->next;
}
return (nodes);
}
