#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the key for the program
 * Return: 0
*/
int main(void)
{
int n;
int LastD;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*I will use if elseif else */
/*the first if part*/
LastD = n % 10;
if (LastD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastD);
}
/*the elseif part */
else if (LastD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LastD);
}
/*the else part */
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastD);
}
return (0);
}
