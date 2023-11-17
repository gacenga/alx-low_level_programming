#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* add_node_end - adds a new node at the end of a list_t list
*
* @head:pointer
* @str:pointer
* Return:address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *end = *head;
if (str == NULL)
return (NULL);
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (end->next)
{
end = end->next;
}
end->next = new_node;
return (new_node);
}
