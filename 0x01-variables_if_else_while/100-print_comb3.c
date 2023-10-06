#include <stdio.h>
/**
* main - prints all possible different combinations of two digits
*
* Return: 0 Always (Success)
*/
int main(void)
{
int firstSet;
int secondSet;
for (firstSet = '0'; firstSet <= '9'; firstSet++)
{
for (secondSet = '0'; secondSet <= '9'; secondSet++)
{
if (firstSet < secondSet)
{
putchar(firstSet);
putchar(secondSet);
if (firstSet != '8' && secondSet != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
