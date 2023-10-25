#include "main.h"
int another_thing(int n, int i);
/**
* is_prime_number - returns 1 if the input integer is a prime number
*
* @n:input
* Return:returns 1 if the input integer is a prime number
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (another_thing(n, n - 1));
}
/**
* another_thing - returns 1 if the input integer is a prime number
*
* @n:input
* @i:input
* Return:returns 1 if the input integer is a prime number
*/
int another_thing(int n, int i)
{
if (n % i == 0 && i > 0)
return (0);
if (i == 1)
return (1);
return (another_thing(n, i - 1));
}
