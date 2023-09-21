#include "main.h"
/**
 * _strcmp - this function is used to compare two strings
 * @s1: string num1
 * @s2: string num2
 *
 * Return: value of the comparing of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
