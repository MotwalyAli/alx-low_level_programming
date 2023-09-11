#include <stdio.h>

/**
* main - this program for printing the alphabet with exceptions
*Return: 0
*/

int main(void)
{
char letter;

/*we are going to use for first*/
for (letter = 'a'; letter <= 'z'; letter++)
{
/*and using if inside the block of the for with the for condition*/
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
