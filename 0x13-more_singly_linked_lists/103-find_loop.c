#include "lists.h"

/**
 * find_listint_loop - function to find loop in linked list
 * @head: pointer to head of linked list
 * Return: address of node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head, *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
