#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers
*
* Return: 0 Always (Succcess)
*/
int main(void)
{
int three;
int four;
for (three = 0; three <= 100 ; three++)
{
for (four = 0; four <= 100 ; four++)
{
if (three < four)
{
putchar((three / 10) + 48);
putchar((four % 10) + 48);
putchar(' ');
putchar((three / 10) + 48);
putchar((four % 10) + 48);
if (three != 98 || four != 99)
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
