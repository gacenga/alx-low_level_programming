#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from n to 98, followed by a new line
*
* @n:number passed to function
*
* Return: void
*/
void print_to_98(int n)
{
int m;
int k;
if (n <= 98)
{
for (m = n; m <= 98; m++)
{
if (m != 98)
printf("%d", m);
else if (m == 98)
printf("%d\n", m);
}
} else if (n >= 98)
{
for (k = n; k >= 98; k--)
{
if (k != 98)
printf("%d", k);
else if (k == 98)
printf("%d\n", k);
}
}
