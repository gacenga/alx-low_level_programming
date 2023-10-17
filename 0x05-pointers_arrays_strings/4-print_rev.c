#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line
*
* @s: input
* Return: void
*/
void print_rev(char *s)
{
int m = 0;
while (*s != '\0')
{
m++;
s++;
}
while (m <= 0)
{
_putchar(*s);
s--;
m--;
}
}
