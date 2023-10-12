#include "main.h"
/**
* _abs - checks for alphabet character
*
* @s:character being checked
*
* Return: 0 Always
*/
int _abs(int s)
{
if (s >= 0)
{
_putchar(s);
}
else if (s < 0)
{
_putchar(-s);
}
return (0);
}
