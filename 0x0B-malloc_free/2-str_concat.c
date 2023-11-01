#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
*
* @s1:input
* @s2:input
* Return:pointer to concatenated strings
*/
char *str_concat(char *s1, char *s2)
{
char *ptr;
int i = 0;
int j = 0;
int k;
int l;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
return (NULL);
for (k = 0; k < i; k++)
{
ptr[k] = s1[k];
}
for (l = 0; l < j; l++)
{
ptr[k] = s2[l];
k++;
}
ptr[k] = '\0';
return (ptr);
}
