#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*
* Returns: void
*/
void times_table(void)
{
int a = 0;
int b = 0;
while (a <= 9)
{
while (b <= 9)
{
int c = a * b;
if ((c == 0 || c < 10) && b != 9)
{
_putchar(c + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if ((c == 0 || c < 10) && b == 9)
{
_putchar(c + '0');
}
if (c >= 10 && b != 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else if (c >= 10 && b == 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
b++;
}
_putchar('\n');
a++;
b = 0;
}
}
