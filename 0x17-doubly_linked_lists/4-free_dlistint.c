#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dlistint - frees a dlistint_t list
*
* @head:first node
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
if (head != NULL)
{
while (head)
{
current = head;
head = head->next;
free (current);
}
}
}
