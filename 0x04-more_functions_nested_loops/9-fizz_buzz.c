#include "main.h"
#include <stdio.h>
/**
* main -  prints the numbers from 1 to 100, followed by a new line
*
* Return: 0 Always
*/
int main(void)
{
int n = 1;
while (n <= 100)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf("Fizz ");
}
else if (n % 3 != 0 && n % 5 == 0)
{
printf("Buzz ");
}
else if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
n++;
}
printf("\n");
return (0);
}
