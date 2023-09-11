#include <stdio.h>

/**
* main - the main is very important
* this program will print numbers with , and spases
* Return: 0
*/
int main(void)
{
int Nu;

for (Nu = 0; Nu <= 9; Nu++)
{
putchar((Nu % 10) + '0');
if (num == 9)
continue;

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
