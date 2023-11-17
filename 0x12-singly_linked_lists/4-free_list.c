#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - frees a list_t list
*
* @head:pointer
* Return:void
*/
void free_list(list_t *head)
{
list_t *more;
list_t *start = head;
while (start != NULL)
{
more = start->next;
free(start);
start = more;
}
}
