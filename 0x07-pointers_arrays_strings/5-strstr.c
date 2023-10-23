#include "main.h"
/**
* _strstr -  locates a substring
* @haystack:input
* @needle:input
* Return:pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = haystack;
char *j = needle;
while (*i == *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
haystack++;
}
return (0);
}
