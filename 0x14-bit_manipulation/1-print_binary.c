#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_binary - prints the binary representation of a number
*
* @n:input
* Return:void
*/
void print_binary(unsigned long int n)
{
int i;
int significant_bit_found = 0;
for (i = 63; i >= 0; i--)
{
if ((n >> i) & 1 || i == 0)
{
putchar('0' + ((n >> i) & 1));
significant_bit_found = 1;
}
else if (significant_bit_found)
{
putchar('0');
}
}
}
