#include "main.h"
/**
* main - prints the sign of a number
*
* Return: 0 Always (Success)
*/
int main(void)
{
int print_sign(int n);
return (0);
}
/**
* print_sign - prints the sign of a number
*
* @n: is character to be checked
* Return: 1 if n is greater than zero 0 if n is zero -1 if n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
