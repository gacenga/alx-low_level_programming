#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Return: 0 Always (Success)
*/
int main(void)
{
char hexadecimal_letter = 'a';
int hexadecimal_number = '0';
while (hexadecimal_number <= '9')
{
putchar(hexadecimal_number);
hexadecimal_number++;
}
while (hexadecimal_letter <= 'f')
{
putchar(hexadecimal_letter);
hexadecimal_letter++;
}
putchar('\n');
return (0);
}
