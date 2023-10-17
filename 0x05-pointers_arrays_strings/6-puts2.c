#include "main.h"
/**
* puts2 - prints every other character of a string
*
* @str:input
*
* Return:void
*/
void puts2(char *str)
{
int o = 0;
int m = 0;
while (*str != '\0')
{
o++;
str++;
}
while (m <= o)
{
_putchar(str[m]);     
}
_putchar('\n');
}
