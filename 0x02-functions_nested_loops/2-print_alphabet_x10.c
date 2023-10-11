#include "main.h"
/**
* main - prints 10 times the alphabet, in lowercase, followed by a new line
*
* Return: 0 Always (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - print 10 times alphabetin lowercase followed by new line
*
* Return: void Always (Success)
*/
void print_alphabet(void)
{
char myChar = 'a';
int myInteger = 0;
while (myInteger <= 9)
{
while (myChar <= 'z')
{
_putchar(myChar);
myChar++;
}
myInteger++;
_putchar('\n');
}
}
