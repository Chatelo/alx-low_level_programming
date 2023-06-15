#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of linked list
 * @head: pointer to the head node of list
 *
 * Return: sum of all the data (n) in the list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
