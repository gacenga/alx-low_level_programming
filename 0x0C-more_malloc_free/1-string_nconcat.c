#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @s1:input string
* @s2:input string
* @n:input
* Return:pointer that points to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0;
unsigned int j = 0;
unsigned int l, m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (n >= j)
n = j;
ptr = malloc(sizeof(char) * (i + n + 1));
if (ptr == NULL)
return (NULL);
for (l = 0; l < i; l++)
{
ptr[l] = s1[l];
}
for (m = 0; m < n; m++)
{
ptr[l] = s2[m];
l++;
}
ptr[l] = '\0';
return (ptr);
}
