#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the start key for the program
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/*(for the positive message.*/
if (n > 0)
{
	printf("%d is positive\n", n);
}
/*for the negative message.*/
else if (n < 0)
{
	printf("%d is negative\n", n);
}
/*for anything else which is the 0*/
else
{
	printf("%d is zero\n", n);
}
return (0);
}
