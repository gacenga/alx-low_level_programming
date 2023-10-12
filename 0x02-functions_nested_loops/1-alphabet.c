#include "main.h"
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
