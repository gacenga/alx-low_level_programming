#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
*
* @array:input array
* @size:size of array
* @value:value to be sought
*
* Return:first index where value is found
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
else
{
continue;
}
}
}
return (-1);
}
