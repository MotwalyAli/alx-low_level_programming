#include <stdio.h>

/**
* main - this main is very importat
* Return: 0
*/

int main(void)
{
int di1, di2;

for (di = 0; di < 9; di++)
{
for (di = di1 + 1; di < 10; di2++)
{
putchar((di1 % 10) + '0');
putchar((di2 % 10) + '0');

if (di1 == 8 && di == 9)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
