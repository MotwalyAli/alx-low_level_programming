#include <stdio.h>

/**
* main - this main is very importat
* Return: 0
*/

int main(void)
{
int di1, di2;

for (di1 = 0; di1 < 9; di1++)
{
for (di2 = di1 + 1; di2 < 10; di2++)
{
putchar((di1 % 10) + '0');
putchar((di2 % 10) + '0');

if (di1 == 8 && di2 == 9)
continue;

putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
