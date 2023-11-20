#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* delete_nodeint_at_index - deletes the node at index index
*
* @head:pointer
* @index:input
* Return:1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *j;
listint_t *k = *head;
if (*head == NULL || head == NULL)
return (-1);
if (index == 0)
{
*head = k->next;
free(k);
return (1);
}
while (k != NULL && i < index - 1)
{
k = k->next;
i++;
}
if (k == NULL || k->next == NULL)
return (-1);
j = k->next;
k->next = j->next;
free(j);
return (1);
}
