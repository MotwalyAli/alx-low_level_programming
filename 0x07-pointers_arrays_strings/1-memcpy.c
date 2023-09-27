#include "main.h"

/**
 * _memcpy - this function function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: elemnts which will be copied
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: return the pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
