#include "main.h"
/**
* rev_string - reverses a string
*
* @s:input
*
* Return:void
*/
void rev_string(char *s)
{
char x = s[0];
int m = 0;
int i;
while (s[m] != '\0')
{
m++;
}
for (i = 0; i < m; i++)
{
m--;
x = s[i];
s[i] = s[m];
s[m] = x;
}
}
