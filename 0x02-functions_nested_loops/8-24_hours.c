#include "main.h"
/**
* jack_bauer - prints minutes of the day
*
* Return: 0 Always
*/
void jack_bauer(void)
{
int a = '0';
int b = '0';
int c = '0';
int d = '0';
while (a <= '2')
{
while ((b <= '3' && a == '2') || (b <= '9' && a < '2'))
{
while (c <= '5')
{
while (d <= '9')
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
}
}
}
}
}
