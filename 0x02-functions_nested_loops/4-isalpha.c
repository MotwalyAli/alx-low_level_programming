#include "main.h"
/**
 * _isalpha - this the main fucntion
 *
 * @c: character to comparere a
 *
 * Return: 1 if true, 0 if false
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
