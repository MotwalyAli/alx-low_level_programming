#include "main.h"

/**
 * _puts - this is our main function to put a string
 *
 * @str: is the string will printed
 */
void _puts(char *str)
{
int n;

for (n = 0; *(str + n) != '\0'; n++)
{
	_putchar(*(str + n));
}
_putchar('\n');
}
