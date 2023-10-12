#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98, followed by a new line
*
* @n:number passed to function
*
* Return: void
*/
void print_to_98(int n)
{
int x = n / 10;
int y = n % 10;
if (n < 98)
{
while (n < 98)
{
_putchar(x + '0');
_putchar(y + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
else if (n == 98)
{
_putchar(x + '0');
_putchar(y + '0');
}
else if (n > 98)
{
while (n > 98)
{
_putchar(x + '0');
_putchar(y + '0');
_putchar(',');
_putchar(' ');
n--;
}
}
_putchar('\n');
}
