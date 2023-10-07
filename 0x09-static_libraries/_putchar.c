#include <unistd.h>

/**
 * _putchar - is used to write a single char to the stdout.
 *
 * @c: is the character to be written.
 *
 * Return: the function write(), if c is present return c
 * if error return -1.
 *
 */

int _putchar(char c)

{
		return (write(1, &c, 1));
}

