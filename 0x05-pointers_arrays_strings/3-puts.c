#include "main.h"

/**
 * _puts - main function to put a string
 *
 * @str: the string to be printed
 */
void _puts(char *str)
int _putchar(char c)
{
	int n;

	for (n = 0; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
