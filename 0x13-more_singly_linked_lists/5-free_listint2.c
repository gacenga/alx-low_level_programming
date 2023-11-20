#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_listint2 -  frees a listint_t list
*
* @head:pointer
* Return:void
*/
void free_listint2(listint_t **head)
{
listint_t *i;
listint_t *j;
if (head == NULL || *head == NULL)
return;
j = *head;
while (j)
{
i = j->next;
free(j);
j = i;
}
*head = NULL;
}
