#include <stdio.h>

/**
 * main - this is the main func
 * Return: 0 at the end of the for loop
*/
int main(void)
{
/*Variable to store the sumation of the multibules of 3 and 5*/
int sum = 0;
int n;

for (n = 1; n < 1024; n++)
{
	if (n % 3 == 0 || n % 5 == 0)
	{
/* Add the number to the sum each time when the condition is true*/
	sum = sum + n;
	}
}
/*Print the sum of the multibules*/
printf("%d\n", sum);
return (0);
}
