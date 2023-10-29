#include "main.h"
#include <stdio.h>
/**
* main - prints the number of arguments
*
* @argv:argument
* @argc:argument
* Return:0 Always
*/
int main(int argc, char *argv[])
{
(void) argv;/*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
