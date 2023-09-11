#include <stdio.h>

/**
 * main - this the main which is important
 * print base16 numbers
 * Return: 0
 */
int main(void)
{
int Nu;
char Ch;

for (Nu = 48; Nu < 58; Nu++)
{
putchar(Nu);
}
for (Ch = 'a'; Ch <= 'f'; Ch++)
{
putchar(Ch);
}
putchar('\n');
return (0);
}
