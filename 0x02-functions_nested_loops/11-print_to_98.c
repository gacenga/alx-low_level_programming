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
if (x <= '9' || y <= '8')
{
while (x <= '9')
{
while ((y <= '8' && x == '9') || (y <= '9' && x != '9'))
{
_putchar(x);
_putchar(y);
_putchar(',');
_putchar(' ');
}
}
}
}
