#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and
 * returns its data (n).
 * @head: pointer to a pointer to a listint_t struct.
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = temp->next;
free(temp);

return (n);
}
