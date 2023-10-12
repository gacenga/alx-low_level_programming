#include "main.h"
/**
* print_alphabet_x10 - print 10 times alphabetin lowercase followed by new line
*
* Return: void Always (Success)
*/
void print_alphabet_x10(void)
{
char myChar = 'a';
int myInteger = 0;
while (myInteger < 10)
{
while (myChar <= 'z')
{
_putchar(myChar);
myChar++;
}
_putchar('\n');
myInteger++;
}
}
