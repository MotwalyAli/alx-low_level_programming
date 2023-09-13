#include "main.h"
/**
 * _abs - is our main function
 *
 * @a: integer to make absolute
 *
 * Return: int if true, esle int multiblied by -1
 *
 */

int _abs(int a)
{
	if (a > 0)
		return (a);
	else
		return (a * -1);
}
