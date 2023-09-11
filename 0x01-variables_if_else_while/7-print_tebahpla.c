#include <stdio.h>

/**
 * main - this time no printf to be used putchar
 * printing alphabets in descending order
 * Return: 0
*/
int main(void)
{
char letter = 'z';
/*looping untill reaching a letter*/
while (letter >= 'a')
{
/*printing the letters using putchar*/
putchar(letter);
/*descending  letters from z to a*/
letter--;
}
putchar('\n');
return (0);
}
