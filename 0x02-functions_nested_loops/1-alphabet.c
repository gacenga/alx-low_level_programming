#include "main.h"
/**
* main - prints the alphabet, in lowercase, followed by a new line
*
* Return: 0 Always (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - prints alphabetin lowercase followed by new line
*
* Return: void Always (Success)
*/
void print_alphabet(void)
{
char myChar = 'a';
while (myChar <= 'z')
{
_putchar(myChar);
myChar++;
}
_putchar('\n');
}
