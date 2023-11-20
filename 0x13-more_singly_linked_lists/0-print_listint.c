#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include  <string.h>
/**
* print_listint - prints all the elements of a listint_t list
*
* @h:pointer
* Return:number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
