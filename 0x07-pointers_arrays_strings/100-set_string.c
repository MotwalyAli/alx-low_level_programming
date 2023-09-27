#include "main.h"
/**
 * set_string - sets the value of a pointer to a varliable type char
 * @s: pointer to be changed
 * @to: string to change pointer to
 *
 * Return: void which means no return message
 */
void set_string(char **s, char *to)
{
	*s = to;
}
