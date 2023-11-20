#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint - adds a new node at the beginning
*
* @head:pointer
* @n:input
* Return:address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *i;
i = (listint_t *)malloc(sizeof(listint_t));
if (i == NULL)
{
return (NULL);
free(i);
}
i->n = n;
i->next = *head;
*head = i;
return (i);
}
