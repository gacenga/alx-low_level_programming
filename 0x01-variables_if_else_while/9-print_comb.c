#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: 0 Always (Success)
*/
int main(void)
{
int myNumber;
for (myNumber = '0'; myNumber <= '9'; myNumber++)
{
putchar(myNumber);
if (myNumber != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
