#include <stdio.h>
/**
* main - prints the lowercase alphabet in reverse
*
* Return: 0 Always (Success)
*/
int main(void)
{
char lower_caserev = 'z';
while (lower_caserev >=  'a')
{
putchar(lower_caserev);
lower_caserev--;
}
putchar('\n');
return (0);
}
