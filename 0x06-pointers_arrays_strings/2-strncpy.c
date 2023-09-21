#include "main.h"
/**
 * _strncpy - copies an array of string from array1 to other one by overwriting
 * @dest: destination to copy the string
 * @src: the string which is going to be copied
 * @n: number of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
