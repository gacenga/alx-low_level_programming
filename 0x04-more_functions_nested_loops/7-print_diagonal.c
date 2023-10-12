#include "main.h"
/**
* print_diagonal -  draws a diagonal line on the terminal.
*
* @n:number of times the character \ should be printed
*
* Return:void
*/
void print_diagonal(int n)
{
if (n > 0)
{
int y = 0;
int z = 0;
while (z < n)
{
while (y < n)
{
if (y == z)
{
_putchar('\\');
}
else if (y < z)
{
_putchar(' ');
}
y++;
}
y = 0;
_putchar('\n');
z++;
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
