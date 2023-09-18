#include "main.h"

/**
 * swap_int - this function to swap the value of the pointers a & b
 *
 * @a: is the pointer pointing to the value of a which is i
 * @b: is the pointer pointing to the value of b which is j
 *
*/
void swap_int(int *a, int *b)
{
int i = *a;
int j = *b;

*a = j;
*b = i;
}
