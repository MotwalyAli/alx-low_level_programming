#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - is our main function
 *
 * @a: integer number to get last digit of
 * Return: the last digit of a
 *
 */

int print_last_digit(int a)
{
	_putchar('0' + _abs(a % 10));
	return (_abs(a % 10));
}
