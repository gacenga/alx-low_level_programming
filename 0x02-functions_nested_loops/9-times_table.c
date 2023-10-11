#include "main.h"
/**
* main - prints the 9 times table, starting with 0
*
* Result: 0 Always
*/
int main(void)
{
void times_table(void);
return (0);
}
/**
* times_table - prints the 9 times table, starting with 0
*
* Returns: void
*/
void times_table(void)
{
int a = '0';
while (a <= '9')
{
_putchar(a);
_putchar('x');
_putchar('9');
_putchar('=');
_putchar(a * '9');
}
}
