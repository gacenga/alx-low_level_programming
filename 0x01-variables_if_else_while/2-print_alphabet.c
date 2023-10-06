#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: 0 Always (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
