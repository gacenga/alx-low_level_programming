#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
*
* @nmemb:input
* @size:input
* Return:pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0)
return (NULL);
if (size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
