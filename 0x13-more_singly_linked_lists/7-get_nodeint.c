#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_nodeint_at_index - returns the nth node of a listint_t
*
* @head:pointer
* @index:input
* Return:nth node of a listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *k = head; 
while (i < index)
{
k = k->next;
i++;
if (k == NULL)
return (NULL);
}
return (k);
}
