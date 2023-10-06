#include <stdio.h>
/**
* main - prints all single digit numbers of base 10 starting from 0
*
* Return: 0 Always (Success)
*/
int main(void)
{
int myInteger = '0';
while (myInteger <= '9')
{
putchar(myInteger);
myInteger++;
}
putchar('\n');
return (0);
}
