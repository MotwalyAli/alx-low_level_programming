#include <stdio.h>

/**
 * main - main block
 * this program is to print the first 50 fibonacci numbers, startiing with 1&2
 * Numbers must be coma and space separated
 * Return: 0
 */
int main(void)
{
int n = 2;
long int a = 1, b = 2;
long int c;

printf("%lu, ", a);
while (n <= 50)
{
if (n == 50)
{
printf("%lu\n", b);
}
else
{
printf("%lu, ", b);
}
c = b;
b += a;
a = c;
n++;
}
return (0);
}
