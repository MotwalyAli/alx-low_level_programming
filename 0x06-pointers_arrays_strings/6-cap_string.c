#include "main.h"
/**
 * _indexOf - this return boolean
 * @a: character to return
 * Return: thr return value is true or false
 */
int _indexOf(char a)
{
	int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes the string
 * @s: this is the string
 * Return: the string after capitalizing all the the characters
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;

	}
	return (s);
}
