#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
*
* @size:size
* @c:character
* Return:a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int j;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
for (j = 0; j < size; j++)
ptr[j] = c;
return (ptr);
}
