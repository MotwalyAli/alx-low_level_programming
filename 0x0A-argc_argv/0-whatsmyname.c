#include <stdio.h>

/**
 * main - is the main function with two arguments to be used
 * @argc: is the command line argument counter with integer datatype
 * @argv: is apointer of the command line argument vactor with char datatype
 *
 * Return: (0) at the end of the program.
 */
int main(int argc, char **argv)
{
(void)argc;
printf("%s", argv[0]);
printf("\n");
return (0);
}
