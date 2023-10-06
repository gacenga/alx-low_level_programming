#include <stdio.h>
/**
* main - prints the alphabet in lowercase except q and e
*
* Return: 0 Alway (Success)
*/
int main(void)
{
char lower_case = 'a';
while (lower_case <= 'z')
{
if (lower_case != 'q' && lower_case != 'e')
{
putchar(lower_case);
}
lower_case++;
}
putchar('\n');
return (0);
}
