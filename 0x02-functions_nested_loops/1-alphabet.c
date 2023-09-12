#include "main.h"
/*
 * void - is the most importat thing
 * this program prints lowercase alphabets
 * Return: 0
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
return (0);

}
