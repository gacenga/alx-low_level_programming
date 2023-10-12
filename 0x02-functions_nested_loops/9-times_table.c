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
while (b <= '9')
{
_putchar((a * b) + '0');
_putchar(',');
_putchar(' ');
b++;
}
a++;
b = 0;
}
}
