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
int x;
int y;
int z;
if (n == 98)
{
x = n / 10;
y = n % 10;
_putchar(x);
_putchar(y);
}
else if (n > 98)
{
z = n / 100;
x = n / 10;
y = n % 10;
while (n >= 98)
{
_putchar(z);
_putchar(x);
_putchar(y);
_putchar(',');
_putchar(' ');
}
}
else if (n < 98)
{
while (n <= 98)
{
_putchar(x);
_putchar(y);
_putchar(',');
_putchar(' ');
}
}
}
