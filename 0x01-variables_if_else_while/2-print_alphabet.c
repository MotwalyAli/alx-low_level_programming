#include <stdio.h>

/**
 * main - this time no printf to be used just putchar
 * Return: 0
*/
int main(void)
{
char letter = 'a';
/*looping untill reaching z letter*/
while (letter <= 'z')
{
/*printing the letters using putchar*/
putchar(letter);
/*increasing letters from a to z*/
letter++;
}
return (0);
}
