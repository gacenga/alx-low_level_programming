#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* binary_to_uint - converts a binary number to an unsigned int
*
* @b:pointer
* Result:the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return 0;
while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
result = result * 2 + (*b - '0');
b++;
}
else
{
return 0;
}
}
return result;
}
