#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers
*
* Return: 0 Always (Succcess)
*/
int main(void)
{
int one;
int two;
int three;
int four;
for (one = '0'; one <= '9'; one++)
{
for (two = '0'; two <= '9'; two++)
{
for (three = '0'; three <= '9'; three++)
{
for (four = '0'; four <= '9'; four++)
{
putchar(one);
putchar(two);
putchar(' ');
putchar(three);
putchar(four);
if (one != '9' || two != '8' || three != '9' || four != '9')
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
