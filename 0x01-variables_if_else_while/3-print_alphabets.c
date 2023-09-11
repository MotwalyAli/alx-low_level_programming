#include <stdio.h>

/**
 * main - this program will print Alfabet in Ac and Lc
 * Return: 0
*/
int main(void)
{
char letter;

/*the first for used to lower case letters*/
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
/*the second for used to uper case lertters*/
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
