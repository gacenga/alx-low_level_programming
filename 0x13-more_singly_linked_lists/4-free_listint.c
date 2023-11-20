#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* free_listint - frees a listint_t list.
*
* @head:pointer
* Return:void
*/
void free_listint(listint_t *head)
{
listint_t *i;
while (head)
{
i = head->next;
free(head);
head = i;
}
}
