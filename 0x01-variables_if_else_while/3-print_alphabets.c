#include <stdio.h>
/**
* main -  prints the alphabet in lowercase and then in uppercase
*
* Return: 0 Always (Success)
*/
int main(void)
{
char upper_case = 'A';
char lower_case = 'a';
while (lower_case <= 'z')
{
putchar(lower_case);
lower_case++;
}
while (upper_case <= 'Z')
{
putchar(upper_case);
upper_case++;
}
putchar('\n');
return (0);
}
