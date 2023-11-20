#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
*
* @head:pointer
* @idx:input
* @n:input
* Return:address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *j;
listint_t *k = *head;
j = (listint_t *)malloc(sizeof(listint_t));
if (j == NULL)
return (NULL);
j->n = n;
j->next = NULL;
while (k != NULL || i < idx - 1)
{
k = k->next;
i++;
}
if (k == NULL)
{
free(j);
return (NULL);
}
j->next = k->next;
k->next = j;
return (j);
}
