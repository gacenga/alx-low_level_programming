#include "main.h"
/**
* _memcpy - copies memory area
*
* @dest:memory area to copy to
* @src:memory area to copy from
* @n:no of bytes to copy
* Return:a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;
for (; i < j; i++)
{
dest[i] = src[i];
}
return (dest);
}
