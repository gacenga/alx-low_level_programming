#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
*
* @str:pointer to string
* Return:pointer to the duplicated string
*/
char *_strdup(char *str)
{
char *ptr;
int j = 0;
int i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
j++;
}
ptr = malloc(sizeof(char) * (j + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
