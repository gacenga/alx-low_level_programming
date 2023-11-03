#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers
*
* @min:input
* @max:input
* Return:pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *ptr;
int i = 0;
int j;
if (min > max)
return (NULL);
while (max >= min)
{
i++;
max--;
}
ptr = malloc(sizeof(int) * i);
if (ptr == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
ptr[j] = min;
min++;
}
return (ptr);
}
