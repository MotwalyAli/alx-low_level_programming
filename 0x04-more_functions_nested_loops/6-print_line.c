#include "main.h"

/**
 * print_line - this function is used to draw a line
 *
 * @n: the long of the line by the number of underscoures
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
