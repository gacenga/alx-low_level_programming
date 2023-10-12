#include "main.h"
/**
* print_square - prints a square, followed by a new line
*
* @size:the size of the square
*
* Return:void
*/
void print_square(int size)
{
int x = 0;
int y = 0;
if (size > 0)
{
while (x < size)
{
while (y < size)
{
_putchar('#');
y++;
}
y = 0;
_putchar('\n');
x++;
}
}
else if (size <= 0)
{
_putchar('\n');
}
}
