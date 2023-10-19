#include "main.h"
/**
* reverse_array - reverses the content of an array of integers
*
* @a:input
* @n:input
* Return:void
*/
void reverse_array(int *a, int n)
{
int i;
int j;
i = 0;
while (i < n)
{
j = a[i];
a[i] = a[n];
a[n] = j;
n--;
i++;
}
}
