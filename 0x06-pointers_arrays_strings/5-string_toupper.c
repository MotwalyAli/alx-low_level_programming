#include "main.h"
/**
 * string_toupper - this will change the lowercase to upercase
 * @s: character used ot change the lower to uper
 * Return: return value of upper one 
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
