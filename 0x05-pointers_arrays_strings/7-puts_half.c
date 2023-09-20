#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - this is our main function to print half of the screan
 *
 * @str: the string intered which is going to be used
 */
void puts_half(char *str)
{
	int a;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (a = (_strlen(str) + oE) / 2; a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
