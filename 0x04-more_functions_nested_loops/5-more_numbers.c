#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return:void
*/
void more_numbers(void)
{
char c = '0';
char x = '0';
char y;
while (x <= '9')
{
while (c <= 14)
{
y = c % 10;
if (c > 9)
_putchar('1');
_putchar(y + '0');
c++;
}
c = '0';
x++;
}
}
