#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
*
* @array:pointer to first elem in array
* @size:size of array
* @value:value to be sought
* Return:ndex where value is located
*/
int binary_search(int *array, size_t size, int value)
{
int i, left = 0, right = size - 1, mid;
if (array)
{
while (left <= right)
{
printf("Searching in array:");
i = left;
while (i <= right)
{
if (i < right)
{
printf(" %d,", array[i]);
}
else
{
printf(" %d", array[i]);
}
i++;
}
printf("\n");
mid = left + (right - left) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
left = mid + 1;
}
else if (array[mid] > value)
{
right = mid - 1;
}
}
}
return (-1);
}
