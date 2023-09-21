#include "main.h"
/**
 * _strcat - concats two arrays or appending one to another
 *
 * @dest: the string which is going to be the destination
 * @src: the arry of the string represents the source to be concatenaded
 *
 * Return: dest value
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
