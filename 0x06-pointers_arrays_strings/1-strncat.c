#include "main.h"
/**
 * _strncat - this is semillar to previous on to concats two arrays
 *
 * @dest: here is the place where iam going to append the other array
 * @src: this will represents the sourse to be concatenated
 * @n: number of times to append
 *
 * Return: dest value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
