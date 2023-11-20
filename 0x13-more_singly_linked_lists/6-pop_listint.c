#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* pop_listint - deletes the head node of a listint_t
*
* @head:pointer
* Return:head node’s data (n)
*/
int pop_listint(listint_t **head)
{
listint_t *i;
int j;
if (head == NULL || *head == NULL)
return (0);
i = *head;
if (i)
{
j = i->n;
*head = i->next;
free(i);
}
return (j);
}
      
