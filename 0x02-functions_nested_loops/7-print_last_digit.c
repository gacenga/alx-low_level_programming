#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @s: character to be checked
*
* Return: 0 Always
*/
int print_last_digit(int s)
{
int a;
if (s > 0)
{
a = s % 10;
}
else if (s < 0)
{
s = -s;
a = s % 10;
}
_putchar(a + '0');
return (a);
}
