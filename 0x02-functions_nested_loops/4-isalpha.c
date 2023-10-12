#include "main.h"
/**
* _isalpha - checks for alphabet character
*
* Parameters:
* @c: character to be checked
*
* Return: 1 for alphabet charecter 0 for everything else
*/
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
