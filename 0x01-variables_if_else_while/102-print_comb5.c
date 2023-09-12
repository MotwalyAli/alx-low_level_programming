#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit
* Return: 0
*/

int main(void)

{
int Nu1, Nu2;

for (Nu1 = 0; Nu1 <= 98; Nu1++)
{
for (Nu2 = Nu1 + 1; Nu2 <= 99; Nu2++)
{
putchar((Nu1 / 10) + '0');
putchar((Nu1 % 10) + '0');
putchar(' ');
putchar((Nu2 / 10) + '0');
putchar((Nu2 % 10) + '0');

if (Nu1 == 98 && Nu2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
