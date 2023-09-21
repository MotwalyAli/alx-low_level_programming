#include "main.h"

/**
 * reverse_array - reverses any array of string
 *
 * @a: array that is going to be reverseed
 * @n: size of array itself
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
