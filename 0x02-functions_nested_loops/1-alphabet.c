#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
char letter = 'a';
/*looping untill reaching z letter*/
while (letter <= 'z')
{
/*printing the letters using putchar*/
_putchar(letter);
/*increasing letters from a to z*/
letter++;
}
_putchar('\n');
}
