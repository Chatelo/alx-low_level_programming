#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node in the list
 * @str: string to be duplicated and added as the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last;
int i;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

for (i = 0; str[i]; i++)
;
new_node->len = i;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last = *head;
while (last->next != NULL)
last = last->next;
last->next = new_node;

return (new_node);
}
