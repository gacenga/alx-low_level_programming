#include <stdio.h>
/**
* main - prints all possible different combinations of three digits
*
* Return: 0 Always (Success)
*/
int main(void)
{
int firstSet;
int secondSet;
int thirdSet;
for (firstSet = '0'; firstSet <= '9'; firstSet++)
{
for (secondSet = '0'; secondSet <= '9'; secondSet++)
{
for (thirdSet = '0'; thirdSet <= '9'; thirdSet++)
{
if (firstSet < secondSet && secondSet < thirdSet)
{
putchar(firstSet);
putchar(secondSet);
putchar(thirdSet);
if (firstSet != '7' || secondSet != '8' || thirdSet != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
