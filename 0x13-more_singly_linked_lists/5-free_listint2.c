#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: double pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
    listint_t *temp;

    if (!head)
        return;

    while (*head)
    {
        temp = (*head)->next;
        free(*head);
        *head = temp;
    }
    *head = NULL;
}

