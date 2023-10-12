#include "main.h"
/**
* _islower - checks for lowercase character
*
* Parameters:
* @c: character to be checked
*
* Return: 1 for lowercase charecter 0 for everything else
*/
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
