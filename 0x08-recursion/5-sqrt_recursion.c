#include "main.h"
int the_sqrt(int n, int b);
/**
* _sqrt_recursion -  returns the natural square root of a number
*
* @n:input
* Return:the natural square root of a number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (the_sqrt(n, 0));
}
/**
* the_sqrt - returns the natural square root of a number
*
* @n:input
* @b:input
* Return:the natural square root of a number
*/
int the_sqrt(int n, int b)
{
if (b * b > n)
return (-1);
if (b * b == n)
return (b);
return (the_sqrt(n, b + 1));
}
